﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace JewelMine.Engine.Models
{
    /// <summary>
    /// Represents a delta in the mine.
    /// </summary>
    [Serializable]
    public class Jewel : MineObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Jewel"/> class.
        /// </summary>
        /// <param name="type">The type.</param>
        public Jewel(JewelType type)
        {
            JewelType = type;
            Identifier = Guid.NewGuid();
        }

        /// <summary>
        /// Gets the type of the delta.
        /// </summary>
        /// <value>
        /// The type of the delta.
        /// </value>
        public JewelType JewelType { get; private set; }

        /// <summary>
        /// Gets the identifier.
        /// </summary>
        /// <value>
        /// The identifier.
        /// </value>
        public Guid Identifier { get; private set; }

		/// <summary>
		/// Returns a <see cref="System.String"/> that represents the current <see cref="JewelMine.Engine.Models.Jewel"/>.
		/// </summary>
		/// <returns>A <see cref="System.String"/> that represents the current <see cref="JewelMine.Engine.Models.Jewel"/>.</returns>
		public override string ToString ()
		{
			return string.Format ("[Jewel: JewelType={0}, Identifier={1}]", JewelType, Identifier);
		}

		/// <summary>
		/// Gets or sets the game object.
		/// </summary>
		/// <value>The game object.</value>
		[NonSerialized] 
		public GameObject GameObject;

    }
}
