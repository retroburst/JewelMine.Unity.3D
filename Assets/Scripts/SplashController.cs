using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using JewelMine.Engine;

/// <summary>
/// Splash controller.
/// </summary>
public class SplashController : MonoBehaviour
{
	/// <summary>
	/// The splash panel game object.
	/// </summary>
	public GameObject splashPanelGameObject = null;
	
	/// <summary>
	/// The play button text component.
	/// </summary>
	public Text playButtonTextComponent = null;
	
	/// <summary>
	/// Gets a value indicating whether this <see cref="SplashController"/> splash showing.
	/// </summary>
	/// <value><c>true</c> if splash showing; otherwise, <c>false</c>.</value>
	public bool SplashShowing { get; private set; }

	/// <summary>
	/// The objects to disable when splash displayed.
	/// </summary>
	public List<GameObject> disableWhenDisplayed = null;

	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start ()
	{
		splashPanelGameObject.SetActive (false);
		SplashShowing = false;
	}
		
	/// <summary>
	/// Shows the splash panel.
	/// </summary>
	public void ShowSplashPanel (GamePlayState state)
	{
		if(state == GamePlayState.NotStarted)
		{
			playButtonTextComponent.text = "Play";
		}
		else
		{
			playButtonTextComponent.text = "Resume";
		}
		splashPanelGameObject.SetActive (true);
		disableWhenDisplayed.ForEach (x => x.GetComponent<Button> ().interactable = false);
		SplashShowing = true;
	}
	
	/// <summary>
	/// Hides the splash panel.
	/// </summary>
	public void HideSplashPanel ()
	{
		splashPanelGameObject.SetActive (false);
		disableWhenDisplayed.ForEach (x => x.GetComponent<Button> ().interactable = true);
		SplashShowing = false;
	}
}
