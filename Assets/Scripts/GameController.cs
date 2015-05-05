using JewelMine.Engine;
using JewelMine.Engine.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;

//TODO: save and load game - probably use Unity
//TODO: key bindings - maybe look into using the Unity Axis setup
//TODO: UI for game settings and persistence of game settings (including difficulty level)
//TODO: DONE game state text (win, loose, paused, etc)
//TODO: DONE explosion on final collision
//TODO: DONE game messages
//TODO: clean, refactor

namespace JewelMine
{
	/// <summary>
	/// Game controller manages the major components
	/// of the game and runs the game loop.
	/// </summary>
	public class GameController : MonoBehaviour
	{
		public List<GameObject> jewelPrefabs = null;
		public IGameView view = null;
		private IGameLogic gameLogic = null;
		private GameLogicInput logicInput = null;
		private double lastTickTime = 0.0f;
		private SwipeInput swipeInput = null;
		public Material collisionGroupMaterial = null;
		public Text difficultyText = null;
		public Text levelText = null;
		public Text scoreText = null;
		public Text gameStateText = null;
		public Text gameStateSubtext = null;
		public List<Text> gameMessageSlots = null;
		public GameObject explosionPrefab = null;

		/// <summary>
		/// Start this instance.
		/// </summary>
		public void Start ()
		{
			logicInput = new GameLogicInput ();
			GameLogicUserSettings settings = new GameLogicUserSettings ();
			//BuildGameLogicUserSettings(settings);
			gameLogic = new GameLogic (settings);
			view = new ViewController (BuildViewControllerContext ());
			swipeInput = GetComponent<SwipeInput> ();
			swipeInput.LeftSwipeDetected += HandleLeftSwipeDetected;
			swipeInput.RightSwipeDetected += HandleRightSwipeDetected;
			swipeInput.DownSwipeDetected += HandleDownSwipeDetected;
		}

		/// <summary>
		/// Builds the view controller context.
		/// </summary>
		/// <returns>The view controller context.</returns>
		private ViewControllerContext BuildViewControllerContext ()
		{
			ViewControllerContext result = new ViewControllerContext ();
			result.Provider = (IGameStateProvider)gameLogic;
			result.CollisionGroupMaterial = collisionGroupMaterial;
			result.JewelPrefabs = jewelPrefabs;
			result.DifficultyText = difficultyText;
			result.ScoreText = scoreText;
			result.LevelText = levelText;
			result.GameStateText = gameStateText;
			result.GameStateSubtext = gameStateSubtext;
			result.GameMessageSlots = gameMessageSlots;
			result.ExplosionPrefab = explosionPrefab;
			return(result);
		}

		private void HandleDownSwipeDetected (float obj)
		{
			logicInput.DeltaMovement = MovementType.Down;
		}

		private void HandleRightSwipeDetected (float obj)
		{
			logicInput.DeltaMovement = MovementType.Right;
		}

		private void HandleLeftSwipeDetected (float obj)
		{
			logicInput.DeltaMovement = MovementType.Left;

		}

		/// <summary>
		/// Called every frame by unity - is used
		/// as our game loop.
		/// </summary>
		public void Update ()
		{
			// get input from traditional controls
			if (gameLogic.State.PlayState == GamePlayState.NotStarted || gameLogic.State.PlayState == GamePlayState.Paused) {
				if (Input.GetButton ("Submit"))
					logicInput.GameStarted = true;

			}
			if (Input.GetKeyUp (KeyCode.Space))
				logicInput.DeltaSwapJewels = true;
			if (Input.GetKey (KeyCode.LeftControl) && Input.GetKeyUp (KeyCode.U))
				logicInput.ChangeDifficulty = true;

			if (Time.time >= lastTickTime) {
				Nullable<MovementType> movementInput = GetDeltaMovementInput ();
				if (movementInput.HasValue)
					logicInput.DeltaMovement = movementInput.Value;

				GameLogicUpdate logicUpdate = gameLogic.PerformGameLogic (logicInput);
				view.UpdateView (logicUpdate);

				// reset user input descriptors
				logicInput.Clear ();
				lastTickTime = Time.time + GameHelpers.ConvertMillisecondsToSeconds (gameLogic.State.Difficulty.TickSpeedMilliseconds);
			}

		}

		/// <summary>
		/// Gets the delta movement input.
		/// </summary>
		/// <returns>The delta movement input.</returns>
		public Nullable<MovementType> GetDeltaMovementInput ()
		{
			Nullable<MovementType> result = null;
			float moveHorizontal = Input.GetAxis ("Horizontal");
			float moveVertical = Input.GetAxis ("Vertical");

			if (moveHorizontal < 0)
				result = MovementType.Left;
			if (moveHorizontal > 0)
				result = MovementType.Right;
			if (moveVertical < 0)
				result = MovementType.Down;

			return(result);
		}

//        /// <summary>
//        /// Saves the user preferences.
//        /// </summary>
//        private void SaveUserPreferences()
//        {
//            Properties.Settings.Default.UserPreferenceMusicMuted = gameAudioSystem.BackgroundMusicMuted;
//            Properties.Settings.Default.UserPreferenceSoundEffectsMuted = gameAudioSystem.SoundEffectsMuted;
//            Properties.Settings.Default.UserPreferenceDifficulty = gameLogic.State.Difficulty.DifficultyLevel;
//        }
//
//        /// <summary>
//        /// Restores the user preferences.
//        /// </summary>
//        private void RestoreUserPreferences()
//        {
//            gameAudioSystem.BackgroundMusicMuted = Properties.Settings.Default.UserPreferenceMusicMuted;
//            gameAudioSystem.AddBackgroundMusicStateMessage(view.AddGameInformationMessage);
//            gameAudioSystem.SoundEffectsMuted = Properties.Settings.Default.UserPreferenceSoundEffectsMuted;
//            gameAudioSystem.AddSoundEffectsStateMessage(view.AddGameInformationMessage);
//        }
//
//        /// <summary>
//        /// Builds the game logic user settings.
//        /// </summary>
//        /// <param name="settings">The settings.</param>
//        private void BuildGameLogicUserSettings(GameLogicUserSettings settings)
//        {
//            settings.UserPreferredDifficulty = Properties.Settings.Default.UserPreferenceDifficulty;
//        }

        
	}
}
