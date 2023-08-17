using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using System.Drawing;

public class Visable_func : MonoBehaviour
{
    [SerializeField]
    GameObject objcam;
    [SerializeField]
    Camera m_Camera;

    public Transform userpositon;
    private List<Volumetric_update> List_volumetric = new List<Volumetric_update>();
    private List<Volumetric_update> List_Visiable = new List<Volumetric_update>();
    private List<Camera> List_Objcam = new List<Camera>();
    //private Camera List_Objcam;
    //private Camera m_Camera;
    private int childCount;
    private bool open = false;
    // Start is called before the first frame update
    void Start()
    {
        //m_Camera = Camera.main;
        childCount = objcam.transform.childCount; // 找出有多少物件，先建立所有物件的表格

        
        for (int i = 0; i < childCount; i++)
        {
            List_Objcam.Add(new Camera());
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (open == false)
        {
            List_volumetric = GameObject.Find("Object_manager").GetComponent<All_updateobject>().Object_list_get();
            for (int i = 0; i < List_volumetric.Count; i++)
            {
                List_Objcam[i] = objcam.transform.GetChild(i).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
                List_volumetric[i].originalsize_init(List_Objcam[i]);
            }
            open = true;
        }

        List_Visiable.Clear();
        //List_volumetric = GameObject.Find("Object_manager").GetComponent<All_updateobject>().Object_list_get();
        // 新增物件 刪除物件
        for (int i = 0; i < List_volumetric.Count; i++)
        {
            List_volumetric[i].combinelayer.Clear();
            List_volumetric[i].combinelayer.Add(List_volumetric[i].name);
            //List_Objcam[i] = objcam.transform.GetChild(i).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
            //List_Objcam = objcam.transform.GetChild(i).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
            if (List_volumetric[i].Visiable(m_Camera, List_Objcam[i]))
            {
                List_Visiable.Add(List_volumetric[i]);
            }

        }
        
        List<Volumetric_update> sort_visiable = List_Visiable.OrderBy(o => o.Onframesize).ToList();

        for (int i = 0; i < sort_visiable.Count - 1; i++)
        {
            for (int j = i + 1; j < sort_visiable.Count; j++)
            {
                if (IsOverlap(sort_visiable[i].Rect_onframe, sort_visiable[j].Rect_onframe))  // 判斷重疊，如果是
                {
                    if (Vector3.Distance(userpositon.position, sort_visiable[i].position) < Vector3.Distance(userpositon.position, sort_visiable[j].position))
                    {
                        if (sort_visiable[i].ClusterId > 0 && sort_visiable[j].ClusterId > 0)
                        {
                            if (sort_visiable[i].ClusterId == sort_visiable[j].ClusterId)
                            {
                                Combined(sort_visiable[j], sort_visiable[i],j);// 大的結合小的(大,小,j=大的index)
                                CloseCamera(sort_visiable[i],i);
                            }
                            else
                            {
                                CloseCamera(sort_visiable[i],i);
                            }
                        }
                    }
                    else
                    {
                        CloseCamera(sort_visiable[i],i);
                    }
                }
            }
        }
        
    }
    
    private void CloseCamera(Volumetric_update volumetric_object,int i)
    {
        //List_Objcam = objcam.transform.GetChild(i).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
        if (volumetric_object.firstclose < 5)
        {
            volumetric_object.firstclose += 1;
            List_Objcam[i].cullingMask = 1 << LayerMask.NameToLayer("CloseCamera");

        }
        else
        {
            List_Objcam[i].cullingMask = 1 << LayerMask.NameToLayer("CloseCamera");
            List_Objcam[i].orthographicSize = 0f;
        }
    }

    private void Combined(Volumetric_update Bigobject, Volumetric_update smallobject,int j)
    {
        //List_Objcam = objcam.transform.GetChild(j).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
        smallobject.combinelayer = smallobject.combinelayer.Distinct().ToList();
        int num = smallobject.combinelayer.Count();

        for (int i = 0; i < num; i++)
        {
            List_Objcam[i].cullingMask |= (1 << LayerMask.NameToLayer(smallobject.combinelayer[i]));
            Bigobject.combinelayer.Add(smallobject.combinelayer[i]);
        }
        smallobject.combinelayer.Clear();
        smallobject.combinelayer.Add(smallobject.name);
    }

    private bool IsOverlap(Rectangle rect1, Rectangle rect2)
    {
        double rect1_min_x = rect1.X;
        double rect1_min_y = rect1.Y;
        double rect1_max_x = rect1.X + rect1.Width;
        double rect1_max_y = rect1.Y + rect1.Height;

        double rect2_min_x = rect2.X;
        double rect2_min_y = rect2.Y;
        double rect2_max_x = rect2.X + rect2.Width;
        double rect2_max_y = rect2.Y + rect2.Height;

        //Debug.Log(String.Format("(Rect1_min_x :{0}, Rect1_min_y :{1} , Rect1_max_x :{2} ,Rect1_max_y :{3})", rect1_min_x, rect1_min_y, rect1_max_x, rect1_max_y));
        //Debug.Log(String.Format("(Rect2_min_x :{0}, Rect2_min_y :{1} , Rect2_max_x :{2} ,Rect2_max_y :{3})", rect2_min_x, rect2_min_y, rect2_max_x, rect2_max_y));

        if (rect1_min_x > rect2_max_x || rect1_max_x < rect2_min_x || rect1_min_y > rect2_max_y || rect1_max_y < rect2_min_y)
        {
            return false;
        }

        double Wid = Math.Min(rect1_max_x, rect2_max_x) - Math.Max(rect1_min_x, rect2_min_x);
        double Hei = Math.Min(rect1_max_y, rect2_max_y) - Math.Max(rect1_min_y, rect2_min_y);
        double overlaparea = Wid * Hei;
        double Rect1area = rect1.Width * rect1.Height;
        double overlapratio = overlaparea * 100 / Rect1area;
        //Debug.Log(String.Format("Overratio :{0}", overlapratio));

        if (overlapratio == 100)
        {
            //Debug.Log(String.Format("Overratio :{0}", overlapratio));
            return true;
        }
        return false;
    }
    
}
