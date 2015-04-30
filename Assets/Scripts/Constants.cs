using UnityEngine;
using System.Collections;

public class Constants {
	public const string LEVEL_PATTERN = "Level//{0:N0}";
	public const string SCORE_PATTERN = "Score//{0}";
	public const string SCORE_FORMAT_STRING = "00000000";

	public const string GAME_PAUSED_TEXT = "PAUSED";
	public const string GAME_PAUSED_SUBTEXT = "Press submit to continue...";
	
	public const string GAME_OVER_TEXT = "GAME OVER!";
	public const string GAME_OVER_SUBTEXT = "Press CTRL+R to restart or CTLR+Q to quit.";
	
	public const string GAME_WON_TEXT = "GAME WON! CONGRATS!";
	public const string GAME_WON_SUBTEXT = "Press CTLR+R to restart or CTLR+Q to quit.";
	
	public const string GAME_START_TEXT = "JEWEL MINE";
	public const string GAME_START_SUBTEXT = "Press submit to continue...";
}

public enum AudioClipType {
	Collision,
	LevelUp,
	Stationary,
	Swap
}
