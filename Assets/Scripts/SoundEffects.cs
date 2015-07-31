using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

/// <summary>
/// Manages and plays sound effects.
/// </summary>
public class SoundEffects : MonoBehaviour {
	public List<AudioClip> audioClips = null;
	private AudioSource audioPlayer = null;
	private Dictionary<AudioClipType, AudioClip> audioClipTypeDictionary = null;

	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start()
	{
		audioPlayer = GetComponent<AudioSource>();
		audioClipTypeDictionary = new Dictionary<AudioClipType, AudioClip>();
		BuildAudioClipDictionary();
	}

	/// <summary>
	/// Builds the audio clip dictionary.
	/// </summary>
	private void BuildAudioClipDictionary ()
	{
		foreach(AudioClip clip in audioClips)
		{
			AudioClipType clipType = (AudioClipType)Enum.Parse(typeof(AudioClipType), clip.name);
			audioClipTypeDictionary.Add(clipType, clip);
		}
	}

	/// <summary>
	/// Plays the collision.
	/// </summary>
	public void PlayCollision()
	{
		audioPlayer.PlayOneShot(audioClipTypeDictionary[AudioClipType.Collision]);
	}

	/// <summary>
	/// Plays the level up.
	/// </summary>
	public void PlayLevelUp()
	{
		audioPlayer.PlayOneShot(audioClipTypeDictionary[AudioClipType.LevelUp]);
	}

	/// <summary>
	/// Plays the stationary.
	/// </summary>
	public void PlayStationary()
	{
		audioPlayer.PlayOneShot(audioClipTypeDictionary[AudioClipType.Stationary]);
	}

	/// <summary>
	/// Plays the swap.
	/// </summary>
	public void PlaySwap()
	{
		audioPlayer.PlayOneShot(audioClipTypeDictionary[AudioClipType.Swap]);
	}

	private enum AudioClipType {
		Collision,
		LevelUp,
		Stationary,
		Swap
	}
}


