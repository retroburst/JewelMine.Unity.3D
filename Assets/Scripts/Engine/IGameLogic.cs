using JewelMine.Engine.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine
{
    /// <summary>
    /// Represents the contrct for a
    /// game logic component.
    /// </summary>
    public interface IGameLogic
    {
        GameLogicUpdate PerformGameLogic(GameLogicInput logicInput);
		GameMovementLogicUpdate PerformGameMovementLogic (float nextTickTime, float lastTickTime);
        GameState State { get; }
    }
}
