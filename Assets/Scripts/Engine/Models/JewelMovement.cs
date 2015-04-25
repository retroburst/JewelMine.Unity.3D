using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace JewelMine.Engine.Models
{
    /// <summary>
    /// Represents a jewel movement.
    /// </summary>
    public class JewelMovement
    {
        /// <summary>
        /// Gets or sets the jewel.
        /// </summary>
        /// <value>
        /// The jewel.
        /// </value>
        public Jewel Jewel { get; set; }

		/// <summary>
		/// Gets or sets a value indicating whether this instance is new jewel.
		/// </summary>
		/// <value><c>true</c> if this instance is new jewel; otherwise, <c>false</c>.</value>
		public bool IsNewJewel { get; set; }

        /// <summary>
        /// Gets or sets the original coordinates.
        /// </summary>
        /// <value>
        /// The original.
        /// </value>
        public Coordinates Original { get; set; }

        /// <summary>
        /// Gets or sets the new coordinates.
        /// </summary>
        /// <value>
        /// The new.
        /// </value>
        public Coordinates New { get; set; }
    }
}
