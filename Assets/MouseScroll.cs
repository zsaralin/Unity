using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems; 
public class MouseScroll : MonoBehaviour
{
    bool isUp = false;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetAxis("Mouse ScrollWheel") > 0f ) // forward
            {
                if (transform.position.z == .3f){
                    transform.position = new Vector3(transform.position.x, transform.position.y, 0);
                }
                else {
                    transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z-.1f); }
            }
        else if (Input.GetAxis("Mouse ScrollWheel") < 0f ) // backwards
        {
            if (transform.position.z == 0){
                transform.position = new Vector3(transform.position.x, transform.position.y, 0.5f);
            }
            else{
                transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z+.1f);
            }
     }
    }

    public void upTimeline()
    {
        if(!isUp){
        transform.position = new Vector3(transform.position.x, transform.position.y+.05f, transform.position.z);
        isUp = true;
        }
    }

    public void downTimeline()
    {
        if(isUp){
        transform.position = new Vector3(transform.position.x, transform.position.y-.05f, transform.position.z);
        isUp = false;
        }
    }
}