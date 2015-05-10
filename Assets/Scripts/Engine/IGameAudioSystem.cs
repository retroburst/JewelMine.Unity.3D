using JewelMine.Engine.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine
{
	/// <summary>
	/// Game audio system contract.
	/// </summary>
	public interface IGameAudioSystem
	{		
		/// Plays the sounds.
		/// </summary>
		/// <param name="logicUpdate">Logic update.</param>
		void PlaySounds (GameLogicUpdate logicUpdate);
		
		/// <summary>
		/// Toggles the background music.
		/// </summary>
		void ToggleBackgroundMusic();
		
		/// <summary>
		/// Toggles the sound effects.
		/// </summary>
		void ToggleSoundEffects();
		
		/// <summary>
		/// Gets a value indicating whether this <see cref="AudioSystem"/> sound effects muted.
		/// </summary>
		/// <value><c>true</c> if sound effects muted; otherwise, <c>false</c>.</value>
		bool SoundEffectsMuted { get; }
		
		/// <summary>
		/// Gets a value indicating whether this <see cref="AudioSystem"/> background music muted.
		/// </summary>
		/// <value><c>true</c> if background music muted; otherwise, <c>false</c>.</value>
		bool BackgroundMusicMuted { get; }

		/// <summary>
		/// Adds the background music state message.
		/// </summary>
		/// <param name="addMessage">The add message.</param>
		void AddBackgroundMusicStateMessage(Action<string> addMessage);
		
		/// <summary>
		/// Adds the sound effects state message.
		/// </summary>
		/// <param name="addMessage">The add message.</param>
		void AddSoundEffectsStateMessage(Action<string> addMessage);

	}
}