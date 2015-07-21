using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine.Models
{
	/// <summary>
	/// Represents a set of coordinates for a point.
	/// </summary>
	[Serializable]
	public class Coordinates
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="Coordinates"/> class.
		/// </summary>
		public Coordinates ()
		{
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="Coordinates"/> class.
		/// </summary>
		/// <param name="coordinates">The coordinates.</param>
		/// <param name="y">The y.</param>
		public Coordinates (int x, int y)
		{
			X = x;
			Y = y;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="Coordinates"/> class.
		/// </summary>
		/// <param name="source">The source.</param>
		public Coordinates (Coordinates source)
		{
			X = source.X;
			Y = source.Y;
		}

		/// <summary>
		/// Creates a set of invalidated coordinates.
		/// </summary>
		/// <returns></returns>
		public static Coordinates CreateInvalidatedCoordinates ()
		{
			return new Coordinates (-1, -1);
		}
        
		/// <summary>
		/// Has invalid  coordinates.
		/// </summary>
		/// <returns><c>true</c>, if coordinates are invalid, <c>false</c> otherwise.</returns>
		public bool HasInvalidatedCoordinates {
			get {
				return(X == -1 && Y == -1);
			}
		}

		/// <summary>
		/// Generates the surrounding coordinates of a position.
		/// This does not take into account bounds - this must be
		/// checked when using.
		/// </summary>
		/// <returns></returns>
		public static Coordinates[] GenerateSurroundingCoordinates (Coordinates target)
		{
			List<Coordinates> surrounding = new List<Coordinates> ();
			surrounding.Add (new Coordinates (target.X + 1, target.Y + 1));
			surrounding.Add (new Coordinates (target.X - 1, target.Y - 1));
			surrounding.Add (new Coordinates (target.X + 1, target.Y - 1));
			surrounding.Add (new Coordinates (target.X - 1, target.Y + 1));
			surrounding.Add (new Coordinates (target.X, target.Y + 1));
			surrounding.Add (new Coordinates (target.X, target.Y - 1));
			surrounding.Add (new Coordinates (target.X + 1, target.Y));
			surrounding.Add (new Coordinates (target.X - 1, target.Y));
			return (surrounding.ToArray ());
		}

		/// <summary>
		/// Gets or sets the coordinates.
		/// </summary>
		/// <value>
		/// The coordinates.
		/// </value>
		public int X { get; set; }

		/// <summary>
		/// Gets or sets the y.
		/// </summary>
		/// <value>
		/// The y.
		/// </value>
		public int Y { get; set; }
		
		/// <summary>
		/// Returns a <see cref="System.String"/> that represents the current <see cref="JewelMine.Engine.Models.Coordinates"/>.
		/// </summary>
		/// <returns>A <see cref="System.String"/> that represents the current <see cref="JewelMine.Engine.Models.Coordinates"/>.</returns>
		public override string ToString ()
		{
			return string.Format ("[Coordinates: X={0}, Y={1}]", X, Y);
		}
	}
}
