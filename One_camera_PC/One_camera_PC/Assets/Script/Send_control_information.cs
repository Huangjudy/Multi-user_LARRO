using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Microsoft.MixedReality.WebRTC.Unity;

public class Object_transform
{
    public float PosX { get; set; }
    public float PosY { get; set; }
    public float PosZ { get; set; }
    public float RotX { get; set; }
    public float RotY { get; set; }
    public float RotZ { get; set; }
    public float RotW { get; set; }
    public float ScaleX { get; set; }
    public float ScaleY { get; set; }
    public float ScaleZ { get; set; }
}

public class Send_control_information : MonoBehaviour
{
    [SerializeField]
    PeerConnection PeerConnection;

    private string json_object_control;
    private int childCount;
    private Dictionary<string, Object_transform> object_control = new Dictionary<string, Object_transform>();
    private Dictionary<string, Object_transform> send_control = new Dictionary<string, Object_transform>();
    
    void Update()
    {
        childCount = transform.childCount;//子物件有多少個
        json_object_control = "";
        for (int i = 0; i < childCount; i++)
        {
            GameObject Getobject = transform.GetChild(i).gameObject;
            UpdateObjectDatatoDict(object_control, Getobject);
        }

        if (send_control.Count != 0)
        {
            json_object_control = JsonConvert.SerializeObject(send_control);
            send_control.Clear();
            PeerConnection.UseDataChannel("interact", json_object_control);
        }

        //Debug.Log(json_object_control);
        
    }

    private void UpdateObjectDatatoDict(Dictionary<string, Object_transform> dict, GameObject Object)
    {
        string key = Object.name;
        if (dict.TryGetValue(key, out _))
        {
            //Object_transform newdata = GetObjectData(Object.transform.GetChild(1));
            Object_transform newdata = GetObjectData(Object.transform);
            bool is_same = Comparenotsame(dict[key], newdata);
            if (is_same)
            {
                //存在，在字典中修改資料
                //dict[key] = GetObjectData(Object.transform.GetChild(1));
                dict[key] = GetObjectData(Object.transform);
                AddObjectDatatoSend(send_control, key, dict[key]);
            }
        }
        else
        {
            //不存在，在字典中添加資料
            //dict.Add(key, GetObjectData(Object.transform.GetChild(1)));
            dict.Add(key, GetObjectData(Object.transform));
            AddObjectDatatoSend(send_control, key, dict[key]);
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
        return false;
    }


    private void AddObjectDatatoSend(Dictionary<string, Object_transform> Send_control0, string key, Object_transform value)
    {
        Send_control0.Add(key, value);
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
    public void server_change()//我沒改變，別人動了，因此我不需要再傳變動的資訊給server
    {
        childCount = transform.childCount;//子物件有多少個
        
        for (int i = 0; i < childCount; i++)
        {
            GameObject Getobject = transform.GetChild(i).gameObject;
            UpdateObjectDatatoDict(object_control, Getobject);//
        }
        send_control.Clear();
    }

}
