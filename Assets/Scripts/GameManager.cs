using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

public class GameManager : MonoBehaviour {
	public int MineColumns = 22;
	public int MineDepth = 22;
	public List<GameObject> Jewels = new List<GameObject>();
	public GameObject[,] Mine = null;
	private float NextTick = 0.0f;
	public float TickSpeed = 0.5f;
	public int Score = 0;

	public event EventHandler ScoreUpdated;

	// Use this for initialization
	void Start () {
		Mine = new GameObject[MineColumns, MineDepth];
	}
	
	// Update is called once per frame
	void Update () {
		if (Time.time > NextTick)
		{
			// move others down
			for(int y=0; y < MineDepth; y++)
			{
				for(int x=0; x < MineColumns; x++)
				{
					if(Mine[x,y] != null)
					{
						GameObject jewel = Mine[x,y];
						if(y-1 >= 0 && Mine[x,y-1] == null) 
						{
							jewel.transform.position += new Vector3(0, -1, 0);
							Mine[x,y] = null;
							Mine[x, y-1] = jewel;
						}
					}
				}
			}

			// add a jewel
			int randomIndex = UnityEngine.Random.Range(0, Jewels.Count);
			int newX = 0;
			List<int> freeX = FindFreeXCoordinate(MineDepth-1);
			if(freeX.Count > 0)
			{
				newX = freeX[UnityEngine.Random.Range(0, freeX.Count)];
				GameObject newJewel = (GameObject)Instantiate(Jewels[randomIndex], new Vector3(newX, MineDepth-1, 0), Quaternion.identity);
				Mine[newX, MineDepth-1] = newJewel;
			}
			NextTick = Time.time + TickSpeed;
		}
	}

	private List<int> FindFreeXCoordinate(int y)
	{
		List<int> free = new List<int> ();
		for (int x=0; x < MineColumns; x++) {
			if(Mine[x, y] == null) free.Add(x);
		}
		return(free);
	}


}
