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
    //�p�⪫�󪺪��e�����̤j��@������M�۾����Z��
    public float obj_cam_distance()
    {
        if(obj_size.bounds.size.x > obj_size.bounds.size.y & obj_size.bounds.size.x > obj_size.bounds.size.z)
        {
            dis_obj_cam = obj_size.bounds.size.x ;
            return dis_obj_cam;
        }
        else if (obj_size.bounds.size.y > obj_size.bounds.size.x & obj_size.bounds.size.y > obj_size.bounds.size.z)
        {
            dis_obj_cam = obj_size.bounds.size.y ;//�̤j��
            return dis_obj_cam;
        }
        else
        {
            dis_obj_cam = obj_size.bounds.size.z ;//�̤j��
            return dis_obj_cam;
        }
    }
    
    // Update is called once per frame
    void Update()
    {
        
    }
}
