using JewelMine.Engine;
using JewelMine.Engine.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using UnityEngine;

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
		//private Dictionary<KeyCode, Action> keyBindingDictionary = null;
		private double lastTickTime = 0.0f;
		private SwipeInput swipeInput = null;
		public Material collisionGroupMaterial = null;

		/// <summary>
		/// Start this instance.
		/// </summary>
		public void Start ()
		{
			logicInput = new GameLogicInput ();
			//keyBindingDictionary = new Dictionary<KeyCode, Action>();
			//InitialiseKeyBindings();
			GameLogicUserSettings settings = new GameLogicUserSettings ();
			//BuildGameLogicUserSettings(settings);
			gameLogic = new GameLogic (settings);
			view = new ViewController ((IGameStateProvider)gameLogic, jewelPrefabs, collisionGroupMaterial);
			logicInput.GameStarted = true;
			swipeInput = GetComponent<SwipeInput>();
			swipeInput.LeftSwipeDetected += HandleLeftSwipeDetected;
			swipeInput.RightSwipeDetected += HandleRightSwipeDetected;
			swipeInput.DownSwipeDetected += HandleDownSwipeDetected;
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

//        /// <summary>
//        /// Handles the view key down.
//        /// </summary>
//        /// <param name="sender">The sender.</param>
//        /// <param name="e">The <see cref="KeyEventArgs"/> instance containing the event data.</param>
//        private void HandleViewKeyDown(object sender, KeyEventArgs e)
//        {
//            if (gameLogic.State.PlayState == GamePlayState.Paused || gameLogic.State.PlayState == GamePlayState.NotStarted)
//            {
//                logicInput.GameStarted = true;
//                return;
//            }
//            ProcessInput(e);
//        }
//
//        /// <summary>
//        /// Processes the input.
//        /// </summary>
//        /// <param name="e">The <see cref="KeyEventArgs"/> instance containing the event data.</param>
//        private void ProcessInput(KeyEventArgs e)
//        {
//            if (keyBindingDictionary.ContainsKey(e.KeyData))
//            {
//                Action bindingAction = keyBindingDictionary[e.KeyData];
//                if (bindingAction != null) bindingAction();
//            }
//        }
//
//        /// <summary>
//        /// Initialises the key bindings.
//        /// </summary>
//        private void InitialiseKeyBindings()
//        {
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingMoveLeft, Keys.Left, () => logicInput.DeltaMovement = MovementType.Left, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingMoveRight, Keys.Right, () => logicInput.DeltaMovement = MovementType.Right, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingMoveDown, Keys.Down, () => logicInput.DeltaMovement = MovementType.Down, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingPauseGame, Keys.Control | Keys.P, () => logicInput.PauseGame = true, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingRestartGame, Keys.Control | Keys.R, () => logicInput.RestartGame = true, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingToggleDebugInfo, Keys.Control | Keys.D, () => view.ToggleDebugInfo(), keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingQuitGame, Keys.Control | Keys.Q, () => view.Window.Close(), keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingSwapDeltaJewels, Keys.Space, () => logicInput.DeltaSwapJewels = true, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingToggleMusic, Keys.Control | Keys.M, () => ToggleBackgroundMusicLoop(), keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingToggleSoundEffects, Keys.Control | Keys.S, () => ToggleSoundEffects(), keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingDifficultyChange, Keys.Control | Keys.U, () => logicInput.ChangeDifficulty = true, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingSaveGame, Keys.Control | Keys.Shift | Keys.S, () => logicInput.SaveGame = true, keyBindingDictionary);
//            PerformSafeKeyBinding(Properties.Settings.Default.KeyBindingLoadGame, Keys.Control | Keys.Shift | Keys.L, () => logicInput.LoadGame = true, keyBindingDictionary);
//        }
//
//        /// <summary>
//        /// Performs a safe key binding.
//        /// </summary>
//        /// <param name="settingsKeyData">The settings key data.</param>
//        /// <param name="defaultKeyData">The default key data.</param>
//        /// <param name="bindingAction">The binding action.</param>
//        /// <param name="keyBindings">The key bindings.</param>
//        public static void PerformSafeKeyBinding(Keys settingsKeyData, Keys defaultKeyData, Action bindingAction, Dictionary<Keys, Action> keyBindings)
//        {
//            if (settingsKeyData == Keys.None)
//            {
//                keyBindings.Add(defaultKeyData, bindingAction);
//            }
//            else
//            {
//                keyBindings.Add(settingsKeyData, bindingAction);
//            }
//        }

		/// <summary>
		/// Called every frame by unity - is used
		/// as our game loop.
		/// </summary>
		public void Update ()
		{
			// get input from traditional controls
			Nullable<MovementType> movementInput = GetDeltaMovementInput();
			if(movementInput.HasValue) logicInput.DeltaMovement = movementInput.Value;
			if(Input.GetKeyDown(KeyCode.Space)) logicInput.DeltaSwapJewels = true;

				//gameAudioSystem.PlayBackgroundMusicLoop();
				if (Time.time >= lastTickTime) {
					GameLogicUpdate logicUpdate = gameLogic.PerformGameLogic (logicInput);
					view.UpdateView (logicUpdate);
					//gameAudioSystem.PlaySounds(logicUpdate);

				// this is an example of setting the material at runtime
//				for(int x=0; x < gameLogic.State.Mine.Columns; x++)
//				{
//					for(int y=0; y < gameLogic.State.Mine.Depth; y++)
//					{
//						Jewel jewel = (Jewel)gameLogic.State.Mine.Grid[x,y];
//						if(jewel != null && jewel.GameObject != null) jewel.GameObject.GetComponent<MeshRenderer>().material = rubyMaterial;
//					}
//				}


					// reset user input descriptors
					logicInput.Clear ();
					lastTickTime = Time.time + GameHelpers.ConvertMillisecondsToSeconds (gameLogic.State.Difficulty.TickSpeedMilliseconds);
			}
		}

		/// <summary>
		/// Gets the delta movement input.
		/// </summary>
		/// <returns>The delta movement input.</returns>
		public Nullable<MovementType> GetDeltaMovementInput()
		{
			Nullable<MovementType> result = null;
			float moveHorizontal = Input.GetAxis ("Horizontal");
			float moveVertical = Input.GetAxis ("Vertical");

			if(moveHorizontal < 0) result = MovementType.Left;
			if(moveHorizontal > 0) result = MovementType.Right;
			if(moveVertical < 0) result = MovementType.Down;

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
//
//        /// <summary>
//        /// Toggles the background music loop.
//        /// </summary>
//        private void ToggleBackgroundMusicLoop()
//        {
//            gameAudioSystem.ToggleBackgroundMusicLoop();
//            gameAudioSystem.AddBackgroundMusicStateMessage(view.AddGameInformationMessage);
//        }
//
//        /// <summary>
//        /// Toggles the sound effects.
//        /// </summary>
//        private void ToggleSoundEffects()
//        {
//            gameAudioSystem.ToggleSoundEffects();
//            gameAudioSystem.AddSoundEffectsStateMessage(view.AddGameInformationMessage);
//        }

        
	}
}
