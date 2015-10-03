using UnityEngine;
using System.Collections;

/// <summary>
/// Game user interface event update.
/// </summary>
public class GameUIEventUpdate
{
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="GameUIEventUpdate"/> show options.
	/// </summary>
	/// <value><c>true</c> if show options; otherwise, <c>false</c>.</value>
	public bool ShowOptions { get; set; }
	
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="GameUIEventUpdate"/> hide options.
	/// </summary>
	/// <value><c>true</c> if hide options; otherwise, <c>false</c>.</value>
	public bool HideOptions { get; set; }

	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="GameUIEventUpdate"/> show splash.
	/// </summary>
	/// <value><c>true</c> if show splash; otherwise, <c>false</c>.</value>
	public bool ShowSplash { get; set; }

	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="GameUIEventUpdate"/> hide splash.
	/// </summary>
	/// <value><c>true</c> if hide splash; otherwise, <c>false</c>.</value>
	public bool HideSplash { get; set; }
	
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="GameUIEventUpdate"/> toggle sound effects.
	/// </summary>
	/// <value><c>true</c> if toggle sound effects; otherwise, <c>false</c>.</value>
	public bool ToggleSoundEffects { get; set; }
	
	/// <summary>
	/// Gets or sets a value indicating whether this <see cref="GameUIEventUpdate"/> toggle background music.
	/// </summary>
	/// <value><c>true</c> if toggle background music; otherwise, <c>false</c>.</value>
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
