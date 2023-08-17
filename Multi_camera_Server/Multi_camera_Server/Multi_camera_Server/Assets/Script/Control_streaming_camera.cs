using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Control_streaming_camera : MonoBehaviour
{
    [SerializeField]
    Transform User_position;

    
    private GameObject OBJ_True;
    private GameObject Cam_of_OBJ;
    private GameObject RenderCam_of_OBJ;
    public Camera objectstreamingCam;
    private float distance_camerawithobject;
    private float old_Scaleratio;
    private float camera_orth_size;
    private double Fov_angle=60.0;

    

    private void Start()
    {
        

        Debug.Log($"000000000000000");
        OBJ_True = GameObject.Find("Object_manager").transform.Find(this.gameObject.name).transform.GetChild(0).gameObject;
        
        Debug.Log($"11111111111");
        Cam_of_OBJ = transform.GetChild(0).gameObject;  //控制相機拍攝物件
        RenderCam_of_OBJ = Cam_of_OBJ.transform.GetChild(0).gameObject;
        objectstreamingCam = RenderCam_of_OBJ.GetComponent<Camera>();
        camera_orth_size = objectstreamingCam.orthographicSize;
        Debug.Log($"22222222");
        distance_camerawithobject = camera_orth_size / (float)Math.Tan(Fov_angle* Math.PI/180 / 2);

        //distance_camerawithobject = GameObject.Find(this.gameObject.name).transform.GetChild(0).gameObject.GetComponent<Object_size>().obj_cam_distance(); try
        //distance_camerawithobject = 0.5;
        //distance_camerawithobject = Vector3.Distance(OBJ_True.transform.position, Cam_of_OBJ.transform.position); //設定相機與物件距離
        Debug.Log($"3333p3");
        Debug.Log("dis"+distance_camerawithobject);
    }

    void Update()
    {
        
        Cam_of_OBJ.transform.position = GetCameraposition(User_position, OBJ_True.transform); //計算相機的擺設位置
        Cam_of_OBJ.transform.rotation = Quaternion.LookRotation(OBJ_True.transform.position - Cam_of_OBJ.transform.position, Vector3.up);//計算相機觀看的角度
        //Debug.Log($"OBJ_True.transform:");
        //Debug.Log(OBJ_True.transform.position);
        //Debug.Log($"User_position:");
        //Debug.Log(User_position.position);
        //Debug.Log($"Cam_of_OBJ.transform.position");
        //Debug.Log(Cam_of_OBJ.transform.position);
        //Quaternion quaternion_value = LookAt(Cam_of_OBJ.transform.position, transform.position);
        //Cam_of_OBJ.transform.rotation = quaternion_value;
        Debug.DrawLine(User_position.position, Cam_of_OBJ.transform.position, Color.blue, 2.5f);
        Debug.DrawLine(Cam_of_OBJ.transform.position, OBJ_True.transform.position, Color.red, 2.5f);
        //transform.SetPositionAndRotation(Cam_of_OBJ.transform.position, Cam_of_OBJ.transform.rotation);

    }
    

    private Vector3 GetCameraposition(Transform user, Transform lookobject)
    {
        
        bool camerachange;
        
        camerachange = GameObject.Find("Object_manager").GetComponent<All_updateobject>().Object_camerachange(this.gameObject.name);
        if (camerachange == true)
        {
            float Scaleratio = GameObject.Find("Object_manager").GetComponent<All_updateobject>().Object_ratio(this.gameObject.name);
            Debug.Log("----------------------------------");
            Debug.Log($"Scaleratio");
            Debug.Log(Scaleratio);
            Debug.Log("----------------------------------");
            //Cam_of_OBJ.transform.position = new Vector3(Cam_of_OBJ.transform.position.x, Cam_of_OBJ.transform.position.y, Cam_of_OBJ.transform.position.z );
            if (Scaleratio != 0 && Scaleratio != 1)
            {
                if (Scaleratio != old_Scaleratio)
                {
                    //Cam_of_OBJ.transform.position = new Vector3(Cam_of_OBJ.transform.position.x, Cam_of_OBJ.transform.position.y, Cam_of_OBJ.transform.position.z * Scaleratio);
                    distance_camerawithobject = distance_camerawithobject * Scaleratio;
                    Debug.Log("oooooooooooooooo");
                    Debug.Log($"distance_camerawithobject");
                    Debug.Log(distance_camerawithobject);

                    //RenderCam_of_OBJ.transform.position = new Vector3(RenderCam_of_OBJ.transform.position.x, RenderCam_of_OBJ.transform.position.y * Scaleratio, RenderCam_of_OBJ.transform.position.z);
                    objectstreamingCam.orthographicSize = objectstreamingCam.orthographicSize * Scaleratio;
                    camera_orth_size = objectstreamingCam.orthographicSize;
                    old_Scaleratio = Scaleratio;
                }
            }
            camerachange = false;
        }
        
        /*
        if (Volumetric_update.GetCamera_change() == true)
        {
            float Scaleratio = Volumetric_update.GetScaleratio();
            Debug.Log("----------------------------------");
            Debug.Log($"Scaleratio");
            Debug.Log(Scaleratio);
            Debug.Log("----------------------------------");
            Cam_of_OBJ.transform.position = new Vector3(Cam_of_OBJ.transform.position.x, Cam_of_OBJ.transform.position.y, Cam_of_OBJ.transform.position.z * Scaleratio);
            distance_camerawithobject = distance_camerawithobject * Scaleratio;
            //RenderCam_of_OBJ.transform.position = new Vector3(RenderCam_of_OBJ.transform.position.x, RenderCam_of_OBJ.transform.position.y * Scaleratio, RenderCam_of_OBJ.transform.position.z);
            objectstreamingCam.orthographicSize = objectstreamingCam.orthographicSize * Scaleratio;
            camera_orth_size = objectstreamingCam.orthographicSize;
        }
        */
        /*
        new_distance_camerawithobject = GameObject.Find(this.gameObject.name).transform.GetChild(0).gameObject.GetComponent<Object_size>().obj_cam_distance();
        float Scaleratio = new_distance_camerawithobject / distance_camerawithobject;
        //distance_camerawithobject = distance_camerawithobject * Scaleratio;
        objectstreamingCam.orthographicSize = objectstreamingCam.orthographicSize * Scaleratio;
        */
        float user_object = Vector3.Distance(user.position, lookobject.position);
        float ratio = distance_camerawithobject / user_object;
        //float user_camera = user_object - distance_camerawithobject;
        /*
        if (ratio < 1)
        {
            ratio = 1;
        }
        */
        Vector3 camera_position = lookobject.position + (user.position - lookobject.position) * ratio;
        //Debug.Log($"user_object");
        //Debug.Log(user_object);
        //Debug.Log($"ratio");
        //Debug.Log(ratio);
        //Debug.Log($"Cam_of_OBJ.transform.position");
        //Debug.Log(camera_position);
        
        return camera_position;
    }

    public static Quaternion LookAt(Vector3 sourcePoint, Vector3 destPoint)
    {
        Vector3 forwardVector = Vector3.Normalize(destPoint - sourcePoint);

        float dot = Vector3.Dot(Vector3.forward, forwardVector);

        if (Math.Abs(dot - (-1.0f)) < 0.000001f)
        {
            return new Quaternion(Vector3.up.x, Vector3.up.y, Vector3.up.z, 3.1415926535897932f);
        }
        if (Math.Abs(dot - (1.0f)) < 0.000001f)
        {
            return Quaternion.identity;
        }

        float rotAngle = (float)Math.Acos(dot);
        Vector3 rotAxis = Vector3.Cross(Vector3.forward, forwardVector);
        rotAxis = Vector3.Normalize(rotAxis);
        return CreateFromAxisAngle(rotAxis, rotAngle);
    }

    // just in case you need that function also
    public static Quaternion CreateFromAxisAngle(Vector3 axis, float angle)
    {
        float halfAngle = angle * .5f;
        float s = (float)Math.Sin(halfAngle);
        Quaternion q;
        q.x = axis.x * s;
        q.y = axis.y * s;
        q.z = axis.z * s;
        q.w = (float)Math.Cos(halfAngle);
        return q;
    }
}
