using Microsoft.MixedReality.WebRTC.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Control_user_position : MonoBehaviour
{
    [SerializeField]
    PeerConnection PeerConnection;


    private string camera_info;

    void Update()
    {
        camera_info = GetCameraInfo(transform);
        PeerConnection.UseDataChannel("Camera", camera_info);
    }

    private string GetCameraInfo(Transform maincam)
    {
        string position_x = maincam.position.x.ToString("f3");
        string position_y = maincam.position.y.ToString("f3");
        string position_z = maincam.position.z.ToString("f3");
        string rotation_yoll = maincam.eulerAngles.x.ToString("f3");
        string rotation_pitch = maincam.eulerAngles.y.ToString("f3");
        string rotation_raw = maincam.eulerAngles.z.ToString("f3");
        string track_data = position_x + ',' + position_y + ',' + position_z + ',' + rotation_yoll + ',' + rotation_pitch + ',' + rotation_raw;
        return track_data;
    }
}
