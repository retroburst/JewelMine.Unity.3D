using UnityEngine;
using System.Collections;

public class ViewSettings : MonoBehaviour {
	public string LEVEL_PATTERN = "Level//{0:N0}";
	public string SCORE_PATTERN = "Score//{0}";
	public string SCORE_FORMAT_STRING = "00000000";
	
	public string GAME_PAUSED_TEXT = "PAUSED";
	public string GAME_PAUSED_SUBTEXT = "Press submit to continue...";
	
	public string GAME_OVER_TEXT = "GAME OVER!";
	public string GAME_OVER_SUBTEXT = "Press submit to restart.";
	
	public string GAME_WON_TEXT = "GAME WON! CONGRATS!";
	public string GAME_WON_SUBTEXT = "Press submit to restart.";
	
	public string GAME_START_TEXT = "JEWEL MINE";
	public string GAME_START_SUBTEXT = "Press submit to continue...";
	
	public float GAME_MESSAGE_VISIBLE_TIME = 2.0f;
}
