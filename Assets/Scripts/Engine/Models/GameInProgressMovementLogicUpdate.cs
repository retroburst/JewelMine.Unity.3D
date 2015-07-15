using System;
using System.Collections;
using System.Collections.Generic;

namespace JewelMine.Engine.Models
{
	/// <summary>
	/// Represents an update for in progress jewel movement.
	/// </summary>
	[Serializable]
	public class GameInProgressMovementLogicUpdate
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="JewelMine.Engine.Models.GameMovementLogicUpdate"/> class.
		/// </summary>
		public GameInProgressMovementLogicUpdate()
		{
			InProgressJewelMovements = new List<JewelMovement>();
		}
		
		/// <summary>
		/// Gets the jewel movements.
		/// </summary>
		/// <value>The jewel movements.</value>
		public List<JewelMovement> InProgressJewelMovements {get; private set;}
	}
}
