using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using JewelMine.Engine;
using JewelMine.Engine.Models;

/// <summary>
/// View controller.
/// </summary>
public class ViewController : IGameView
{
	private Dictionary<JewelType, GameObject> jewelTypeDictionary = null;
	private IGameStateProvider stateProvider = null;
	public ViewControllerContext context = null;
	private GameMessageController gameMessageController = null;
	private List<string> messages = null;

	/// <summary>
	/// Initializes a new instance of the <see cref="ViewController"/> class.
	/// </summary>
	/// <param name="viewControllerContext">View controller context.</param>
	public ViewController (ViewControllerContext viewControllerContext)
	{
		jewelTypeDictionary = new Dictionary<JewelType, GameObject> ();
		messages = new List<string> ();
		context = viewControllerContext;
		stateProvider = context.Provider;
		BuildJewelTypeDictionary (context.JewelPrefabs);
		gameMessageController = new GameMessageController (context.GameMessageSlots, context.ConfigurableSettings.GameMessageVisibleTime);
		AddInitialJewelsToView ();
		context.DifficultyText.text = stateProvider.State.Difficulty.DifficultyLevel.ToString ();
	}

	/// <summary>
	/// Builds the jewel type dictionary.
	/// </summary>
	/// <param name="jewelPrefabs">Jewel prefabs.</param>
	private void BuildJewelTypeDictionary (List<GameObject> jewelPrefabs)
	{
		foreach (GameObject jewelPrefab in jewelPrefabs) {
			JewelTag tag = jewelPrefab.GetComponent<JewelTag> ();
			jewelTypeDictionary.Add (tag.jewelType, jewelPrefab);
		}
	}

	/// <summary>
	/// Updates the view.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	/// <param name="uiEventUpdate">User interface event update.</param>
	public void UpdateView (GameLogicUpdate logicUpdate, GameUIEventUpdate uiEventUpdate)
	{
		ProcessUIEvents(uiEventUpdate);
		ProcessGameState (logicUpdate);
		ProcessNewJewels (logicUpdate);
		ProcessJewelMovements (logicUpdate);
		ProcessFinalisedGroupCollisions (logicUpdate);
		ProcessGroupCollisions ();
		ProcessInvalidGroupCollisions (logicUpdate);
		ProcessScore (logicUpdate);
		ProcessLevel (logicUpdate);
		ProcessMessages (logicUpdate);
		context.AudioSystem.PlaySounds(logicUpdate);
	}
	
	/// <summary>
	/// Processes the user interface events.
	/// </summary>
	/// <param name="uiEventUpdate">User interface event update.</param>
	private void ProcessUIEvents (GameUIEventUpdate uiEventUpdate)
	{
		if(uiEventUpdate.ShowSplash)
		{
			context.SplashController.ShowSplashPanel(stateProvider.State.PlayState);
		}
		if(uiEventUpdate.HideSplash)
		{
			context.SplashController.HideSplashPanel();
		}
		if(uiEventUpdate.ShowOptions)
		{
			context.OptionsController.ShowOptionsPanel();
		}
		if(uiEventUpdate.HideOptions)
		{
			context.OptionsController.HideOptionsPanel();
		}
		if(uiEventUpdate.ToggleBackgroundMusic)
		{
			ToggleBackgroundMusic();
		}
		if(uiEventUpdate.ToggleSoundEffects)
		{
			ToggleSoundEffects();
		}
	}

	/// <summary>
	/// Processes the messages.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessMessages (GameLogicUpdate logicUpdate)
	{
		messages.AddRange (logicUpdate.Messages);
		gameMessageController.DisplayMessages (messages);
		messages.Clear ();
	}

