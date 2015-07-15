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
		/// Gets or sets a value indicating whether this instance is delta group movement.
		/// </summary>
		/// <value><c>true</c> if this instance is delta group movement; otherwise, <c>false</c>.</value>
		public bool IsDeltaGroupMovement { get; set; }
		
		/// <summary>
		/// Gets or sets a value indicating whether this instance is delta jewel swap.
		/// </summary>
		/// <value><c>true</c> if this instance is delta jewel swap; otherwise, <c>false</c>.</value>
		public bool IsDeltaJewelSwap { get; set; }
		
		/// <summary>
		/// Gets or sets the jewel group member.
		/// For use when movement is a delta jewel.
		/// </summary>
		/// <value>The jewel group member.</value>
		public JewelGroupMember JewelGroupMember {get; set;}

		/// <summary>
		/// Gets or sets the original coordinates.
		/// </summary>
		/// <value>
		/// The original.
		/// </value>
		public Coordinates Original { get; set; }
        
		/// <summary>
		/// Gets or sets the original interpolar.
		/// For use by view frame updates between original and new.
		/// </summary>
		/// <value>The original interpolar.</value>
		public CoordinatesF OriginalInterpolar { get; set; }

		/// <summary>
		/// Gets or sets the new coordinates.
		/// </summary>
		/// <value>
		/// The new.
		/// </value>
		public Coordinates New { get; set; }
        
		/// <summary>
		/// Gets or sets the new interpolar.
		/// For use by view frame updates between original and new.
		/// </summary>
		/// <value>The new interpolar.</value>
		public CoordinatesF NewInterpolar { get; set; }
	}
}
