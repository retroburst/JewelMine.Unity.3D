using UnityEngine;
using System.Collections;
using System;

public class DifficultySettings : MonoBehaviour, IGameDifficultySettingsProvider
{
	public int levelIncrementScoreThreshold;
	public float tickSpeedMilliseconds;
	public float tickSpeedMillisecondsFloor;
	public int collisionFinaliseTickCount;
	public int deltaStationaryInMilliseconds;
	public double deltaDoubleJewelChance;
	public double deltaDoubleJewelChanceFloor;
	public double deltaTripleJewelChance;
	public double deltaTripleJewelChanceFloor;
	public int groupCollisionScore;
	public int lastLevel;
	public int initialLines;

	public int LevelIncrementScoreThreshold { get { return(levelIncrementScoreThreshold); } }
	
	public float TickSpeedMilliseconds { get { return(tickSpeedMilliseconds); } }
	
	public float TickSpeedMillisecondsFloor{ get { return(tickSpeedMillisecondsFloor); } }
	
	public int CollisionFinaliseTickCount { get { return(collisionFinaliseTickCount); } }
	
	public int DeltaStationaryInMilliseconds { get { return(deltaStationaryInMilliseconds); } }
	
	public double DeltaDoubleJewelChance { get { return(deltaDoubleJewelChance); } }
	
	public double DeltaTripleJewelChance { get { return(deltaTripleJewelChance); } }
	
	public double DeltaDoubleJewelChanceFloor { get { return(deltaDoubleJewelChanceFloor); } }
	
	public double DeltaTripleJewelChanceFloor { get { return(deltaTripleJewelChanceFloor); } }
	
	public int GroupCollisionScore { get { return(groupCollisionScore); } }
	
	public int LastLevel { get { return(lastLevel); } }
	
	public int InitialLines { get { return(initialLines); } }

}