	/// <summary>
	/// Processes the level.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessLevel (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.LevelIncremented || logicUpdate.DifficultyChanged)
			context.LevelText.text = string.Format (context.ConfigurableSettings.GameMessageLevelPattern, stateProvider.State.Level);
	}

	/// <summary>
	/// Processes the score.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessScore (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.FinalisedCollisions.Count > 0 || logicUpdate.DifficultyChanged)
			context.ScoreText.text = string.Format (context.ConfigurableSettings.GameMessageScorePattern, stateProvider.State.Score.ToString (context.ConfigurableSettings.GameMessageScoreFormatString));
	}

	/// <summary>
	/// Processes the invalid group collisions.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessInvalidGroupCollisions (GameLogicUpdate logicUpdate)
	{
		foreach (MarkedCollisionGroup mcg in stateProvider.State.Mine.InvalidMarkedCollisions) {
			foreach (CollisionGroupMember m in mcg.Members) {
				m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = m.Jewel.GameObject.GetComponent<JewelMaterial> ().rendererMaterial;
			}
		}
	}

	/// <summary>
	/// Processes the finalised group collisions.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessFinalisedGroupCollisions (GameLogicUpdate logicUpdate)
	{
		foreach (var collision in logicUpdate.FinalisedCollisions) {
			foreach (var member in collision.Members) {
				GameObject.Instantiate (context.ExplosionPrefab, member.Jewel.GameObject.transform.position, Quaternion.identity);
				GameObject.Destroy (member.Jewel.GameObject);
			}
		}
	}

	/// <summary>
	/// Processes the jewel movements.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessJewelMovements (GameLogicUpdate logicUpdate)
	{
		var normalMovements = logicUpdate.JewelMovements.Where (x => x.Jewel.GameObject != null);
		foreach (var jewelMovement in normalMovements) {
			jewelMovement.Jewel.GameObject.transform.position = new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0);
		}
	}

	/// <summary>
	/// Processes the new jewels.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessNewJewels (GameLogicUpdate logicUpdate)
	{
		var newJewels = logicUpdate.JewelMovements.Where (x => x.Jewel.GameObject == null);
		foreach (var jewelMovement in newJewels) {
			GameObject targetType = jewelTypeDictionary [jewelMovement.Jewel.JewelType];
			GameObject newJewelGameObject = (GameObject)GameObject.Instantiate (targetType, new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0), Quaternion.identity);
			jewelMovement.Jewel.GameObject = newJewelGameObject;
		}
	}
	
	/// <summary>
	/// Re-initialises view.
	/// </summary>
	private void ReInitialiseView ()
	{
		GameObject[] jewels = GameObject.FindGameObjectsWithTag ("Jewel");
		jewels.ForEach (x => GameObject.Destroy (x));
		AddInitialJewelsToView ();
		context.DifficultyText.text = stateProvider.State.Difficulty.DifficultyLevel.ToString ();
	}
	
	/// <summary>
	/// Processes the state of the game.
	/// </summary>
	private void ProcessGameState (GameLogicUpdate logicUpdate)
	{
		if (stateProvider.State.PlayState != GamePlayState.Playing) {
			if(stateProvider.State.PlayState == GamePlayState.NotStarted){
				context.SplashController.ShowSplashPanel(stateProvider.State.PlayState);
			}
			string stateText = string.Empty;
			string stateSubtext = string.Empty;
			GetGameStateText (out stateText, out stateSubtext);
			context.GameStateText.text = stateText;
			context.GameStateSubtext.text = stateSubtext;
		} else {
			context.GameStateText.text = string.Empty;
			context.GameStateSubtext.text = string.Empty;
		}

		if (stateProvider.State.PlayState == GamePlayState.GameOver) {

		}

		if (logicUpdate.DifficultyChanged)
			ReInitialiseView ();
		if (logicUpdate.GameLoaded)
			ReInitialiseView ();
		if (logicUpdate.GameWasRestarted)
			ReInitialiseView ();
	}

	/// <summary>
	/// Updates the group collisions.
	/// </summary>
	private void ProcessGroupCollisions ()
	{
		foreach (MarkedCollisionGroup mcg in stateProvider.State.Mine.MarkedCollisions) {
			foreach (CollisionGroupMember m in mcg.Members) {
				if (mcg.CollisionTickCount % 2 != 0) {
					m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = context.CollisionGroupMaterial;
				} else {
					m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = m.Jewel.GameObject.GetComponent<JewelMaterial> ().rendererMaterial;
				}
			}
		}
	}

	/// <summary>
	/// Gets the game state text.
	/// </summary>
	/// <param name="stateText">The state text.</param>
	/// <param name="stateSubText">The state sub text.</param>
	private void GetGameStateText (out string stateText, out string stateSubText)
	{
		stateText = string.Empty;
		stateSubText = string.Empty;
		switch (stateProvider.State.PlayState) {
		case GamePlayState.GameOver:
			stateText = context.ConfigurableSettings.GameMessageGameOverText;
			stateSubText = context.ConfigurableSettings.GameMessageGameOverSubtext;
			break;
		case GamePlayState.GameWon:
			stateText = context.ConfigurableSettings.GameMessageGameWonText;
			stateSubText = context.ConfigurableSettings.GameMessageGameWonSubtext;
			break;
		case GamePlayState.Paused:
			stateText = context.ConfigurableSettings.GameMessagePausedText;
			stateSubText = context.ConfigurableSettings.GameMessagePausedSubtext;
			break;
		}
	}

	/// <summary>
	/// Adds the initial jewels to view.
	/// </summary>
	private void AddInitialJewelsToView ()
	{
		for (int y=0; y < stateProvider.State.Mine.Depth; y++) {
			for (int x=0; x < stateProvider.State.Mine.Columns; x++) {
				if (stateProvider.State.Mine.Grid [x, y] != null) {
					Jewel jewel = (Jewel)stateProvider.State.Mine.Grid [x, y];
					if (jewel.GameObject == null) {
						GameObject targetType = jewelTypeDictionary [jewel.JewelType];
						GameObject newJewelGameObject = (GameObject)GameObject.Instantiate (targetType, new Vector3 (x, y, 0), Quaternion.identity);
						jewel.GameObject = newJewelGameObject;
					}
				}
			}
		}
	}

	/// <summary>
	/// Adds a game information message for display
	/// on the game view.
	/// </summary>
	/// <param name="message">The message.</param>
	private void AddGameInformationMessage (string message)
	{
		messages.Add (message);
	}

	/// <summary>
	/// Toggles the sound effects.
	/// </summary>
	private void ToggleSoundEffects ()
	{
		context.AudioSystem.ToggleSoundEffects ();
		context.AudioSystem.AddSoundEffectsStateMessage (AddGameInformationMessage);
	}
	
	/// <summary>
	/// Toggles the background music.
	/// </summary>
	private void ToggleBackgroundMusic ()
	{
		context.AudioSystem.ToggleBackgroundMusic ();
		context.AudioSystem.AddBackgroundMusicStateMessage (AddGameInformationMessage);
	}
	
}
