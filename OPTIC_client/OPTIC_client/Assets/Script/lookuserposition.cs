using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lookuserposition : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    Transform lookat_camera;

    [SerializeField]
    Transform follow;

    private Vector3 old_localscale;
    private Vector3 new_localscale;

    void Start()
    {
        
        old_localscale = follow.localScale;
    }

    void Update()
    {
        GetComponent<Transform>().LookAt(lookat_camera);
        //transform.LookAt(lookat_camera.position);
        
        transform.position = follow.position;

        new_localscale = follow.localScale;

        if (new_localscale != old_localscale)  // 新的縮放大小不等於舊的 代表有改變 
        {
            // 計算縮放比例的大小
            float Scaleratio = new_localscale.x / old_localscale.x;
            transform.localScale = transform.localScale * Scaleratio;
        }
        old_localscale = new_localscale;
        
        //Debug.LogFormat("follow.localScale.x: {0} , follow.localScale.y: {1} , follow.localScale.z: {2}", follow.localScale.x, follow.localScale.y, follow.localScale.z);
        //Debug.LogFormat("screen.localScale.x: {0} , screen.localScale.y: {1} , screen.localScale.z: {2}", transform.localScale.x, transform.localScale.y, transform.localScale.z);
    }
}
