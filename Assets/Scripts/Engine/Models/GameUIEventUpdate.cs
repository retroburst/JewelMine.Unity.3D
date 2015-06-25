using UnityEngine;
using System.Collections;

/// <summary>
/// Game user interface event update.
/// </summary>
public class GameUIEventUpdate
{
	public bool ShowOptions { get; set; }

	public bool HideOptions { get; set; }

	public bool ShowSplash { get; set; }

	public bool HideSplash { get; set; }

	public bool ToggleSoundEffects { get; set; }

	public bool ToggleBackgroundMusic { get; set; }

	/// <summary>
	/// Clear this instance.
	/// </summary>
	public void Clear()
	{
		ShowOptions = false;
		HideOptions = false;
		ShowSplash = false;
		HideSplash = false;
		ToggleSoundEffects = false;
		ToggleBackgroundMusic = false;
	}
}
