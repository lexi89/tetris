using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

	public Spawner spawner;
	public GameObject gameOverCanvas;

	void Awake(){
		spawner = FindObjectOfType<Spawner> ();
	}

	public void restartGame(){
		Grid.clearGrid ();
		gameOverCanvas.SetActive (false);
		spawner.spawnNext ();
	}

	public void gameOver(){
		gameOverCanvas.SetActive (true);
	}

}
