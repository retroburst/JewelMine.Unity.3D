using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace JewelMine.Engine.Models
{
    /// <summary>
    /// Represents a single delta member of a group.
    /// </summary>
    [Serializable]
    public class JewelGroupMember
    {
        /// <summary>
        /// Gets the delta.
        /// </summary>
        /// <value>
        /// The delta.
        /// </value>
        public Jewel Jewel { get; internal set; }

        /// <summary>
        /// Gets the coordinates.
        /// </summary>
        /// <value>
        /// The coordinates.
        /// </value>
        public Coordinates Coordinates { get; internal set; }

        /// <summary>
        /// Initializes a new instance of the <see cref="JewelGroupMember"/> class.
        /// </summary>
        /// <param name="delta">The delta.</param>
        /// <param name="coordinates">The coordinates.</param>
        public JewelGroupMember(Jewel jewel, Coordinates coordinates)
        {
            Jewel = jewel;
            Coordinates = coordinates;
        }

    }
}
