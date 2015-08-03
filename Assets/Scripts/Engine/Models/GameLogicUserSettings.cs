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
			MineVisibleDepth = GameConstants.GAME_MINE_DEFAULT_DEPTH_SIZE;
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
		
		/// <summary>
		/// Gets or sets the mine visible depth.
		/// </summary>
		/// <value>The mine visible depth.</value>
		public int MineVisibleDepth { get; set; }

		/// <summary>
		/// Gets or sets the easy difficulty settings.
		/// </summary>
		/// <value>The easy difficulty settings.</value>
		public IGameDifficultySettingsProvider EasyDifficultySettings { get; set; }

		/// <summary>
		/// Gets or sets the moderate difficulty settings.
		/// </summary>
		/// <value>The moderate difficulty settings.</value>
		public IGameDifficultySettingsProvider ModerateDifficultySettings { get; set; }

		/// <summary>
		/// Gets or sets the hard difficulty settings.
		/// </summary>
		/// <value>The hard difficulty settings.</value>
		public IGameDifficultySettingsProvider HardDifficultySettings { get; set; }

		/// <summary>
		/// Gets or sets the impossible difficulty settings.
		/// </summary>
		/// <value>The impossible difficulty settings.</value>
		public IGameDifficultySettingsProvider ImpossibleDifficultySettings { get; set; }
		
		/// <summary>
		/// Gets or sets a value indicating whether this <see cref="JewelMine.Engine.Models.GameLogicUserSettings"/> debug
		/// restrict available jewel types.
		/// </summary>
		/// <value><c>true</c> if debug restrict available jewel types; otherwise, <c>false</c>.</value>
		public bool DebugRestrictAvailableJewelTypes { get; set; }
		
		/// <summary>
		/// Gets or sets the debug restrict available jewel types count.
		/// </summary>
		/// <value>The debug restrict available jewel types count.</value>
		public int DebugRestrictAvailableJewelTypesCount { get; set; }

	}
}
