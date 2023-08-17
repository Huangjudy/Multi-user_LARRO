using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using UnityEngine;

public class Volumetric_object
{
    
    private GameObject OBJ_Pos;
    private GameObject Box_of_OBJ;
    private GameObject Video_of_OBJ;
    public string name;
    private int _time = 0;
    public Vector3 position;
    private Vector3 new_localscale;
    private Vector3 old_localscale;
    
    public void object_init(GameObject gameObject)
    {
        OBJ_Pos = gameObject;
        name = gameObject.name;
        
        //Box_of_OBJ = gameObject.transform.GetChild(1).gameObject;  // 盒子物件資訊  控制物件在FoV上的縮放
        //Box_of_OBJ = gameObject.transform;  // 盒子物件資訊  控制物件在FoV上的縮放
        //Video_of_OBJ = gameObject.transform.GetChild(1).gameObject.transform.GetChild(0).gameObject;

        position = gameObject.transform.position;
        
    }

    public void Object_update(Object_transform new_object_value)
    {
        
        Vector3 Obj_position = new Vector3(new_object_value.PosX, new_object_value.PosY, new_object_value.PosZ); // 獲取物件位置
        
        OBJ_Pos.transform.position = Obj_position; //改變物件位置
        position = OBJ_Pos.transform.position;
        

        if (_time == 0) // 第一次接收到物件控制資料
        {
            old_localscale = new Vector3(new_object_value.ScaleX, new_object_value.ScaleY, new_object_value.ScaleZ); // 獲取物件起始縮放比例
            _time += 1;
        }
        else
        {
            new_localscale = new Vector3(new_object_value.ScaleX, new_object_value.ScaleY, new_object_value.ScaleZ); // 獲取物件起始縮放比例
            if (new_localscale != old_localscale)  // 新的縮放大小不等於舊的 代表有改變 
            {
                // 計算縮放比例的大小
                float Scaleratio = new_localscale.x / old_localscale.x;
                //Box_of_OBJ.transform.localScale = Box_of_OBJ.transform.localScale * Scaleratio;
                OBJ_Pos.transform.localScale = OBJ_Pos.transform.localScale * Scaleratio;
                //Video_of_OBJ.transform.localScale = Video_of_OBJ.transform.localScale * Scaleratio;

            }
            old_localscale = new_localscale;
        }

  
    }
}
