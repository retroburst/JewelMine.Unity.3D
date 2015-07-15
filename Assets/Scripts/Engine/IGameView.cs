using JewelMine.Engine.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine
{
    /// <summary>
    /// Represents a game view contract.
    /// </summary>
    public interface IGameView
    {		
		/// <summary>
		/// Updates the view.
		/// </summary>
		/// <param name="logicUpdate">Logic update.</param>
		/// <param name="uiEventUpdate">User interface event update.</param>
		void UpdateView(GameLogicUpdate logicUpdate, GameUIEventUpdate uiEventUpdate);
		
		/// <summary>
		/// Updates the view for in-progress movement.
		/// </summary>
		/// <param name="movementUpdate">Movement update.</param>
		void UpdateViewInProgressMovement (GameInProgressMovementLogicUpdate movementUpdate);
    }
}
