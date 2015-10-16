﻿using JewelMine.Engine.Models;
using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JewelMine.Engine
{
    /// <summary>
    /// Helper methods for game logic and views.
    /// </summary>
    public static class GameHelpers
    {
        private static HashSet<char> vowels = new HashSet<char>("aeiou"); 

        /// <summary>
        /// Peforms a for each over an IEnumerable collection.
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="source">The source.</param>
        /// <param name="action">The action.</param>
        public static void ForEach<T>(this IEnumerable<T> source, Action<T> action)
        {
            if (source == null) return;
            for (int i = source.Count()-1; i >= 0; i--)
            {
                action(source.ElementAt(i));
            }
        }

        /// <summary>
        /// Shortens the name.
        /// </summary>
        /// <param name="name">The name.</param>
        /// <returns></returns>
        public static string ShortenName(string name)
        {
            if (string.IsNullOrEmpty(name)) return (name);
            string result = new string(name.Where(x => !vowels.Contains(x)).ToArray());
            return (result);
        }

        /// <summary>
        /// Encodes the boolean for display.
        /// </summary>
        /// <param name="target">if set to <c>true</c> [target].</param>
        /// <returns></returns>
        public static string EncodeBooleanForDisplay(bool target)
        {
            return (target ? "on" : "off");
        }

		/// <summary>
		/// Converts milliseconds to seconds.
		/// </summary>
		/// <returns>The milliseconds to seconds.</returns>
		/// <param name="source">Source.</param>
		public static double ConvertMillisecondsToSeconds(double source)
		{
			return (TimeSpan.FromMilliseconds(source).TotalSeconds);
		}

		/// <summary>
		/// Converts the milliseconds to seconds.
		/// </summary>
		/// <returns>The milliseconds to seconds.</returns>
		/// <param name="source">Source.</param>
		public static float ConvertMillisecondsToSeconds(float source)
		{
			return ((float)TimeSpan.FromMilliseconds(source).TotalSeconds);
		}
		
		/// <summary>
		/// Randomize the specified list.
		/// </summary>
		/// <param name="list">List.</param>
		/// <typeparam name="T">The 1st type parameter.</typeparam>
		public static List<T> ShuffleList<T>(List<T> list)
		{
			List<T> result = new List<T>();
			while (list.Count > 0)
			{
				int index = UnityEngine.Random.Range(0, list.Count);
				result.Add(list[index]);
				list.RemoveAt(index);
			}
			return(result);
		}
		
		/// <summary>
		/// Determines whether this instance is running on android.
		/// </summary>
		/// <returns><c>true</c> if this instance is running on android; otherwise, <c>false</c>.</returns>
		public static bool IsRunningOnAndroid()
		{
			return(Application.platform == RuntimePlatform.Android);
		}
		
		/// <summary>
		/// Determines whether this instance is running on web GL.
		/// </summary>
		/// <returns><c>true</c> if this instance is running on web G; otherwise, <c>false</c>.</returns>
		public static bool IsRunningOnWebGL()
		{
			return(Application.platform == RuntimePlatform.WebGLPlayer);
		}
		
		/// <summary>
		/// Determines whether this instance is running on IOS.
		/// </summary>
		/// <returns><c>true</c> if this instance is running on IO; otherwise, <c>false</c>.</returns>
		public static bool IsRunningOnIOS()
		{
			return(Application.platform == RuntimePlatform.IPhonePlayer);
		}

    }
}
