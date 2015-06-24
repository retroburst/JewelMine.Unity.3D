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
	public GameObject splashPanelGameObject = null;

	public Text playButtonTextComponent = null;

	public bool SplashShowing { get; private set; }

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
