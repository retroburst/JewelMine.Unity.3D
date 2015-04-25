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
        /// Updates the view based on game logic.
        /// </summary>
        /// <param name="logicUpdate">The logic update.</param>
        void UpdateView(GameLogicUpdate logicUpdate);

        /// <summary>
        /// Adds a game information message for display
        /// on the game view.
        /// </summary>
        /// <param name="message">The message.</param>
        void AddGameInformationMessage(string message);
    }
}
