using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using System;
using Microsoft.MixedReality.WebRTC.Unity;
/*
public class Objecttransform
{
    public float PosX { get; set; }
    public float PosY { get; set; }
    public float PosZ { get; set; }
    //public float RotX { get; set; }
    //public float RotY { get; set; }
    //public float RotZ { get; set; }
    //public float RotW { get; set; }
    public float ScaleX { get; set; }
    public float ScaleY { get; set; }
    public float ScaleZ { get; set; }
}
*/
public class Updata_multi_user_position : MonoBehaviour
{
    [SerializeField]
    PeerConnection PeerConnection;

    private string json_object_control;
    private int childCount;
    private Dictionary<string, Object_transform> object_control = new Dictionary<string, Object_transform>();
    private Dictionary<string, Object_transform> send_object_position = new Dictionary<string, Object_transform>();
    private bool change = false;
    void Update()
    {
        //change = GameObject.Find("Object_manager").GetComponent<All_updateobject>().Get_change();
        childCount = GameObject.Find("Object_manager").transform.childCount;//子物件有多少個
        
        for (int i = 0; i < childCount; i++)
        {
            GameObject Getobject = GameObject.Find("Object_manager").transform.GetChild(i).gameObject;
            UpdateObjectDatatoDict(object_control, Getobject);
        }
        if (Control_objectposition.myself == false )//我clien沒有改變
        {
            json_object_control = "";
            
            
            
            Debug.Log($"{send_object_position.Count}");
            if (send_object_position.Count != 0)//別人有變
            {
                json_object_control = JsonConvert.SerializeObject(send_object_position);
                Debug.Log($"222222222222222222222222222222222222222");
                Debug.Log(send_object_position);
                send_object_position.Clear();
                PeerConnection.UseDataChannel("interact", json_object_control);
            }
            
            
            //Control_objectposition.myself = true;
        }
        
        else //我有變，因此我不需要傳給client
        {
            send_object_position.Clear();
        }
    }

    private void UpdateObjectDatatoDict(Dictionary<string, Object_transform> dict, GameObject Object)
    {
        string key = Object.name;
        if (dict.TryGetValue(key, out _))
        {
            Object_transform newdata = GetObjectData(Object.transform.GetChild(0));
            bool is_notsame = Comparenotsame(dict[key], newdata);
            if (is_notsame)
            {
                //存在，在字典中修改資料
                dict[key] = GetObjectData(Object.transform.GetChild(0));
                AddObjectDatatoSend(send_object_position,key, dict[key]);
            }
        }
        else
        {
            //不存在，在字典中添加資料
            dict.Add(key, GetObjectData(Object.transform.GetChild(0)));
            AddObjectDatatoSend(send_object_position,key, dict[key]);
        }
    }

    private bool Comparenotsame(Object_transform objectone, Object_transform objecttwo)
    {
        if (objectone.PosX != objecttwo.PosX)
        {
            return true;
        }
        else if (objectone.RotX != objecttwo.RotX)
        {
            return true;
        }
        else if (objectone.ScaleX != objecttwo.ScaleX)
        {
            return true;
        }
        Debug.Log($"99999999999999999999999999999999999999999999");
        return false;
    }


    private void AddObjectDatatoSend(Dictionary<string, Object_transform> send_object_position, string key, Object_transform value)
    //private void AddObjectDatatoSend( string key, Object_transform value)
    {
        send_object_position.Add(key, value);
    }

    private Object_transform GetObjectData(Transform Object)
    {
        Vector3 position = Object.position;
        Quaternion rotation = Object.rotation;
        Vector3 Scale = Object.localScale;

        Object_transform lst_object_transform = new Object_transform()
        {
            PosX = position.x,
            PosY = position.y,
            PosZ = position.z,
            RotX = rotation.x,
            RotY = rotation.y,
            RotZ = rotation.z,
            RotW = rotation.w,
            ScaleX = Scale.x,
            ScaleY = Scale.y,
            ScaleZ = Scale.z

        };
        return lst_object_transform;
    }
}
