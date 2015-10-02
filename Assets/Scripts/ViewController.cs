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
	private bool animateGameWon = false;

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
	/// Updates the view for in-progress movement.
	/// </summary>
	/// <param name="movementUpdate">Movement update.</param>
	/// <param name="inProgressMovementUpdate">In progress movement update.</param>
	public void UpdateViewInProgressMovement (GameInProgressMovementLogicUpdate inProgressMovementUpdate)
	{
		ProcessInProgressJewelMovement (inProgressMovementUpdate);
	}
	
	/// <summary>
	/// Updates the view.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	/// <param name="uiEventUpdate">User interface event update.</param>
	public void UpdateView (GameLogicUpdate logicUpdate, GameUIEventUpdate uiEventUpdate)
	{
		ProcessUIEvents (uiEventUpdate);
		ProcessGameState (logicUpdate);
		ProcessNewJewels (logicUpdate);
		ProcessImmediateJewelMovement (logicUpdate);
		ProcessFinalisedJewelMovements (logicUpdate);
		ProcessFinalisedGroupCollisions (logicUpdate);
		ProcessGroupCollisions (logicUpdate);
		ProcessInvalidGroupCollisions (logicUpdate);
		ProcessScore (logicUpdate);
		ProcessLevel (logicUpdate);
		ProcessMessages (logicUpdate);
		context.AudioSystem.PlaySounds (logicUpdate);
		if (Debug.isDebugBuild && !animateGameWon) {
			DebugCheckAllJewelPositions ();
		}
	}

	/// <summary>
	/// Debugs the check all jewel positions.
	/// </summary>
	private void DebugCheckAllJewelPositions ()
	{
		for (int x=0; x <= stateProvider.State.Mine.ColumnsUpperBound; x++) {
			for (int y=0; y <= stateProvider.State.Mine.DepthUpperBound; y++) {
				MineObject m = stateProvider.State.Mine.Grid [x, y];
				if (m != null && m.GetType () != typeof(Jewel)) {
					Logger.LogWarningFormat ("The mine object at {0} is not of type Jewel but is a [{1}].", (new Coordinates (x, y)), m.GetType ().Name);
				}
				if (m != null && m is Jewel) {
					Jewel target = (Jewel)m;
					if (target.GameObject != null) {
						if (stateProvider.State.Mine.InProgressJewelMovements.Any (movement => movement.Jewel == target)) {	
							continue;
						}
						if (target.GameObject.transform.position.x != x || target.GameObject.transform.position.y != y) {
							string message = string.Format ("Excpected jewel {0} of type {1} to be at {2} but was actually at {3} in the game world.",
								target.Identifier.ToString (),
								target.JewelType.ToString (),
								new Coordinates (x, y).ToString (),
								new CoordinatesF (target.GameObject.transform.position.x, target.GameObject.transform.position.y)
							);
							Logger.LogErrorFormat (message);
						}
					}
				}
			}
		}
	}
	
	/// <summary>
	/// Processes the user interface events.
	/// </summary>
	/// <param name="uiEventUpdate">User interface event update.</param>
	private void ProcessUIEvents (GameUIEventUpdate uiEventUpdate)
	{
		if (uiEventUpdate.ShowSplash) {
			context.SplashController.ShowSplashPanel (stateProvider.State.PlayState);
		}
		if (uiEventUpdate.HideSplash) {
			context.SplashController.HideSplashPanel ();
		}
		if (uiEventUpdate.ShowOptions) {
			context.OptionsController.ShowOptionsPanel ();
		}
		if (uiEventUpdate.HideOptions) {
			context.OptionsController.HideOptionsPanel ();
		}
		if (uiEventUpdate.ToggleBackgroundMusic) {
			ToggleBackgroundMusic ();
		}
		if (uiEventUpdate.ToggleSoundEffects) {
			ToggleSoundEffects ();
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
		if (logicUpdate.LevelIncremented || logicUpdate.DifficultyChanged) {
			SetLevelText (stateProvider.State.Level);
		}
	}

	/// <summary>
	/// Processes the score.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessScore (GameLogicUpdate logicUpdate)
	{
		if (logicUpdate.FinalisedCollisions.Count > 0 || logicUpdate.DifficultyChanged) {
			SetScoreText (stateProvider.State.Score);
		}
	}
	
	/// <summary>
	/// Sets the level text.
	/// </summary>
	/// <param name="level">Level.</param>
	private void SetLevelText (int level)
	{
		context.LevelText.text = string.Format (context.ConfigurableSettings.GameMessageLevelPattern, level);
	}
	
	/// <summary>
	/// Sets the score text.
	/// </summary>
	/// <param name="score">Score.</param>
	private void SetScoreText (long score)
	{
		context.ScoreText.text = string.Format (context.ConfigurableSettings.GameMessageScorePattern, score.ToString (context.ConfigurableSettings.GameMessageScoreFormatString));
	}

	/// <summary>
	/// Processes the invalid group collisions.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessInvalidGroupCollisions (GameLogicUpdate logicUpdate)
	{
		foreach (MarkedCollisionGroup mcg in logicUpdate.InvalidCollisions) {
			foreach (CollisionGroupMember m in mcg.Members) {
				if (m.Jewel.GameObject != null) {
					m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = m.Jewel.GameObject.GetComponent<JewelMaterial> ().rendererMaterial;
				}
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
				if (member.Jewel.GameObject != null) {
					Logger.LogFormat ("ViewController->ProcessFinalisedGroupCollisions: finalised collision destroying game object of member jewel {0} at {1}.", member.Jewel, member.Coordinates);
					GameObject pooledExplosion = context.GameObjectPoolManager.GetPool (context.ExplosionPrefab).Take (member.Jewel.GameObject.transform.position, Quaternion.identity);
					pooledExplosion.SetActive (true);
					// allow the pool to re-allocate this jewel
					member.Jewel.GameObject.SetActive (false);
				} else {
					Logger.LogWarningFormat ("ViewController->ProcessFinalisedGroupCollisions: finalised collision but member jewel {0} at {1} has had it's game object already destroyed.", member.Jewel, member.Coordinates);
				}
			}
		}
	}

	/// <summary>
	/// Processes the immediate jewel movement.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessImmediateJewelMovement (GameLogicUpdate logicUpdate)
	{
		foreach (var jewelMovement in logicUpdate.ImmediateJewelMovements) {
			if (jewelMovement.Jewel.GameObject != null) {
				jewelMovement.Jewel.GameObject.transform.position = new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0);
				Logger.LogFormat ("ViewController->ProcessImmediateJewelMovement: moved jewel {0} from {1} to {2}.", jewelMovement.Jewel, jewelMovement.Original, jewelMovement.New);
			}
		}
	}
	
	/// <summary>
	/// Processes the finalised jewel movements.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessFinalisedJewelMovements (GameLogicUpdate logicUpdate)
	{
		foreach (var jewelMovement in logicUpdate.FinalisedJewelMovements) {
			if (jewelMovement.Jewel.GameObject != null) {
				jewelMovement.Jewel.GameObject.transform.position = new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0);
				Logger.LogFormat ("ViewController->ProcessFinalisedJewelMovements: moved jewel {0} from {1} to {2}.", jewelMovement.Jewel, jewelMovement.Original, jewelMovement.New);
			}
		}
	}
	
	/// <summary>
	/// Processes the interpolar jewel movements.
	/// </summary>
	/// <param name="movementUpdate">Movement update.</param>
	private void ProcessInProgressJewelMovement (GameInProgressMovementLogicUpdate movementUpdate)
	{
		foreach (var jewelMovement in movementUpdate.InProgressJewelMovements) {
			if (jewelMovement.Original.HasInvalidatedCoordinates) {
				// if the jewel origin is an invalidated coordinate, just shove the jewel in it's new position
				if (jewelMovement.Jewel.GameObject != null) {
					jewelMovement.Jewel.GameObject.transform.position = new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0);
				}
			} else {
				// move the jewel via it's interpolar coordinates calculated using LERP
				if (jewelMovement.Jewel.GameObject != null) {
					jewelMovement.Jewel.GameObject.transform.position = new Vector3 (jewelMovement.NewInterpolar.X, jewelMovement.NewInterpolar.Y, 0);
				}
			}
		}
	}

	/// <summary>
	/// Processes the new jewels.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessNewJewels (GameLogicUpdate logicUpdate)
	{
		List<JewelMovement> newJewels = new List<JewelMovement> ();
		newJewels.AddRange (logicUpdate.InProgressJewelMovements.Where (x => x.Jewel.GameObject == null).ToArray ());
		newJewels.AddRange (logicUpdate.ImmediateJewelMovements.Where (x => x.Jewel.GameObject == null).ToArray ());
		foreach (var jewelMovement in newJewels) {
			GameObject targetType = jewelTypeDictionary [jewelMovement.Jewel.JewelType];
			GameObject pooledJewelGameObject = context.GameObjectPoolManager.GetPool (targetType).Take (new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0), Quaternion.identity);
			jewelMovement.Jewel.GameObject = pooledJewelGameObject;
			pooledJewelGameObject.SetActive (true);
		}
	}
	
	/// <summary>
	/// Re-initialises view.
	/// </summary>
	private void ReInitialiseView ()
	{
		Logger.Log ("ViewController->ReInitialiseView: destroying all existing jewel game objects.");
		GameObject[] jewels = GameObject.FindGameObjectsWithTag ("Jewel");
		jewels.ForEach (x => x.SetActive (false));
		AddInitialJewelsToView ();
		context.DifficultyText.text = stateProvider.State.Difficulty.DifficultyLevel.ToString ();
		SetScoreText (stateProvider.State.Score);
		SetLevelText (stateProvider.State.Level);
	}
	
	/// <summary>
	/// Processes the state of the game.
	/// </summary>
	private void ProcessGameState (GameLogicUpdate logicUpdate)
	{
		if (stateProvider.State.PlayState != GamePlayState.Playing) {
			if (stateProvider.State.PlayState == GamePlayState.NotStarted) {
				context.SplashController.ShowSplashPanel (stateProvider.State.PlayState);
			}
			string stateText = string.Empty;
			string stateSubtext = string.Empty;
			GetGameStateText (out stateText, out stateSubtext);
			context.GameStateText.text = stateText;
			context.GameStateSubtext.text = stateSubtext;
			context.GameStatePanel.SetActive (true);
		} else {
			context.GameStateText.text = string.Empty;
			context.GameStateSubtext.text = string.Empty;
			context.GameStatePanel.SetActive (false);
		}
		
		// re-initialise view for these events
		if (logicUpdate.DifficultyChanged || logicUpdate.GameLoaded || logicUpdate.GameWasRestarted) {
			ReInitialiseView ();
		}
		
		// if game won
		if (stateProvider.State.PlayState == GamePlayState.GameWon) {
			if (!animateGameWon) {
				animateGameWon = true;
				context.StartCoroutineMethod (AnimateGameWon ());
			}
		} else if (stateProvider.State.PlayState != GamePlayState.GameWon && animateGameWon) {
			animateGameWon = false;
		}
	}
	
	/// <summary>
	/// Animates the game won event.
	/// </summary>
	/// <returns>The game won.</returns>
	private IEnumerator AnimateGameWon ()
	{
		GameObject fireworks = context.GameObjectPoolManager
			.GetPool(context.FireworksPrefab)
			.Take();
		fireworks.transform.position = context.FireworksPosition;
		fireworks.SetActive(true);
		while (animateGameWon) {
			yield return new WaitForSeconds (1.0f);
		}
		fireworks.SetActive(false);
		yield return(null);
	}

	/// <summary>
	/// Processes the group collisions.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	private void ProcessGroupCollisions (GameLogicUpdate logicUpdate)
	{
		foreach (MarkedCollisionGroup mcg in logicUpdate.Collisions) {
			foreach (CollisionGroupMember m in mcg.Members) {
				if (mcg.CollisionTickCount % 2 != 0) {
					if (m.Jewel.GameObject != null) {
						m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = context.CollisionGroupMaterial;
					}
				} else {
					if (m.Jewel.GameObject != null) {
						m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = m.Jewel.GameObject.GetComponent<JewelMaterial> ().rendererMaterial;
					}
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
						GameObject pooledJewelGameObject = context.GameObjectPoolManager.GetPool (targetType).Take (new Vector3 (x, y, 0), Quaternion.identity);
						pooledJewelGameObject.SetActive (true);
						jewel.GameObject = pooledJewelGameObject;
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
