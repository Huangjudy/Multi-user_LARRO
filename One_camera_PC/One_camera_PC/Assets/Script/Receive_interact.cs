using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Microsoft.MixedReality.WebRTC.Unity;

public class Receive_interact : MonoBehaviour
{
    [SerializeField]
    PeerConnection peerconnection;

    public static Dictionary<string, Object_transform> Object_control_center = new Dictionary<string, Object_transform>();
    public static string Received_object_json;
    public string object_json;
    // Update is called once per frame
    void Update()
    {
        Received_object_json = peerconnection.GetInteractivedata();



        if (Received_object_json == object_json)
        {
            Received_object_json = "";
            //Debug.Log("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
        }
        else
        {
            object_json = Received_object_json;
            Object_control_center = JsonConvert.DeserializeObject<Dictionary<string, Object_transform>>(Received_object_json);
            Debug.Log(Received_object_json);

        }
    }
}
