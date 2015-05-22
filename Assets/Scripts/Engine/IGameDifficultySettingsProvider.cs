using UnityEngine;
using System.Collections;

public interface IGameDifficultySettingsProvider
{
	int LevelIncrementScoreThreshold { get; }

	double TickSpeedMilliseconds { get; }

	double TickSpeedMillisecondsFloor{ get; }

	int CollisionFinaliseTickCount{ get; }

	int DeltaStationaryInMilliseconds{ get; }

	double DeltaDoubleJewelChance{ get; }

	double DeltaTripleJewelChance{ get; }

	double DeltaDoubleJewelChanceFloor{ get; }

	double DeltaTripleJewelChanceFloor{ get; }

	int GroupCollisionScore{ get; }

	int LastLevel{ get; }

	int InitialLines{ get; }
}
