using JewelMine.Engine;
using JewelMine.Engine.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;

//DONE: do not pause after game restart from game over or game won
//DONE: pass in constants (such as "Tap to continue" for mobile version)
//DONE: mobile phone version of main scene
//DONE: pass in difficulty constants for mobile version
//DONE: bigger buttons and panel for UI on mobile
//TODO: nicer styling of the options panel and control buttons
//TODO: clean, refactor
//TODO: register as apple developer (go through rigmarole with xcode etc) and get on app store for free
//TODO: test on android and get on google play for free

/// <summary>
/// Game controller manages the major components
/// of the game and runs the game loop.
/// </summary>
public class GameController : MonoBehaviour
{
	public List<GameObject> jewelPrefabs = null;
	public IGameView view = null;
	public IGameAudioSystem audioSystem = null;
	private IGameLogic gameLogic = null;
	private GameLogicInput logicInput = null;
	private GameUIEventUpdate uiEventUpdate = null;
	private float nextTickTime = 0.0f;
	private float lastTickTime = 0.0f;
	private SwipeInput swipeInput = null;
	public Material collisionGroupMaterial = null;
	public Text difficultyText = null;
	public Text levelText = null;
	public Text scoreText = null;
	public Text gameStateText = null;
	public Text gameStateSubtext = null;
	public List<Text> gameMessageSlots = null;
	public GameObject explosionPrefab = null;
	private bool savedUserPrefSoundEffectsMuted = false;
	private bool savedUserPrefBackgroundMusicMuted = false;
	private DifficultyLevel savedUserPrefDifficulty = DifficultyLevel.Easy;
	public SoundEffects soundEffects = null;
	public BackgroundMusic backgroundMusic = null;
	public OptionsController optionsController = null;
	public ConfigurableSettings configurableSettings = null;
	public SplashController splashController = null;
	
	/// <summary>
	/// Start this instance.
	/// </summary>
	public void Start ()
	{
		RestoreUserPreferences ();
		logicInput = new GameLogicInput ();
		uiEventUpdate = new GameUIEventUpdate ();
		GameLogicUserSettings settings = new GameLogicUserSettings ();
		BuildGameLogicUserSettings (settings);
		audioSystem = new AudioController (backgroundMusic, soundEffects, savedUserPrefSoundEffectsMuted, savedUserPrefBackgroundMusicMuted, configurableSettings);
		gameLogic = new GameLogic (settings);
		view = new ViewController (BuildViewControllerContext ());
		swipeInput = GetComponent<SwipeInput> ();
		swipeInput.LeftSwipeDetected += HandleLeftSwipeDetected;
		swipeInput.RightSwipeDetected += HandleRightSwipeDetected;
		swipeInput.DownSwipeDetected += HandleDownSwipeDetected;
		swipeInput.TapDetected += HandleTapDetected;
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
		result.ConfigurableSettings = configurableSettings;
		result.SplashController = splashController;
		result.OptionsController = optionsController;
		result.AudioSystem = audioSystem;
		return(result);
	}

	/// <summary>
	/// Handles down swipe detected.
	/// </summary>
	private void HandleDownSwipeDetected ()
	{
		if (gameLogic.State.PlayState == GamePlayState.Playing)
			logicInput.DeltaMovement = MovementType.Down;
	}

	/// <summary>
	/// Handles the right swipe detected.
	/// </summary>
	private void HandleRightSwipeDetected ()
	{
		if (gameLogic.State.PlayState == GamePlayState.Playing)
			logicInput.DeltaMovement = MovementType.Right;
	}

	/// <summary>
	/// Handles the left swipe detected.
	/// </summary>
	private void HandleLeftSwipeDetected ()
	{
		if (gameLogic.State.PlayState == GamePlayState.Playing)
			logicInput.DeltaMovement = MovementType.Left;
	}

	/// <summary>
	/// Handles the tap detected.
	/// </summary>
	private void HandleTapDetected ()
	{
		if (gameLogic.State.PlayState == GamePlayState.Playing)
			logicInput.DeltaSwapJewels = true;
		if ((gameLogic.State.PlayState == GamePlayState.GameOver || gameLogic.State.PlayState == GamePlayState.GameWon)
			&& !optionsController.OptionsShowing
			&& !splashController.SplashShowing) {
			logicInput.RestartGame = true;
		}
		if ((gameLogic.State.PlayState == GamePlayState.NotStarted || gameLogic.State.PlayState == GamePlayState.Paused)
			&& !optionsController.OptionsShowing
			&& !splashController.SplashShowing) {
			logicInput.GameStarted = true;
		}
	}

