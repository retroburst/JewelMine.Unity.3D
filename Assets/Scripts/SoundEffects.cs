﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

/// <summary>
/// Manages and plays sound effects.
/// </summary>
public class SoundEffects : MonoBehaviour
{
	public List<AudioClip> audioClips = null;
	public GameObject audioSourcePrefab = null;
	private Dictionary<AudioClipType, AudioClip> audioClipTypeDictionary = null;
	private GameObjectPool audioSourcePool = null;
	public int poolSize = 10;

	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start ()
	{
		audioSourcePool = new GameObjectPool (audioSourcePrefab, poolSize);
		audioClipTypeDictionary = new Dictionary<AudioClipType, AudioClip> ();
		BuildAudioClipDictionary ();
	}

	/// <summary>
	/// Builds the audio clip dictionary.
	/// </summary>
	private void BuildAudioClipDictionary ()
	{
		foreach (AudioClip clip in audioClips) {
			AudioClipType clipType = (AudioClipType)Enum.Parse (typeof(AudioClipType), clip.name);
			audioClipTypeDictionary.Add (clipType, clip);
		}
	}
	
	/// <summary>
	/// Plays the clip with callback.
	/// </summary>
	/// <param name="audioSource">Audio source.</param>
	/// <param name="clip">Clip.</param>
	/// <param name="volume">Volume.</param>
	public void PlayClipWithCallback(GameObject audioSource, AudioClip clip, float volume)
	{
		AudioSource audioSourceComponent = audioSource.GetComponent<AudioSource> ();
		audioSourceComponent.clip = clip;
		audioSourceComponent.volume = volume;
		audioSource.SetActive(true);
		audioSourceComponent.Play();
		StartCoroutine(DelayedCallback(audioSource, clip.length, ResetAudioSource));
	}
	
	/// <summary>
	/// Delayed callback.
	/// </summary>
	/// <returns>The callback.</returns>
	/// <param name="audioSource">Audio source.</param>
	/// <param name="time">Time.</param>
	/// <param name="callback">Callback.</param>
	private IEnumerator DelayedCallback(GameObject audioSource, float time, Action<GameObject> callback)
	{
		yield return new WaitForSeconds(time);
		callback(audioSource);
	}
	
	/// <summary>
	/// Resets the audio source.
	/// </summary>
	/// <param name="audioSource">Audio source.</param>
	private void ResetAudioSource(GameObject audioSource)
	{
		audioSource.SetActive(false);
	}

	/// <summary>
	/// Plays the collision.
	/// </summary>
	public void PlayCollision ()
	{
		PlayClipWithCallback(audioSourcePool.Take(), audioClipTypeDictionary[AudioClipType.Collision], 1.0f);
	}

	/// <summary>
	/// Plays the level up.
	/// </summary>
	public void PlayLevelUp ()
	{
		PlayClipWithCallback(audioSourcePool.Take(), audioClipTypeDictionary[AudioClipType.LevelUp], 0.50f);
	}

	/// <summary>
	/// Plays the stationary.
	/// </summary>
	public void PlayStationary ()
	{
		PlayClipWithCallback(audioSourcePool.Take(), audioClipTypeDictionary[AudioClipType.Stationary], 0.50f);
	}

	/// <summary>
	/// Plays the swap.
	/// </summary>
	public void PlaySwap ()
	{
		PlayClipWithCallback(audioSourcePool.Take(), audioClipTypeDictionary[AudioClipType.Swap], 0.35f);
	}
	
	private enum AudioClipType
	{
		Collision,
		LevelUp,
		Stationary,
		Swap
	}
}


