using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Microsoft.MixedReality.WebRTC.Unity;

public class All_updateobject : MonoBehaviour
{
    
    private int childCount;
    //private int screenwidth;
    //private int screenheight;
    private static List<Volumetric_update> List_volumetric = new List<Volumetric_update>();
    //private List<Volumetric_update> List_Visiable = new List<Volumetric_update>();
    //bool name = false;
    private string _controlobject;
    private Object_transform _controlobjectvalue;

    //private double eps = 2;
    //private float minPts = 0.3f;
    //public static bool change = false;
    // Start is called before the first frame update
    void Start()
    {
        childCount = transform.childCount; // 找出有多少物件，先建立所有物件的表格
        Debug.Log($"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
        Debug.Log($"{childCount}");
        for (int i = 0; i < childCount; i++)
        {
            GameObject Getobject = transform.GetChild(i).gameObject;
            List_volumetric.Add(new Volumetric_update());
            List_volumetric[i].object_init(Getobject);
            
        }
        
    }
    /*
    void Update()
    {
        change = false;
    }
    */
    // Update is called once per frame
    public void Object_Update(Dictionary<string, Object_transform>  Object_control_center)
    {
        //change = true;

        foreach (KeyValuePair<string, Object_transform> objectname in Object_control_center)
        {
            Debug.Log($"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
            _controlobject = objectname.Key;
            Debug.Log($"{_controlobject}");
            _controlobjectvalue = objectname.Value;
            int index = List_volumetric.FindIndex(x => x.name.Equals(_controlobject));
            Debug.Log($"{List_volumetric}");
            Debug.Log($"{index}");
            List_volumetric[index].Object_update(_controlobjectvalue);
        }
        //Debug.Log($"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
        
        //Volumetric_update.DBSCAN.Grouping(List_volumetric, eps, minPts); //有更新重新分群

    }
    public bool Object_camerachange(string _controlobject)
    {
        int index = List_volumetric.FindIndex(x => x.name.Equals(_controlobject));
        return List_volumetric[index].GetCamera_change();
    }
    public float Object_ratio(string _controlobject)
    {
        int index = List_volumetric.FindIndex(x => x.name.Equals(_controlobject));
        /*
        Debug.Log($"***************************************");
        Debug.Log($"{_controlobject}");
        Debug.Log($"{List_volumetric[index].GetScaleratio()}");
        Debug.Log($"***************************************");
        */
        return List_volumetric[index].GetScaleratio();
    }
    public List<Volumetric_update> Object_list_get()
    {
        return List_volumetric;
    }


}
