using System;
using System.Collections;
using System.Collections.Generic;

namespace JewelMine.Engine.Models
{
	/// <summary>
	/// Represents a set of coordinates for a point.
	/// </summary>
	[Serializable]
	public class GameMovementLogicUpdate
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="JewelMine.Engine.Models.GameMovementLogicUpdate"/> class.
		/// </summary>
		public GameMovementLogicUpdate()
		{
			JewelMovements = new List<JewelMovement>();
		}
		
		/// <summary>
		/// Gets the jewel movements.
		/// </summary>
		/// <value>The jewel movements.</value>
		public List<JewelMovement> JewelMovements {get; private set;}
	}
}
