using UnityEngine;
using System.Collections;
using JewelMine.Engine.Models;
using JewelMine.Engine;
using System;

/// <summary>
/// Audio system controller.
/// </summary>
public class AudioController : IGameAudioSystem {
	private BackgroundMusic backgroundMusic = null;
	private SoundEffects soundEffects = null;
	private ConfigurableSettings configurableSettings = null;

	/// <summary>
	/// Initializes a new instance of the <see cref="AudioController"/> class.
	/// </summary>
	/// <param name="background">Background.</param>
	/// <param name="sound">Sound.</param>
	/// <param name="soundEffectsMuted">If set to <c>true</c> sound effects muted.</param>
	/// <param name="backgroundMusicMuted">If set to <c>true</c> background music muted.</param>
	/// <param name="configSettings">Config settings.</param>
	public AudioController(BackgroundMusic background, SoundEffects sound, bool soundEffectsMuted, bool backgroundMusicMuted, ConfigurableSettings configSettings)
	{
		configurableSettings = configSettings;
		backgroundMusic = background;
		soundEffects = sound;
		SoundEffectsMuted = soundEffectsMuted;
		BackgroundMusicMuted = backgroundMusicMuted;
		if(!BackgroundMusicMuted) backgroundMusic.StartBackgroundMusic();
	}

	/// <summary>
	/// Plays the sounds.
	/// </summary>
	/// <param name="logicUpdate">Logic update.</param>
	public void PlaySounds (GameLogicUpdate logicUpdate)
	{
		if(SoundEffectsMuted) return;
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
	/// Toggles the background music.
	/// </summary>
	public void ToggleBackgroundMusic()
	{
		BackgroundMusicMuted = !BackgroundMusicMuted;
		if(BackgroundMusicMuted) 
		{
			backgroundMusic.StopBackgroundMusic();
		}
		else 
		{
			backgroundMusic.StartBackgroundMusic();
		}
	}

	/// <summary>
	/// Toggles the sound effects.
	/// </summary>
	public void ToggleSoundEffects()
	{
		SoundEffectsMuted = !SoundEffectsMuted;
	}

	/// <summary>
	/// Gets a value indicating whether this <see cref="AudioSystem"/> sound effects muted.
	/// </summary>
	/// <value><c>true</c> if sound effects muted; otherwise, <c>false</c>.</value>
	public bool SoundEffectsMuted { get; private set; }

	/// <summary>
	/// Gets a value indicating whether this <see cref="AudioSystem"/> background music muted.
	/// </summary>
	/// <value><c>true</c> if background music muted; otherwise, <c>false</c>.</value>
	public bool BackgroundMusicMuted { get; private set; }

	/// <summary>
	/// Adds the background music state message.
	/// </summary>
	/// <param name="addMessage">The add message.</param>
	public void AddBackgroundMusicStateMessage(Action<string> addMessage)
	{
		string message = string.Format(configurableSettings.GameMessageToggleMusicPattern, GameHelpers.EncodeBooleanForDisplay(!BackgroundMusicMuted));
		addMessage(message);
	}
	
	/// <summary>
	/// Adds the sound effects state message.
	/// </summary>
	/// <param name="addMessage">The add message.</param>
	public void AddSoundEffectsStateMessage(Action<string> addMessage)
	{
		string message = string.Format(configurableSettings.GameMessageToggleSoundPattern, GameHelpers.EncodeBooleanForDisplay(!SoundEffectsMuted));
		addMessage(message);
	}
}
