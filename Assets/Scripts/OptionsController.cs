using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// Settings controller.
/// </summary>
public class OptionsController : MonoBehaviour
{
	public GameObject optionPanelGameObject = null;
	public List<GameObject> disableWhenDisplayed = null;
	public bool OptionsShowing { get; private set; }

	/// <summary>
	/// Start this instance.
	/// </summary>
	public void Start ()
	{
		optionPanelGameObject.SetActive (false);
	}

	/// <summary>
	/// Shows the options panel.
	/// </summary>
	public void ShowOptionsPanel ()
	{
		optionPanelGameObject.SetActive (true);
		disableWhenDisplayed.ForEach (x => x.GetComponent<Button> ().interactable = false);
		OptionsShowing = true;
	}

	/// <summary>
	/// Hides the options panel.
	/// </summary>
	public void HideOptionsPanel ()
	{
		optionPanelGameObject.SetActive (false);
		disableWhenDisplayed.ForEach (x => x.GetComponent<Button> ().interactable = true);
		OptionsShowing = false;
	}

}
