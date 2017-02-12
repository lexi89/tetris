using UnityEngine;
using System.Collections;

public class Grid : MonoBehaviour {

	public static int w = 10;
	public static int h = 20;
	public static Transform[,] grid = new Transform[w, h];

	public static Vector2 roundPos(Vector2 v){
		return new Vector2 (Mathf.Round (v.x), Mathf.Round (v.y));
	}

	public static bool isWithinBorders(Vector2 v){
		return ((int)v.x >= 0 && 
				(int)v.x < w && 
				(int)v.y >= 0);
	}

	public static void destroyRow(int y){
		for (int x = 0; x < w; x++) {
			Destroy (grid [x, y].gameObject);
			grid [x, y] = null;
		}
	}

	public static void moveEverythingDownAboveRow(int y){
		for (int i = y; i < h; ++i) {
			decreaseRowAt (i);
		}
	}

	public static void decreaseRowAt(int y){
		// decreases the row index of all blocks in a row by one
		for (int x = 0; x < w; x++) {
			if (grid[x,y] != null){
				grid [x, y - 1] = grid [x, y];
				grid [x, y] = null;
				// update its position in game.
				grid [x, y - 1].position += new Vector3 (0, -1, 0);
			}
		}
	}

	public static bool isRowFull(int y){
		for (int x = 0; x < w; x++) {
			if (grid[x,y] == null){
				return false;
			}
		}
		return true;
	}

	public static void destroyFullRows(){
		for (int y = 0; y < h; ++y) {
			if(isRowFull(y)){
				destroyRow (y);
				moveEverythingDownAboveRow (y+1);
				--y;
			}
		}
	}

	public static void clearGrid(){
		for (int x = 0; x < w; x++) {
			for (int y = 0; y < h; y++) {
				if (grid [x, y] != null){
					Destroy (grid [x, y].gameObject);
					grid [x, y] = null;
				}
			}
		}
	}
}
