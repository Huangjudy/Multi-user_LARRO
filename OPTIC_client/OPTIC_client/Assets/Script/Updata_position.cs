
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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
public class Updata_position : MonoBehaviour
{
    

    private int childCount;
    private List<Volumetric_object> List_volumetric = new List<Volumetric_object>();

    private string _controlobject;
    private Object_transform _controlobjectvalue;
    void Start()
    {
        childCount = GameObject.Find("Object_control_center").transform.childCount; // 找出有多少物件，先建立所有物件的表格
        
        for (int i = 0; i < childCount; i++)
        {
            GameObject Getobject = GameObject.Find("Object_control_center").transform.GetChild(i).gameObject;
            List_volumetric.Add(new Volumetric_object());
            List_volumetric[i].object_init(Getobject);
        }
    }
    void Update()
    {

        if (Receive_interact.Received_object_json != "")
        {
            foreach (KeyValuePair<string, Object_transform> objectname in Receive_interact.Object_control_center)
            {
                //Debug.Log($"List_volumetric");
                //Debug.Log(List_volumetric[0]);
                _controlobject = objectname.Key;
                //Debug.Log($"_controlobject");
                //Debug.Log(_controlobject);
                _controlobjectvalue = objectname.Value;
                int index = List_volumetric.FindIndex(x => x.name.Equals(_controlobject));
                //Debug.Log($"index");
                //Debug.Log(index);
                Volumetric_object volumetric = List_volumetric[index]; // 從List 中找出符合名稱的物件
                volumetric.Object_update(_controlobjectvalue);
                List_volumetric[index] = volumetric;
                Debug.Log("1231321321321321231321321321321213");
            }
            GameObject.Find("Object_control_center").GetComponent<Send_control_information>().server_change();
        }



    }
        
}
