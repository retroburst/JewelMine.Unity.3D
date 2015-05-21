using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

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
		audioPlayer.clip = audioClipTypeDictionary[AudioClipType.Collision];
		audioPlayer.Play();
	}

	/// <summary>
	/// Plays the level up.
	/// </summary>
	public void PlayLevelUp()
	{
		audioPlayer.clip = audioClipTypeDictionary[AudioClipType.LevelUp];
		audioPlayer.Play();
	}

	/// <summary>
	/// Plays the stationary.
	/// </summary>
	public void PlayStationary()
	{
		audioPlayer.clip = audioClipTypeDictionary[AudioClipType.Stationary];
		audioPlayer.Play();
	}

	/// <summary>
	/// Plays the swap.
	/// </summary>
	public void PlaySwap()
	{
		audioPlayer.clip = audioClipTypeDictionary[AudioClipType.Swap];
		audioPlayer.Play();
	}

	private enum AudioClipType {
		Collision,
		LevelUp,
		Stationary,
		Swap
	}
}


