using Microsoft.MixedReality.WebRTC.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controllatencycolor : MonoBehaviour
{
    [SerializeField]
    PeerConnection peerconnection;
    [SerializeField]
    Camera controlcamera;

    void Update()
    {
        string Received_json = peerconnection.GetLatencydata();

        if (Received_json == "")
        {
            Debug.Log("Not received Interact Data");
        }
        else
        {
            Debug.Log(Received_json);
            Debug.Log(DateTime.Now.TimeOfDay.TotalMilliseconds);
            if (Received_json == "green")
            {
                controlcamera.backgroundColor = Color.green;
            }
            else
            {
                controlcamera.backgroundColor = Color.red;
            }
        }
    }
}
