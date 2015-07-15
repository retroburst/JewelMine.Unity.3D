using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine.Models
{
	/// <summary>
	/// Represents a set of coordinates for a point
	/// based on floating point numbers.
	/// </summary>
	[Serializable]
	public class CoordinatesF
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="CoordinatesF"/> class.
		/// </summary>
		public CoordinatesF ()
		{
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="Coordinates"/> class.
		/// </summary>
		/// <param name="coordinates">The coordinates.</param>
		/// <param name="y">The y.</param>
		public CoordinatesF (float x, float y)
		{
			X = x;
			Y = y;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="CoordinatesF"/> class.
		/// </summary>
		/// <param name="source">The source.</param>
		public CoordinatesF (CoordinatesF source)
		{
			X = source.X;
			Y = source.Y;
		}
        
		/// <summary>
		/// Initializes a new instance of the <see cref="JewelMine.Engine.Models.CoordinatesF"/> class.
		/// </summary>
		/// <param name="source">Source.</param>
		public CoordinatesF (Coordinates source)
		{
			X = (float)source.X;
			Y = (float)source.Y;
		}

		/// <summary>
		/// Creates a set of invalidated coordinates.
		/// </summary>
		/// <returns></returns>
		public static CoordinatesF CreateInvalidatedCoordinates ()
		{
			return new CoordinatesF (-1.0f, -1.0f);
		}

		/// <summary>
		/// Gets or sets the coordinates.
		/// </summary>
		/// <value>
		/// The coordinates.
		/// </value>
		public float X { get; set; }

		/// <summary>
		/// Gets or sets the y.
		/// </summary>
		/// <value>
		/// The y.
		/// </value>
		public float Y { get; set; }
	}
}
