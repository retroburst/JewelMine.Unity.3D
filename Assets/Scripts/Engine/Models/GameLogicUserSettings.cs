using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine.Models
{
	/// <summary>
	/// Stores user settings from the user.config for the game logic engine.
	/// </summary>
	public class GameLogicUserSettings
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="GameLogicUserSettings"/> class.
		/// </summary>
		public GameLogicUserSettings ()
		{
			MineColumns = GameConstants.GAME_MINE_DEFAULT_COLUMN_SIZE;
			MineDepth = GameConstants.GAME_MINE_DEFAULT_DEPTH_SIZE;
		}

		/// <summary>
		/// Gets or sets the user preferred difficulty.
		/// </summary>
		/// <value>
		/// The user preferred difficulty.
		/// </value>
		public DifficultyLevel UserPreferredDifficulty { get; set; }

		/// <summary>
		/// Gets or sets the save game path.
		/// </summary>
		/// <value>The save game path.</value>
		public string SaveGamePath { get; set; }

		/// <summary>
		/// Gets or sets the mine columns.
		/// </summary>
		/// <value>The mine columns.</value>
		public int MineColumns { get; set; }

		/// <summary>
		/// Gets or sets the mine depth.
		/// </summary>
		/// <value>The mine depth.</value>
		public int MineDepth { get; set; }
	}
}