	/// <summary>
	/// Called every frame by unity - is used
	/// as our game loop.
	/// </summary>
	public void Update ()
	{
		// get input from traditional controls
		ProcessInput ();
		if (Time.time >= nextTickTime) {
			ProcessAxisInput ();
			GameLogicUpdate logicUpdate = gameLogic.PerformGameLogic (logicInput);
			view.UpdateView (logicUpdate, uiEventUpdate);
			// reset user input descriptors
			logicInput.Clear ();
			uiEventUpdate.Clear ();
			nextTickTime = Time.time + GameHelpers.ConvertMillisecondsToSeconds (gameLogic.State.Difficulty.TickSpeedMilliseconds);
			lastTickTime = Time.time;
		}
		GameInProgressMovementLogicUpdate inProgressMovementUpdate = gameLogic.PerformGameInProgressMovementLogic(nextTickTime, lastTickTime);
		view.UpdateViewInProgressMovement(inProgressMovementUpdate);
	}

	/// <summary>
	/// Processes the axis input.
	/// </summary>
	private void ProcessAxisInput ()
	{
		Nullable<MovementType> movementInput = GetDeltaMovementInput ();
		if (movementInput.HasValue) {
			logicInput.DeltaMovement = movementInput.Value;
		}
	}

	/// <summary>
	/// Processes the input.
	/// </summary>
	private void ProcessInput ()
	{
		if (optionsController.OptionsShowing || splashController.SplashShowing)
		{
			if(Input.GetKeyUp(KeyCode.Escape) && splashController.SplashShowing)
			{
				HideSplash();
			}
			else if(Input.GetKeyUp(KeyCode.Escape) && optionsController.OptionsShowing)
			{
				HideOptions();
			}
			return;
		}

		if (gameLogic.State.PlayState == GamePlayState.NotStarted || gameLogic.State.PlayState == GamePlayState.Paused) {
			if (Input.GetButtonUp ("Submit")) {
				logicInput.GameStarted = true;
				return;
			}
		}

		if (gameLogic.State.PlayState == GamePlayState.GameOver || gameLogic.State.PlayState == GamePlayState.GameWon) {
			if (Input.GetButtonUp ("Submit")) {
				logicInput.RestartGame = true;
				return;
			}
		}

		if (Input.GetButtonUp ("Swap")) {
			logicInput.DeltaSwapJewels = true;
		}
		if (Input.GetButtonUp ("Quit")) {
			Application.Quit ();
		}
		if (Input.GetButtonUp ("ChangeDifficulty")) {
			logicInput.ChangeDifficulty = true;
		}
		if (Input.GetButtonUp ("Restart")) {
			logicInput.RestartGame = true;
		}
		if (Input.GetButtonUp ("ToggleSound")) {
			ToggleSoundEffects ();
		}
		if (Input.GetButtonUp ("ToggleMusic")) {
			ToggleBackgroundMusic ();
		}
		if (Input.GetButtonUp ("SaveGame")) {
			logicInput.SaveGame = true;
		}
		if (Input.GetButtonUp ("LoadGame")) {
			logicInput.LoadGame = true;
		}
		if (Input.GetButtonUp ("Pause")) {
			logicInput.PauseGame = true;
		}
		if (Input.GetKeyUp (KeyCode.Escape) && !splashController.SplashShowing) {
			ShowSplash();
		}
		if (Input.GetKeyUp (KeyCode.Menu) && !optionsController.OptionsShowing) {
			ShowOptions();
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

	/// <summary>
	/// Saves the user preferences.
	/// </summary>
	private void SaveUserPreferences ()
	{
		bool changedSettings = false;
		if (configurableSettings != null && gameLogic != null && gameLogic.State != null && gameLogic.State.Difficulty != null) {
			PlayerPrefs.SetInt (configurableSettings.GameUserPrefKeyDifficulty, (int)gameLogic.State.Difficulty.DifficultyLevel);
			changedSettings = true;
		}
		if (audioSystem != null) {
			PlayerPrefs.SetInt (configurableSettings.GameUserPrefKeySoundEffectsMuted, Convert.ToInt32 (audioSystem.SoundEffectsMuted));
			PlayerPrefs.SetInt (configurableSettings.GameUserPrefKeyBackgroundMusicMuted, Convert.ToInt32 (audioSystem.BackgroundMusicMuted));
			changedSettings = true;
		}
		if (changedSettings)
			PlayerPrefs.Save ();
	}

	/// <summary>
	/// Restores the user preferences.
	/// </summary>
	private void RestoreUserPreferences ()
	{
		savedUserPrefDifficulty = (DifficultyLevel)PlayerPrefs.GetInt (configurableSettings.GameUserPrefKeyDifficulty, 0);
		savedUserPrefSoundEffectsMuted = Convert.ToBoolean (PlayerPrefs.GetInt (configurableSettings.GameUserPrefKeySoundEffectsMuted, 0));
		savedUserPrefBackgroundMusicMuted = Convert.ToBoolean (PlayerPrefs.GetInt (configurableSettings.GameUserPrefKeyBackgroundMusicMuted, 0));
	}

	/// <summary>
	/// Builds the game logic user settings.
	/// </summary>
	/// <param name="settings">The settings.</param>
	private void BuildGameLogicUserSettings (GameLogicUserSettings settings)
	{
		settings.UserPreferredDifficulty = savedUserPrefDifficulty;
		settings.SaveGamePath = Application.persistentDataPath;
		settings.MineColumns = configurableSettings.MineColumns;
		settings.MineDepth = configurableSettings.MineDepth;
		settings.EasyDifficultySettings = configurableSettings.EasyDifficultySettings;
		settings.ModerateDifficultySettings = configurableSettings.ModerateDifficultySettings;
		settings.HardDifficultySettings = configurableSettings.HardDifficultySettings;
		settings.ImpossibleDifficultySettings = configurableSettings.ImpossibleDifficultySettings;
	}

	/// <summary>
	/// Handles the application quit event.
	/// </summary>
	private void OnApplicationQuit ()
	{
		SaveUserPreferences ();
	}

	/// <summary>
	/// Handles the application pause event.
	/// </summary>
	/// <param name="pauseStatus">If set to <c>true</c> pause status.</param>
	private void OnApplicationPause (bool pauseStatus)
	{
		if (pauseStatus) {
			if (logicInput != null)
				logicInput.PauseGame = true;
			SaveUserPreferences ();
		}
	}

	/// <summary>
	/// Changes the difiiculty.
	/// </summary>
	public void ChangeDifiiculty ()
	{
		logicInput.ChangeDifficulty = true;
	}

	/// <summary>
	/// Toggles the sound effects.
	/// </summary>
	public void ToggleSoundEffects ()
	{
		uiEventUpdate.ToggleSoundEffects = true;
	}

	/// <summary>
	/// Toggles the background music.
	/// </summary>
	public void ToggleBackgroundMusic ()
	{
		uiEventUpdate.ToggleBackgroundMusic = true;
	}

	/// <summary>
	/// Toggles the game pause.
	/// </summary>
	public void ToggleGamePause ()
	{
		bool pauseState = gameLogic.State.PlayState == GamePlayState.Paused;
		if (pauseState)
			logicInput.GameStarted = true;
		else
			logicInput.PauseGame = true;
	}

	/// <summary>
	/// Pauses the game.
	/// </summary>
	public void PauseGame ()
	{
		bool pauseState = gameLogic.State.PlayState == GamePlayState.Paused;
		if (!pauseState)
			logicInput.PauseGame = true;
	}

	/// <summary>
	/// Un-pauses the game.
	/// </summary>
	public void UnpauseGame ()
	{
		bool pauseState = gameLogic.State.PlayState == GamePlayState.Paused;
		if (pauseState)
			logicInput.GameStarted = true;
	}

	/// <summary>
	/// Saves the game.
	/// </summary>
	public void SaveGame ()
	{
		logicInput.SaveGame = true;
	}

	/// <summary>
	/// Loads the game.
	/// </summary>
	public void LoadGame ()
	{
		logicInput.LoadGame = true;
	}

	/// <summary>
	/// Restarts the game.
	/// </summary>
	public void RestartGame ()
	{
		logicInput.RestartGame = true;
	}

	/// <summary>
	/// Starts the game.
	/// </summary>
	public void StartOrUnpauseGame ()
	{
		if (gameLogic.State.PlayState == GamePlayState.Paused || gameLogic.State.PlayState == GamePlayState.NotStarted) {
			logicInput.GameStarted = true;
		}
	}

	/// <summary>
	/// Quit this instance.
	/// </summary>
	public void QuitGame ()
	{
		Application.Quit ();
	}

	/// <summary>
	/// Shows the options.
	/// </summary>
	public void ShowOptions()
	{
		uiEventUpdate.ShowOptions = true;
		logicInput.PauseGame = true;
	}

	/// <summary>
	/// Hides the options.
	/// </summary>
	public void HideOptions()
	{
		uiEventUpdate.HideOptions = true;
		logicInput.GameStarted = true;
	}
        
	/// <summary>
	/// Shows the splash.
	/// </summary>
	public void ShowSplash()
	{
		uiEventUpdate.ShowSplash = true;
		logicInput.PauseGame = true;
	}

	/// <summary>
	/// Hides the splash.
	/// </summary>
	public void HideSplash()
	{
		uiEventUpdate.HideSplash = true;
		logicInput.GameStarted = true;
	}
}

