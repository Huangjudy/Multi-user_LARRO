using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;

public class delay : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Thread.Sleep(100);
    }
}
