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
            ZoomOut();
        }
        if (Input.GetKey(KeyCode.DownArrow))
        {
            ZoomIn();
        }
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            MoveLeft();
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            MoveRight();
        }
	}

    public void MoveRight()
    {
        mainCamera.transform.position = new Vector3(mainCamera.transform.position.x + -50 * Time.deltaTime, mainCamera.transform.position.y, mainCamera.transform.position.z);
    }

    public void MoveLeft()
    {
        mainCamera.transform.position = new Vector3(mainCamera.transform.position.x + 50 * Time.deltaTime, mainCamera.transform.position.y, mainCamera.transform.position.z);
    }

    public void ZoomIn()
    {
        mainCamera.orthographicSize -= mainCamera.orthographicSize * Time.deltaTime;
    }

    public void ZoomOut()
    {
        mainCamera.orthographicSize += mainCamera.orthographicSize * Time.deltaTime;
    }
}
