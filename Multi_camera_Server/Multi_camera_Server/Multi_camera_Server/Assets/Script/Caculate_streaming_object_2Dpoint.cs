using Microsoft.MixedReality.WebRTC.Unity;
using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Caculate_Reprojection_2D
{
    public float Object_Screen_norm_x { get; set; }
    public float Object_Screen_norm_y { get; set; }
    public float Object_ScreenPosition_z { get; set; }
    public float Object_OriginalPosition_x { get; set; }
    public float Object_OriginalPosition_y { get; set; }
    public float Object_OriginalPosition_z { get; set; }
}


public class Caculate_streaming_object_2Dpoint : MonoBehaviour
{
    [SerializeField]
    PeerConnection PeerConnection;


    private GameObject Meshposition;

    [SerializeField]
    Camera streamingcam;

    private string json_reporjection_data_2D;
    private Vector2 originalsize;
    private void Start()
    {
        Meshposition= GameObject.Find("Object_manager").transform.Find("Object1").transform.GetChild(0).gameObject;
    }
        private void Update()
    {
        json_reporjection_data_2D = Datatobetransmitted(Meshposition);
        PeerConnection.UseDataChannel("SendtoClient", json_reporjection_data_2D);
        Debug.Log(json_reporjection_data_2D);
    }


    private string Datatobetransmitted(GameObject objectname)
    {
        Vector3 Object_OriginalPosition = objectname.transform.position;
        Vector3 Object_ScreenPosition = GetObjectScreenPoint(objectname);
        originalsize.x = streamingcam.rect.width * 960;
        originalsize.y = streamingcam.rect.height * 960;

        Caculate_Reprojection_2D object_reprojection_data = new Caculate_Reprojection_2D()
        {
            Object_OriginalPosition_x = Object_OriginalPosition.x,
            Object_OriginalPosition_y = Object_OriginalPosition.y,
            Object_OriginalPosition_z = Object_OriginalPosition.z,
            Object_Screen_norm_x = Object_ScreenPosition.x / originalsize.x,
            Object_Screen_norm_y = Object_ScreenPosition.y / originalsize.y,
            Object_ScreenPosition_z = Object_ScreenPosition.z
        };
        Debug.Log(Object_ScreenPosition.x / originalsize.x);
        Debug.Log(Object_ScreenPosition.y / originalsize.y);
        string data = JsonConvert.SerializeObject(object_reprojection_data);
        return data;
    }


    private Vector3 GetObjectScreenPoint(GameObject objectname)
    {
        Vector3 Screentpoint = streamingcam.WorldToScreenPoint(objectname.transform.position);
        return Screentpoint;
    }
}