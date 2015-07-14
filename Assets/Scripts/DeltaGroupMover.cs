using UnityEngine;
using System.Collections;
using JewelMine.Engine.Models;
using System.Collections.Generic;

public class DeltaGroupMover : MonoBehaviour
{
	private bool moving = false;
	
	public void MoveJewel (List<JewelMovement> movement, float journeyTimeInSeconds)
	{
		//if(origin.x == -1 || origin.y == -1) origin = gameObject.transform.position;
		StartCoroutine (MoveFromTo (movement, journeyTimeInSeconds));
	}
	
	private IEnumerator MoveFromTo (List<JewelMovement> movement, float time)
	{
		if (!moving) { // do nothing if already moving
			bool done = false;
			moving = true; // signals "I'm moving, don't bother me!"
			float t = 0.0f;
			while (!done) {
				t += Time.deltaTime / time; // sweeps from 0 to 1 in time seconds
				if (t >= 1.0f) {
					t = 1.0f;
					done = true;
				}
				
				foreach (JewelMovement jm in movement) {
					jm.Jewel.GameObject.transform.position = Vector3.Lerp (new Vector3 (jm.Original.X, jm.Original.Y, 0), new Vector3 (jm.New.X, jm.New.Y, 0), t); // set position proportional to t
				}
				
			
				
				yield return 0; // leave the routine and return here in the next frame
			}
			
			// check that all jewels are in position
			foreach (JewelMovement jm in movement) {
				Vector3 finalPosition = new Vector3 (jm.New.X, jm.New.Y, 0);
				if (jm.Jewel.GameObject.transform.position != finalPosition) {
					jm.Jewel.GameObject.transform.position = new Vector3 (jm.New.X, jm.New.Y, 0);
				}
			}
			
			
			moving = false; // finished moving
			yield break;
		}
	}
}
