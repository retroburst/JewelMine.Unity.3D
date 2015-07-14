using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Threading;
using System;

public class JewelMover : MonoBehaviour
{
	private bool moving = false;
	
	public void MoveJewel (Vector3 origin, Vector3 destination, float journeyTimeInSeconds)
	{
		StartCoroutine (MoveFromTo (origin, destination, journeyTimeInSeconds));
	}
	
	private IEnumerator MoveFromTo (Vector3 pointA, Vector3 pointB, float time)
	{
		if (!moving) { // do nothing if already moving
			moving = true; // signals "I'm moving, don't bother me!"
			float t = 0f;
			while (t <= 1.0f) {
				t += Time.deltaTime / time; // sweeps from 0 to 1 in time seconds
				transform.position = Vector3.Lerp (pointA, pointB, t); // set position proportional to t
				yield return 0; // leave the routine and return here in the next frame
			}
			moving = false; // finished moving
			if (t == 1.0f)
				yield break;
		}
	}
	
}
