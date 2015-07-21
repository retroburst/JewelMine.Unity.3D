using UnityEngine;
using System.Collections;
using JewelMine.Engine;
using JewelMine.Engine.Models;

public class ConfigurableSettings : MonoBehaviour {
	public string GameMessageLevelPattern = "Level//{0:N0}";
	public string GameMessageScorePattern = "Score//{0}";
	public string GameMessageScoreFormatString = "00000000";
	
	public string GameMessagePausedText = "PAUSED";
	public string GameMessagePausedSubtext = "Press submit to continue...";
	
	public string GameMessageGameOverText = "GAME OVER!";
	public string GameMessageGameOverSubtext = "Press submit to restart.";
	
	public string GameMessageGameWonText = "GAME WON! CONGRATS!";
	public string GameMessageGameWonSubtext = "Press submit to restart.";
	
	public float GameMessageVisibleTime = 2.0f;

	public string GameUserPrefKeyDifficulty = "JewelMine.User.Difficulty";
	public string GameUserPrefKeySoundEffectsMuted = "JewelMine.User.SoundEffectsMuted";
	public string GameUserPrefKeyBackgroundMusicMuted = "JewelMine.User.MusicMuted";

	public string GameMessageToggleMusicPattern = "Music {0}";
	public string GameMessageToggleSoundPattern = "Sound {0}";

	public int MineColumns = GameConstants.GAME_MINE_DEFAULT_COLUMN_SIZE;
	public int MineDepth = GameConstants.GAME_MINE_DEFAULT_DEPTH_SIZE;
	public int MineVisibleDepth = GameConstants.GAME_MINE_DEFAULT_DEPTH_SIZE;

	public DifficultySettings EasyDifficultySettings = null;
	public DifficultySettings ModerateDifficultySettings = null;
	public DifficultySettings HardDifficultySettings = null;
	public DifficultySettings ImpossibleDifficultySettings = null;
	
}
