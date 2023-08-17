using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.WebRTC.Unity;

public class Streaming_video : MonoBehaviour
{
    [SerializeField]
    SceneVideoSource scenevideosource;
    [SerializeField]
    Camera objectstreamingCam;

    private void Update()
    {
        scenevideosource.ControlCameraBuffer();
    }

    
    public double GetSubMilliseconds(TimeSpan startTimer, TimeSpan endTimer)
    {
        TimeSpan startSpan = new TimeSpan(startTimer.Ticks);

        TimeSpan nowSpan = new TimeSpan(endTimer.Ticks);

        TimeSpan subTimer = nowSpan.Subtract(startSpan).Duration();

        return subTimer.TotalMilliseconds;
    }
}
