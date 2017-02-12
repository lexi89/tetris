using UnityEngine;
using System.Collections;

public class Spawner : MonoBehaviour {

	public GameObject[] blockTypes;

	void Start(){
		spawnNext ();
	}

	public void spawnNext(){
		// pick a random block out of the collection.
		int randomGroupIndex = Random.Range (0, blockTypes.Length);
		Instantiate (blockTypes [randomGroupIndex], transform.position, Quaternion.identity);
	}
}
