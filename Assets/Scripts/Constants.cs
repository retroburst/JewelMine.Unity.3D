﻿using UnityEngine;
using System.Collections;

public class Constants {
	public const string LEVEL_PATTERN = "Level//{0:N0}";
	public const string SCORE_PATTERN = "Score//{0}";
	public const string SCORE_FORMAT_STRING = "00000000";

	public const string GAME_PAUSED_TEXT = "PAUSED";
	public const string GAME_PAUSED_SUBTEXT = "Press submit to continue...";
	
	public const string GAME_OVER_TEXT = "GAME OVER!";
	public const string GAME_OVER_SUBTEXT = "Press submit to restart.";
	
	public const string GAME_WON_TEXT = "GAME WON! CONGRATS!";
	public const string GAME_WON_SUBTEXT = "Press submit to restart.";
	
	public const string GAME_START_TEXT = "JEWEL MINE";
	public const string GAME_START_SUBTEXT = "Press submit to continue...";

	public const float GAME_MESSAGE_VISIBLE_TIME = 2.0f;

	public const string GAME_USER_PREF_DIFFICULTY = "JewelMine.User.Difficulty";
	public const string GAME_USER_PREF_SOUND_EFFECTS_MUTED = "JewelMine.User.SoundEffectsMuted";
	public const string GAME_USER_PREF_BACKGROUND_MUSIC_MUTED = "JewelMine.User.MusicMuted";
	
	public const string GAME_MESSAGE_TOGGLE_MUSIC_PATTERN = "Music {0}";
	public const string GAME_TOGGLE_SOUND_PATTERN = "Sound {0}";
}

public enum AudioClipType {
	Collision,
	LevelUp,
	Stationary,
	Swap
}
