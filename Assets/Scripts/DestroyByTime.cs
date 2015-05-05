using UnityEngine;
using System.Collections;

/// <summary>
/// Destroys the game object by time (lifetime).
/// </summary>
public class DestroyByTime : MonoBehaviour {
	public float lifetime;

	/// <summary>
	/// Start this instance.
	/// </summary>
	private void Start () {
		Destroy (gameObject, lifetime);
	}
}
