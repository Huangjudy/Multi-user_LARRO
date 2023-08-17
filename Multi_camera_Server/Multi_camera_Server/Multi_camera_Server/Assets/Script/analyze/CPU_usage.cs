using System.Collections;
using System.Collections.Generic;
using System;
using System.Diagnostics;
using System.Linq;
using System.Threading;
using TMPro;
using UnityEngine;


public class CPU_usage : MonoBehaviour
{
    [Header("Components")]

    //[SerializeField] 
    //private TMP_Text cpuCounterText;

    [Header("Settings")]

    [Tooltip("In which interval should the CPU usage be updated?")]
    [SerializeField] 
    private float updateInterval = 1;

    [Tooltip("The amount of physical CPU cores")]
    [SerializeField] private int processorCount;
    [SerializeField]
    GameObject all_user;
    [Header("Output")]
    public float CpuUsage;

    private Thread _cpuThread;
    private float _lasCpuUsage;
    private int childCount;
    private int a = 0, b = 0, c = 0, d = 0, e = 0;
    private double CpuUsage_all = 0;
    private double avg_CpuUsage_all;
    private int count = 100;
    private void Start()
    {
        Application.runInBackground = true;

        //cpuCounterText.text = "0% CPU";

        // setup the thread
        _cpuThread = new Thread(UpdateCPUUsage)
        {
            IsBackground = true,
            // we don't want that our measurement thread
            // steals performance
            Priority = System.Threading.ThreadPriority.BelowNormal
        };

        // start the cpu usage thread
        _cpuThread.Start();
    }

    private void OnValidate()
    {
        // We want only the physical cores but usually
        // this returns the twice as many virtual core count
        //
        // if this returns a wrong value for you comment this method out
        // and set the value manually
        processorCount = SystemInfo.processorCount / 2;
    }

    private void OnDestroy()
    {
        // Just to be sure kill the thread if this object is destroyed
        _cpuThread.Abort();
    }

    private void Update()
    {
        childCount = all_user.transform.childCount; // 找出有多少物件，先建立所有物件的表格
        // for more efficiency skip if nothing has changed
        if (Mathf.Approximately(_lasCpuUsage, CpuUsage)) return;

        // the first two values will always be "wrong"
        // until _lastCpuTime is initialized correctly
        // so simply ignore values that are out of the possible range
        if (CpuUsage < 0 || CpuUsage > 100) return;

        // I used a float instead of int for the % so use the ToString you like for displaying it
        //cpuCounterText.text = CpuUsage.ToString("F1") + "% CPU";
        UnityEngine.Debug.Log($"CpuUsage:{CpuUsage}");
        // Update the value of _lasCpuUsage
        _lasCpuUsage = CpuUsage;
        if (childCount == 1 && a < count)
        {
            a = a + 1;
            CpuUsage_all = CpuUsage_all + CpuUsage;
            
            //Debug.Log($"count:{a}");
            if (a == count)
            {
                avg_CpuUsage_all = CpuUsage_all / count;
                UnityEngine.Debug.Log($"CpuUsage_ONE_user:{avg_CpuUsage_all}");
                CpuUsage_all = 0;
                
            }
        }
        /*
        else 
        if (childCount == 2 && b < count)
        {
            b = b + 1;
            CpuUsage_all = CpuUsage_all + CpuUsage;
            if (b == count)
            {
                avg_CpuUsage_all = CpuUsage_all / count;
                UnityEngine.Debug.Log($"CpuUsage_TWO_user:{avg_CpuUsage_all}");
                CpuUsage_all = 0;

            }
        }
        else if (childCount == 3 && c < count)
        {
            c = c + 1;
            CpuUsage_all = CpuUsage_all + CpuUsage;
            //Debug.Log($"count:{c}");
            if (c == count)
            {
                avg_CpuUsage_all = CpuUsage_all / count;
                UnityEngine.Debug.Log($"CpuUsage_THREE_user:{avg_CpuUsage_all}");
                CpuUsage_all = 0;
            }
        }
        else if (childCount == 4 && d < count)
        {
            d = d + 1;
            CpuUsage_all = CpuUsage_all + CpuUsage;
            //Debug.Log($"count:{d}");
            if (d == count)
            {
                avg_CpuUsage_all = CpuUsage_all / count;
                UnityEngine.Debug.Log($"CpuUsage_FOUR_user:{avg_CpuUsage_all}");
                CpuUsage_all = 0;
            }
        }
        */
    }

    /// <summary>
    /// Runs in Thread
    /// </summary>
    private void UpdateCPUUsage()
    {
        var lastCpuTime = new TimeSpan(0);

        // This is ok since this is executed in a background thread
        while (true)
        {
            var cpuTime = new TimeSpan(0);

            // Get a list of all running processes in this PC
            //var AllProcesses = Process.GetProcessesByName("chrome");
            var AllProcesses = Process.GetProcesses();
           /*
            Process[] processes = Process.GetProcesses();

            foreach (Process p in processes)
            {
                UnityEngine.Debug.Log($"Name:{p.ProcessName}");
            }
            */
            // Sum up the total processor time of all running processes
            cpuTime = AllProcesses.Aggregate(cpuTime, (current, process) => current + process.TotalProcessorTime);

            // get the difference between the total sum of processor times
            // and the last time we called this
            var newCPUTime = cpuTime - lastCpuTime;

            // update the value of _lastCpuTime
            lastCpuTime = cpuTime;

            // The value we look for is the difference, so the processor time all processes together used
            // since the last time we called this divided by the time we waited
            // Then since the performance was optionally spread equally over all physical CPUs
            // we also divide by the physical CPU count
            CpuUsage = 100f * (float)newCPUTime.TotalSeconds / updateInterval / processorCount;
            //Debug.Log($"CpuUsage:{CpuUsage}");
            //UnityEngine.Debug.Log(CpuUsage);
            // Wait for UpdateInterval
            Thread.Sleep(Mathf.RoundToInt(updateInterval * 1000));
        }
    }

}
