using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Object_size : MonoBehaviour
{
    public Collider obj_size;
    public float dis_obj_cam;
    // Start is called before the first frame update
    void Start()
    {
        obj_size = GetComponent<BoxCollider>();
        Debug.Log(obj_size.bounds.size.x);
        Debug.Log(obj_size.bounds.size.y);
        Debug.Log(obj_size.bounds.size.z);
    }
    //計算物件的長寬高取最大邊作為物件和相機的距離
    public float obj_cam_distance()
    {
        if(obj_size.bounds.size.x > obj_size.bounds.size.y & obj_size.bounds.size.x > obj_size.bounds.size.z)
        {
            dis_obj_cam = obj_size.bounds.size.x ;
            return dis_obj_cam;
        }
        else if (obj_size.bounds.size.y > obj_size.bounds.size.x & obj_size.bounds.size.y > obj_size.bounds.size.z)
        {
            dis_obj_cam = obj_size.bounds.size.y ;//最大邊
            return dis_obj_cam;
        }
        else
        {
            dis_obj_cam = obj_size.bounds.size.z ;//最大邊
            return dis_obj_cam;
        }
    }
    
    // Update is called once per frame
    void Update()
    {
        
    }
}
