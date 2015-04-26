using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using JewelMine.Engine;
using JewelMine.Engine.Models;

/// <summary>
/// View controller.
/// </summary>
public class ViewController : IGameView
{
	private Dictionary<JewelType, GameObject> jewelTypeDictionary = null;
	private IGameStateProvider stateProvider = null;
	private Material collisionGroupFlashMaterial = null;
	private SoundEffects soundEffects = null;

	/// <summary>
	/// Initializes a new instance of the <see cref="ViewController"/> class.
	/// </summary>
	/// <param name="provider">Provider.</param>
	/// <param name="jewelPrefabs">Jewel prefabs.</param>
	/// <param name="collisionMaterial">Collision material.</param>
	public ViewController (IGameStateProvider provider, List<GameObject> jewelPrefabs, Material collisionMaterial)
	{
		jewelTypeDictionary = new Dictionary<JewelType, GameObject> ();
		stateProvider = provider;
		BuildJewelTypeDictionary (jewelPrefabs);
		collisionGroupFlashMaterial = collisionMaterial;
		soundEffects = GameObject.FindObjectOfType<SoundEffects>();
		AddInitialJewelsToView ();
	}

	/// <summary>
	/// Adds the initial jewels to view.
	/// </summary>
	private void AddInitialJewelsToView ()
	{
		for (int y=0; y < stateProvider.State.Mine.Depth; y++) {
			for (int x=0; x < stateProvider.State.Mine.Columns; x++) {
				if (stateProvider.State.Mine.Grid [x, y] != null) {
					Jewel jewel = (Jewel)stateProvider.State.Mine.Grid [x, y];
					if (jewel.GameObject == null) {
						GameObject targetType = jewelTypeDictionary [jewel.JewelType];
						GameObject newJewelGameObject = (GameObject)GameObject.Instantiate (targetType, new Vector3 (x, y, 0), Quaternion.identity);
						jewel.GameObject = newJewelGameObject;
					}
				}
			}
		}
	}

	/// <summary>
	/// Builds the jewel type dictionary.
	/// </summary>
	/// <param name="jewelPrefabs">Jewel prefabs.</param>
	private void BuildJewelTypeDictionary (List<GameObject> jewelPrefabs)
	{
		foreach (GameObject jewelPrefab in jewelPrefabs) {
			JewelTag tag = jewelPrefab.GetComponent<JewelTag> ();
			jewelTypeDictionary.Add (tag.jewelType, jewelPrefab);
		}
	}

	/// <summary>
	/// Updates the view based on game logic.
	/// </summary>
	/// <param name="logicUpdate">The logic update.</param>
	public void UpdateView (GameLogicUpdate logicUpdate)
	{
		var newJewels = logicUpdate.JewelMovements.Where (x => x.Jewel.GameObject == null);
		foreach (var jewelMovement in newJewels) {
			GameObject targetType = jewelTypeDictionary [jewelMovement.Jewel.JewelType];
			GameObject newJewelGameObject = (GameObject)GameObject.Instantiate (targetType, new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0), Quaternion.identity);
			jewelMovement.Jewel.GameObject = newJewelGameObject;
		}

		var normalMovements = logicUpdate.JewelMovements.Where (x => x.Jewel.GameObject != null);
		foreach (var jewelMovement in normalMovements) {
			jewelMovement.Jewel.GameObject.transform.position = new Vector3 (jewelMovement.New.X, jewelMovement.New.Y, 0);
		}

		foreach (var collision in logicUpdate.FinalisedCollisions) {
			foreach (var member in collision.Members) {
				GameObject.Destroy (member.Jewel.GameObject);
			}
		}
		UpdateGroupCollisions ();
		if(logicUpdate.FinalisedCollisions.Count > 0) soundEffects.PlayCollision();
		if(logicUpdate.DeltaStationary) soundEffects.PlayStationary();
		if(logicUpdate.DeltaJewelsSwapped) soundEffects.PlaySwap();
		if(logicUpdate.LevelIncremented) soundEffects.PlayLevelUp();
	}

	/// <summary>
	/// Updates the group collisions.
	/// </summary>
	private void UpdateGroupCollisions ()
	{
		foreach (MarkedCollisionGroup mcg in stateProvider.State.Mine.MarkedCollisions) {
			foreach (CollisionGroupMember m in mcg.Members) {
				if (mcg.CollisionTickCount % 2 != 0) {
					m.Jewel.GameObject.GetComponent<MeshRenderer> ().material = collisionGroupFlashMaterial;
				} else {
					m.Jewel.GameObject.GetComponent<MeshRenderer>().material = m.Jewel.GameObject.GetComponent<JewelMaterial>().rendererMaterial;
				}
			}
		}
	}
	
	/// <summary>
	/// Adds a game information message for display
	/// on the game view.
	/// </summary>
	/// <param name="message">The message.</param>
	public void AddGameInformationMessage (string message)
	{
		// don't know what to do here yet.
	}
}
