﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using JewelMine.Engine;

namespace JewelMine.Engine.Models
{
	/// <summary>
	/// Represents the game state at any given time.
	/// </summary>
	[Serializable]
	public class GameState
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="JewelMine.Engine.Models.GameState"/> class.
		/// </summary>
		/// <param name="userSettings">User settings.</param>
		/// <param name="level">Level.</param>
		public GameState (GameLogicUserSettings userSettings, DifficultyLevel level)
		{
			Mine = new Mine (userSettings.MineColumns, userSettings.MineDepth, userSettings.MineVisibleDepth);
			Difficulty = new GameDifficulty (level, userSettings);
			PlayState = GamePlayState.NotStarted;
			Level = GameConstants.GAME_DEFAULT_LEVEL;
			TickSpeedMilliseconds = Difficulty.TickSpeedMilliseconds;
			Score = 0;
			DeltaStationaryTimeSpan = Difficulty.DeltaStationaryTimeSpan;
			CollisionFinailseTickCount = Difficulty.CollisionFinaliseTickCount;
		}

		/// <summary>
		/// Gets the state of the game play.
		/// </summary>
		/// <value>
		/// The state of the game play.
		/// </value>
		public GamePlayState PlayState { get; internal set; }

		/// <summary>
		/// Gets the difficulty.
		/// </summary>
		/// <value>
		/// The difficulty.
		/// </value>
		public GameDifficulty Difficulty { get; internal set; }

		/// <summary>
		/// Gets the grid.
		/// </summary>
		/// <value>
		/// The grid.
		/// </value>
		public Mine Mine { get; private set; }

		/// <summary>
		/// Gets the game level.
		/// </summary>
		/// <value>
		/// The game level.
		/// </value>
		public int Level { get; internal set; }

		/// <summary>
		/// Gets the game score.
		/// </summary>
		/// <value>
		/// The game score.
		/// </value>
		public long Score { get; internal set; }

		/// <summary>
		/// Gets the game tick speed milliseconds.
		/// </summary>
		/// <value>
		/// The game tick speed milliseconds.
		/// </value>
		public float TickSpeedMilliseconds { get; internal set; }

		/// <summary>
		/// Gets the collision finalise tick count.
		/// </summary>
		/// <value>
		/// The collision finalise tick count.
		/// </value>
		public int CollisionFinailseTickCount { get; internal set; }

		/// <summary>
		/// Gets the delta stationary time span.
		/// </summary>
		/// <value>
		/// The delta stationary time span.
		/// </value>
		public TimeSpan DeltaStationaryTimeSpan { get; internal set; }

	}
}
