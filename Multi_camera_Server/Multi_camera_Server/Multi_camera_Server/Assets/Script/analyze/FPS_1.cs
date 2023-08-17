using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FPS_1 : MonoBehaviour
{
    [SerializeField]
    GameObject all_user;
    public float showTime = 1f;
    private int childCount;
    private int a = 0, b = 0, c = 0, d = 0, e = 0;
    private float FPS_all = 0f, render_FPS_all = 0;
    private double avg_FPS_all, avg_render_FPS_all;
    private int count =0;


    // Update is called once per frame
    void Update()
    {
        childCount = all_user.transform.childCount; // 找出有多少物件，先建立所有物件的表格
        
        
        if(childCount==1)
        {
            
            count++;
            FPS_all += Time.deltaTime;
            if (FPS_all>=showTime)
            {
                float fps = count / FPS_all;
                Debug.Log($"FPS_ONE_user:{fps}");
               
                FPS_all = 0f;
                count = 0;
            }
        }
        /*
        else if (childCount == 2 && b < count)
        {
            b = b + 1;
            FPS_all = FPS_all + FPS;
            render_FPS_all = render_FPS_all + render_FPS;
            //Debug.Log($"count:{b}");
            if (b == count)
            {
                avg_FPS_all = FPS_all / count;
                avg_render_FPS_all = render_FPS_all / count;
                Debug.Log($"FPS_TWO_user:{avg_FPS_all}");
                Debug.Log($"render_FPS_TWO_user:{avg_render_FPS_all}");
                FPS_all = 0;
                render_FPS_all = 0;
            }
        }
        
        else if (childCount == 3 && c < count)
        {
            c = c + 1;
            FPS_all = FPS_all + FPS;
            render_FPS_all = render_FPS_all + render_FPS;
            //Debug.Log($"count:{c}");
            if (c == count)
            {
                avg_FPS_all = FPS_all / count;
                avg_render_FPS_all = render_FPS_all / count;
                Debug.Log($"FPS_THREE_user:{avg_FPS_all}");
                Debug.Log($"render_THREE_user:{avg_render_FPS_all}");
                FPS_all = 0;
                render_FPS_all = 0;
            }
        }
        
        else if (childCount == 4 && d < count)
        {
            d = d + 1;
            FPS_all = FPS_all + FPS;
            render_FPS_all = render_FPS_all + render_FPS;
            //Debug.Log($"count:{d}");
            if (d == count)
            {
                avg_FPS_all = FPS_all / count;
                avg_render_FPS_all = render_FPS_all / count;
                Debug.Log($"FPS_FOUR_user:{avg_FPS_all}");
                Debug.Log($"render_FPS_FOUR_user:{avg_render_FPS_all}");
                FPS_all = 0;
                render_FPS_all = 0;
            }
        }
        */

    }
}

