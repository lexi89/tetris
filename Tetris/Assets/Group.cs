using UnityEngine;
using System.Collections.Generic;

public class Group : MonoBehaviour {

	float maxSlideSpeed = 0.2f;
	float gravityTickSpeed = 1;
	float lastSlide = 0;
	float lastFall = 0;
	Spawner spawner;

	void Awake () {
		spawner = FindObjectOfType<Spawner> ();
	}

	void Start(){
		if (!isValidPosition()) {
	        Destroy(gameObject);
			GameController gameController = FindObjectOfType<GameController> ();
			gameController.gameOver ();
    	}
	}

	void Update () {

		if (Input.GetKey("up") && Time.time - lastSlide >= maxSlideSpeed){
			transform.Rotate (0, 0, -90);
			if (!isValidPosition()){
				// undo move if invalid.
				transform.Rotate (0, 0, 90);
			} else{
				updateGrid ();
			}
			lastSlide = Time.time;
		}
		if (Input.GetKey("left") && Time.time - lastSlide >= maxSlideSpeed){
			transform.position += Vector3.left;

			if (!isValidPosition()){
				// undo move if invalid.
				transform.position += Vector3.right;
			}else{
				updateGrid ();
			}
			lastSlide = Time.time;
		}

		if (Input.GetKey("right") && Time.time - lastSlide >= maxSlideSpeed){
			transform.position += Vector3.right;	
			if (!isValidPosition()){
				// undo move if invalid.
				transform.position += Vector3.left;
			} else{
				updateGrid ();
			}
			lastSlide = Time.time;
		}

		if (Input.GetKey("down") || Time.time - lastFall >= gravityTickSpeed){
			transform.position += new Vector3 (0, -1, 0);
			if (!isValidPosition()){
				// undo move if invalid.
				transform.position += new Vector3 (0, 1, 0);
				Grid.destroyFullRows ();

				// piece is done. Turn off update loop
				enabled = false;
				spawner.spawnNext ();
			} else{
				updateGrid ();
			}
			lastFall = Time.time;
		}
	}

	bool isValidPosition(){
		foreach (Transform block in transform) {
			Vector2 v = Grid.roundPos (block.position);
			if (!Grid.isWithinBorders(v)){
				return false;
			}

			Transform currentGridEntry = Grid.grid [(int)v.x, (int)v.y];
			if (currentGridEntry != null && currentGridEntry.parent != transform ){
				// there's already an existing block in that spot, which isn't in this group.
				return false;
			}
		}
		return true;
	}

	void updateGrid(){
		// remove the old blocks from this group from the grid.
		for (int y = 0; y < Grid.h; ++y) {
			for (int x = 0; x < Grid.w; ++x) {
				if (Grid.grid[x,y] != null){
					if (Grid.grid[x,y].parent == transform){
						Grid.grid [x, y] = null;
					}
				}
			}
		}

		// add the positions of this group's blocks to the grid.
		foreach (Transform block in transform) {
			Vector2 blockPos = Grid.roundPos (block.position);
			Grid.grid [(int)blockPos.x, (int)blockPos.y] = block;
		}
	}
}
