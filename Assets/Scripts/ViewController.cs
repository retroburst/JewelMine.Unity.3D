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
	private SoundEffects soundEffects = null;
	public ViewControllerContext context = null;

	/// <summary>
	/// Initializes a new instance of the <see cref="ViewController"/> class.
	/// </summary>
	/// <param name="viewControllerContext">View controller context.</param>
	public ViewController (ViewControllerContext viewControllerContext)
	{
		jewelTypeDictionary = new Dictionary<JewelType, GameObject> ();
		context = viewControllerContext;
		stateProvider = context.Provider;
		BuildJewelTypeDictionary (context.JewelPrefabs);
		soundEffects = GameObject.FindObjectOfType<SoundEffects> ();
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
	/// Updates the view based on game logic.
	/// </summary>
	/// <param name="logicUpdate">The logic update.</param>
	public void UpdateView (GameLogicUpdate logicUpdate)
	{
		ProcessGameState ();
		ProcessDifficultyChange (logicUpdate);
		ProcessNewJewels (logicUpdate);
		ProcessJewelMovements (logicUpdate);
		ProcessFinalisedGroupCollisions (logicUpdate);
		ProcessGroupCollisions ();
		ProcessInvalidGroupCollisions (logicUpdate);
		PlaySounds (logicUpdate);
		ProcessScore (logicUpdate);
		ProcessLevel (logicUpdate);
	}

	/// <summary>
	/// Processes the level.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessLevel (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.LevelIncremented || logicUpdate.DifficultyChanged)
			context.LevelText.text = string.Format (Constants.LEVEL_PATTERN, stateProvider.State.Level);
	}

	/// <summary>
	/// Processes the score.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessScore (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.FinalisedCollisions.Count > 0 || logicUpdate.DifficultyChanged)
			context.ScoreText.text = string.Format (Constants.SCORE_PATTERN, stateProvider.State.Score.ToString (Constants.SCORE_FORMAT_STRING));
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
	/// Plays the sounds.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void PlaySounds (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.FinalisedCollisions.Count > 0)
			soundEffects.PlayCollision ();
		if (logicUpdate.DeltaStationary)
			soundEffects.PlayStationary ();
		if (logicUpdate.DeltaJewelsSwapped)
			soundEffects.PlaySwap ();
		if (logicUpdate.LevelIncremented)
			soundEffects.PlayLevelUp ();
	}

	/// <summary>
	/// Processes the finalised group collisions.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessFinalisedGroupCollisions (GameLogicUpdate logicUpdate)
	{
		foreach (var collision in logicUpdate.FinalisedCollisions) {
			foreach (var member in collision.Members) {
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
	/// Processes the difficulty change.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessDifficultyChange (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.DifficultyChanged) {
			GameObject[] jewels = GameObject.FindGameObjectsWithTag ("Jewel");
			jewels.ForEach (x => GameObject.Destroy (x));
			AddInitialJewelsToView ();
			context.DifficultyText.text = stateProvider.State.Difficulty.DifficultyLevel.ToString ();
		}
	}

	/// <summary>
	/// Processes the state of the game.
	/// </summary>
	private void ProcessGameState ()
	{
		if (stateProvider.State.PlayState != GamePlayState.Playing) {
			string stateText = string.Empty;
			string stateSubtext = string.Empty;
			GetGameStateText (out stateText, out stateSubtext);
			context.GameStateText.text = stateText;
			context.GameStateSubtext.text = stateSubtext;
		} else {
			context.GameStateText.text = string.Empty;
			context.GameStateSubtext.text = string.Empty;
		}
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
		case GamePlayState.NotStarted:
			stateText = Constants.GAME_START_TEXT;
			stateSubText = Constants.GAME_START_SUBTEXT;
			break;
		case GamePlayState.GameOver:
			stateText = Constants.GAME_OVER_TEXT;
			stateSubText = Constants.GAME_OVER_SUBTEXT;
			break;
		case GamePlayState.GameWon:
			stateText = Constants.GAME_WON_TEXT;
			stateSubText = Constants.GAME_WON_SUBTEXT;
			break;
		case GamePlayState.Paused:
			stateText = Constants.GAME_PAUSED_TEXT;
			stateSubText = Constants.GAME_PAUSED_SUBTEXT;
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
	public void AddGameInformationMessage (string message)
	{
		// don't know what to do here yet.
	}
}
