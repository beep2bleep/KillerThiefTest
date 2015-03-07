using UnityEngine;
using System.Collections;

public class moveCamera : MonoBehaviour {

    public Camera mainCamera;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	    if(Input.GetKey( KeyCode.UpArrow))
        {
            mainCamera.orthographicSize += mainCamera.orthographicSize * Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.DownArrow))
        {
            mainCamera.orthographicSize -= mainCamera.orthographicSize * Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            mainCamera.transform.position = new Vector3(mainCamera.transform.position.x + 5 * Time.deltaTime, mainCamera.transform.position.y, mainCamera.transform.position.z);
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            mainCamera.transform.position = new Vector3(mainCamera.transform.position.x + -5 * Time.deltaTime, mainCamera.transform.position.y, mainCamera.transform.position.z);
        }
	}
}
