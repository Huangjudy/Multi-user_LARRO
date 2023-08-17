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
    private bool Is_same;
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
        childCount = objcam.transform.childCount; // ��X���h�֪���A���إߩҦ����󪺪��

        
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
        // �s�W���� �R������
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

        List<Volumetric_update> sort_visiable = List_Visiable.OrderBy(o => o.Onframesize).ToList();//�ھڪ��󪺤j�p�ƦC(�p��j)
        //Debug.Log(String.Format("(sort_visiable:{0},sort_visiable:{1} , sort_visiable:{2} )", sort_visiable[0], sort_visiable[1], sort_visiable[2]));
        //Debug.Log(String.Format("(sort_visiable:{0},sort_visiable:{1} )", sort_visiable[0], sort_visiable[1]));
        /*
        for (int i = 0; i < sort_visiable.Count - 1; i++)
        {
            for (int j = i + 1; j < sort_visiable.Count; j++)
            {
                if (IsOverlap(sort_visiable[i].Rect_onframe, sort_visiable[j].Rect_onframe))  // �P�_���|�A�p�G�O
                {
                    Debug.Log("IsOverlap_i:" + i);
                    Debug.Log("Distance_small" + sort_visiable[i].position);
                    Debug.Log("Distance_big" + sort_visiable[j].position);
                    if (Vector3.Distance(userpositon.position, sort_visiable[i].position) < Vector3.Distance(userpositon.position, sort_visiable[j].position))//�P�_��Ӫ�����@�����ϥΪ̤����
                    {
                        Debug.Log("small:" + sort_visiable[i].ClusterId);
                        Debug.Log("big:" + sort_visiable[j].ClusterId);
                        if (sort_visiable[i].ClusterId > 0 && sort_visiable[j].ClusterId > 0)
                        {
                            if (sort_visiable[i].ClusterId == sort_visiable[j].ClusterId)
                            {
                                Combined(sort_visiable[j], sort_visiable[i]);// �j�����X�p��(�j,�p,j=�j��index)
                                CloseCamera(sort_visiable[i]);
                            }
                            else
                            {
                                //CloseCamera(sort_visiable[i]);
                            }
                        }
                    }
                    else
                    {
                        Debug.Log("small:" + sort_visiable[i].ClusterId);
                        Debug.Log("big:" + sort_visiable[j].ClusterId);
                        //CloseCamera(sort_visiable[i]);
                        Debug.Log($"close?");
                        Debug.Log("IsOverlap_i:" + i);
                        Debug.Log("IsOverlap_j:" + j);
                    }
                }
            }
        }
        
    }
     */
        
        for (int i = 0; i < 1; i++)
        {
            List_volumetric[i].combinelayer.Clear();
            List_volumetric[i].combinelayer.Add(List_volumetric[i].name);
            List_Objcam[i].cullingMask = (1 << LayerMask.NameToLayer(List_volumetric[i].combinelayer[i]));
            for (int j = 1; j < List_volumetric.Count; j++)
            {

                //if (Vector3.Distance(userpositon.position, sort_visiable[i].position) < Vector3.Distance(userpositon.position, sort_visiable[j].position))//�P�_��Ӫ�����@�����ϥΪ̤����
                if (Vector3.Distance(List_volumetric[j].position, List_volumetric[i].position) < 0.7)
                {
                    Combined(List_volumetric[i], List_volumetric[j]);// �j�����X�p��(�j,�p,j=�j��index)
                    CloseCamera(List_volumetric[j]);
                    Debug.Log("Combined_j:" + j);
                    Debug.Log("Distance:" + Vector3.Distance(List_volumetric[j].position, List_volumetric[i].position));
                }
                else
                {
                    //List_Objcam[i].cullingMask &= ~(1 << LayerMask.NameToLayer(List_volumetric[j].combinelayer[j]));
                }
                


            }
        }
        
    }
    /*
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
    */
    private void CloseCamera(Volumetric_update volumetric_object)
    {
        //List_Objcam = objcam.transform.GetChild(i).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
        
        //volumetric_object.firstclose += 1;
        Debug.Log($"volumetric_object:{volumetric_object.name}");
        string new_volumetric_name = "Render_" + volumetric_object.name;
        Debug.Log($"new_volumetric_name:{new_volumetric_name}");
        for (int k = 0; k < List_Objcam.Count; k++)
        {
            
            Is_same = string.Equals(new_volumetric_name, List_Objcam[k].name);//���W�٬O�_�@��
            Debug.Log($"Is_same:{Is_same}");
            if (Is_same == true)
            {
                List_Objcam[k].cullingMask = 1 << LayerMask.NameToLayer("CloseCamera");
                //List_Objcam[k].orthographicSize = 0f;
                break;
            }
            
        }
        
    }
    
    private void Combined(Volumetric_update Bigobject, Volumetric_update smallobject)
    {
        //List_Objcam = objcam.transform.GetChild(j).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.GetComponent<Camera>();
        smallobject.combinelayer = smallobject.combinelayer.Distinct().ToList();//�⭫�ƪ��h�����Ӷ���
        int num = smallobject.combinelayer.Count();
        string new_Bigobject_name = "Render_" + Bigobject.name;
        int k = 0;
        for (k=0; k < List_Objcam.Count; k++)
        {
            Is_same = string.Equals(new_Bigobject_name, List_Objcam[k].name);//���W�٬O�_�@��
            Debug.Log($"Is_same:{Is_same}");
            if (Is_same == true)
            {
                //List_Objcam[k].cullingMask = 1 << LayerMask.NameToLayer("CloseCamera");
                //List_Objcam[k].orthographicSize = 0f;
                break;
            }
        }
        for (int i = 0; i < num; i++)
        {
            List_Objcam[k].cullingMask |= (1 << LayerMask.NameToLayer(smallobject.combinelayer[i]));
            Bigobject.combinelayer.Add(smallobject.combinelayer[i]);
        }
        smallobject.combinelayer.Clear();
        smallobject.combinelayer.Add(smallobject.name);
    }

    private bool IsOverlap(Rectangle rect1, Rectangle rect2)//�P�_���n�B��
    {
        double rect1_min_x = rect1.X;
        double rect1_min_y = rect1.Y;
        double rect1_max_x = rect1.X + rect1.Width;
        double rect1_max_y = rect1.Y + rect1.Height;

        double rect2_min_x = rect2.X;
        double rect2_min_y = rect2.Y;
        double rect2_max_x = rect2.X + rect2.Width;
        double rect2_max_y = rect2.Y + rect2.Height;

        Debug.Log(String.Format("(Rect1_min_x :{0}, Rect1_min_y :{1} , Rect1_max_x :{2} ,Rect1_max_y :{3})", rect1_min_x, rect1_min_y, rect1_max_x, rect1_max_y));
        Debug.Log(String.Format("(Rect2_min_x :{0}, Rect2_min_y :{1} , Rect2_max_x :{2} ,Rect2_max_y :{3})", rect2_min_x, rect2_min_y, rect2_max_x, rect2_max_y));

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
