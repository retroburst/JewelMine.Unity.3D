﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine.Models
{
    /// <summary>
    /// Represents the mine, all the
    /// jewel positions.
    /// Also defines the delta.
    /// </summary>
    [Serializable]
    public class Mine
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Mine"/> class.
        /// </summary>
        public Mine()
			: this(GameConstants.GAME_MINE_DEFAULT_COLUMN_SIZE, GameConstants.GAME_MINE_DEFAULT_DEPTH_SIZE, GameConstants.GAME_MINE_DEFAULT_DEPTH_SIZE)
        { }

		/// <summary>
		/// Initializes a new instance of the <see cref="JewelMine.Engine.Models.Mine"/> class.
		/// </summary>
		/// <param name="columns">Columns.</param>
		/// <param name="depth">Depth.</param>
		/// <param name="visibleDepth">Visible depth.</param>
        public Mine(int columns, int depth, int visibleDepth)
        {
            Columns = columns;
            Depth = depth;
            VisibleDepth = visibleDepth;
            Delta = null;
            Grid = new MineObject[Columns, Depth];
            MarkedCollisions = new List<MarkedCollisionGroup>();
            InvalidMarkedCollisions = new List<MarkedCollisionGroup>();
            FinalisedCollisions = new List<CollisionGroup>();
            ImmediateJewelMovements = new List<JewelMovement>();
            InProgressJewelMovements = new List<JewelMovement>();
            FinalisedJewelMovements = new List<JewelMovement>();
        }

        /// <summary>
        /// Gets the number of columns.
        /// </summary>
        /// <value>
        /// The columns.
        /// </value>
        public int Columns { get; private set; }

        /// <summary>
        /// Gets the depth.
        /// </summary>
        /// <value>
        /// The depth.
        /// </value>
        public int Depth { get; private set; }
        
		/// <summary>
		/// Gets the visible depth.
		/// </summary>
		/// <value>The visible depth.</value>
        public int VisibleDepth { get; private set; }

        /// <summary>
        /// Gets the delta.
        /// </summary>
        /// <value>
        /// The delta.
        /// </value>
        public JewelGroup Delta { get; internal set; }

        /// <summary>
        /// Gets the marked collisions.
        /// </summary>
        /// <value>
        /// The marked collisions.
        /// </value>
        public List<MarkedCollisionGroup> MarkedCollisions { get; private set; }

        /// <summary>
        /// Gets the invalid marked collisions.
        /// </summary>
        /// <value>
        /// The invalid marked collisions.
        /// </value>
        public List<MarkedCollisionGroup> InvalidMarkedCollisions { get; private set; }

        /// <summary>
        /// Gets the finalised collisions.
        /// </summary>
        /// <value>
        /// The finalised collisions.
        /// </value>
        public List<CollisionGroup> FinalisedCollisions { get; private set; }
        
        /// <summary>
        /// The immediate jewel movements.
        /// </summary>
		public List<JewelMovement> ImmediateJewelMovements { get; private set; }
        
        /// <summary>
        /// The in-progress jewel movements (to be animated).
        /// </summary>
		public List<JewelMovement> InProgressJewelMovements { get; private set; }
		
		/// <summary>
		/// The finalised jewel movements.
		/// </summary>
		public List<JewelMovement> FinalisedJewelMovements { get; private set; }

        /// <summary>
        /// Gets the grid.
        /// </summary>
        /// <value>
        /// The mine.
        /// </value>
        public MineObject[,] Grid { get; private set; }

        /// <summary>
        /// Gets or sets the <see cref="MineObject"/> with the specified coordinates.
        /// </summary>
        /// <value>
        /// The <see cref="MineObject"/>.
        /// </value>
        /// <param name="coordinates">The coordinates.</param>
        /// <returns></returns>
        public MineObject this[Coordinates coordinates]
        {
            get
            {
                return (Grid[coordinates.X, coordinates.Y]);
            }
            set
            {
                Grid[coordinates.X, coordinates.Y] = value;
            }
        }

        /// <summary>
        /// Coordinateses the available.
        /// </summary>
        /// <param name="target">The target.</param>
        /// <returns></returns>
        public bool CoordinatesAvailable(Coordinates target)
        {
            if (target == null) throw new ArgumentException("Argument cannot be null.", "target");
            return (Grid[target.X, target.Y] == null);
        }

        /// <summary>
        /// Coordinateses in bounds.
        /// </summary>
        /// <param name="target">The target.</param>
        /// <returns></returns>
        public bool CoordinatesInBounds(Coordinates target)
        {
            if (target == null) throw new ArgumentException("Argument cannot be null.", "target");
            return (target.X >= 0 && target.X < Columns
                && target.Y >= 0 && target.Y < Depth);
        }
        
        /// <summary>
        /// Coordinateses in visible bounds.
        /// </summary>
        /// <returns><c>true</c>, if in visible bounds was coordinatesed, <c>false</c> otherwise.</returns>
        /// <param name="target">Target.</param>
		public bool CoordinatesInVisibleBounds(Coordinates target)
		{
			if (target == null) throw new ArgumentException("Argument cannot be null.", "target");
			return (target.X >= 0 && target.X < Columns
			        && target.Y >= 0 && target.Y < VisibleDepth);
		}

        /// <summary>
        /// Determines whether this instance is empty.
        /// </summary>
        /// <returns></returns>
        public bool IsEmpty()
        {
            for (int x = 0; x < Columns; x++)
            {
                for (int y = 0; y < Depth; y++)
                {
                    if (Grid[x, y] != null) return (false);
                }
            }
            return (true);
        }

		/// <summary>
		/// Gets the columns upper bound.
		/// </summary>
		/// <value>The columns upper bound.</value>
		public int ColumnsUpperBound
		{
			get{ return(Columns-1); }
		}

		/// <summary>
		/// Gets the depth upper bound.
		/// </summary>
		/// <value>The depth upper bound.</value>
		public int DepthUpperBound
		{
			get{ return(Depth-1); }
		}
		
		/// <summary>
		/// Gets the visible depth upper bound.
		/// </summary>
		/// <value>The visible depth upper bound.</value>
		public int VisibleDepthUpperBound
		{
			get{ return(VisibleDepth-1); }
		}

    }
}
