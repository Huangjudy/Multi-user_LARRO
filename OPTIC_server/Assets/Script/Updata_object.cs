using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Microsoft.MixedReality.WebRTC.Unity;


public class Updata_object : MonoBehaviour
{
    

    private int childCount;
    //private int screenwidth;
    //private int screenheight;
    private List<Volumetric_object> List_volumetric = new List<Volumetric_object>();
    //private List<Volumetric_object> List_Visiable = new List<Volumetric_object>();
    string remoteID;
    //bool name = false;
    private string _controlobject;
    private Object_transform _controlobjectvalue;

    
    // Start is called before the first frame update
    void Start()
    {
        remoteID = GameObject.Find("NodeDssSignaler_Send").GetComponent<NodeDssSignaler>().GetRemoteID();
        childCount = GameObject.Find("Object_manager").transform.childCount; // 找出有多少物件，先建立所有物件的表格
        //Debug.Log($"childCount");
        //Debug.Log(childCount);
        for (int i = 0; i < childCount; i++)
        {
            GameObject Getobject = GameObject.Find("Object_manager").transform.GetChild(i).gameObject;
            List_volumetric.Add(new Volumetric_object());
            List_volumetric[i].object_init(Getobject, remoteID);
        }
    }

    // Update is called once per frame
    void Update()
    {
        /*
        if (name == false)
        {
            remoteID = GameObject.Find("NodeDssSignaler_Send").GetComponent<NodeDssSignaler>().GetRemoteID();
            name = true;
        }
        */
        //判斷是否更新物件
        if (Control_objectposition.Received_object_json != "")
        {
            foreach (KeyValuePair<string, Object_transform> objectname in Control_objectposition.Object_control_center)
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
            }
            Debug.Log($"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
            //Control_objectposition.Received_object_json = ""
            //*Volumetric_object.DBSCAN.Grouping(List_volumetric, eps, minPts); //有更新重新分群
        }
        
    }
}
