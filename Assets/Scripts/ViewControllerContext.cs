using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using JewelMine.Engine;

public class ViewControllerContext
{
	/// <summary>
	/// Gets or sets the provider.
	/// </summary>
	/// <value>The provider.</value>
	public IGameStateProvider Provider { get; set; }

	/// <summary>
	/// Gets or sets the jewel prefabs.
	/// </summary>
	/// <value>The jewel prefabs.</value>
	public List<GameObject> JewelPrefabs { get; set; }

	/// <summary>
	/// Gets or sets the collision material.
	/// </summary>
	/// <value>The collision material.</value>
	public Material CollisionGroupMaterial { get; set; }

	/// <summary>
	/// Gets or sets the score text.
	/// </summary>
	/// <value>The score text.</value>
	public Text ScoreText { get; set; }

	/// <summary>
	/// Gets or sets the level text.
	/// </summary>
	/// <value>The level text.</value>
	public Text LevelText { get; set; }

	/// <summary>
	/// Gets or sets the difficulty text.
	/// </summary>
	/// <value>The difficulty text.</value>
	public Text DifficultyText { get; set; }

	/// <summary>
	/// Gets or sets the game state text.
	/// </summary>
	/// <value>The game state text.</value>
	public Text GameStateText { get; set; }

	/// <summary>
	/// Gets or sets the game state subtext.
	/// </summary>
	/// <value>The game subtext.</value>
	public Text GameStateSubtext { get; set; }

	/// <summary>
	/// Gets or sets the game message slots.
	/// </summary>
	/// <value>The game message slots.</value>
	public List<Text> GameMessageSlots { get; set; }

	/// <summary>
	/// Gets or sets the explosion prefab.
	/// </summary>
	/// <value>The explosion prefab.</value>
	public GameObject ExplosionPrefab { get; set; }

	/// <summary>
	/// Gets or sets the configurable settings.
	/// </summary>
	/// <value>The configurable settings.</value>
	public ConfigurableSettings ConfigurableSettings { get; set; }

	/// <summary>
	/// Gets or sets the splash controller.
	/// </summary>
	/// <value>The splash controller.</value>
	public SplashController SplashController { get; set; }

	/// <summary>
	/// Gets or sets the options controller.
	/// </summary>
	/// <value>The options controller.</value>
	public OptionsController OptionsController { get; set; }
}
