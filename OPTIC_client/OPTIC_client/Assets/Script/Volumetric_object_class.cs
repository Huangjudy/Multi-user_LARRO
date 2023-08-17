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
        
        //Box_of_OBJ = gameObject.transform.GetChild(1).gameObject;  // ���l�����T  �����bFoV�W���Y��
        //Box_of_OBJ = gameObject.transform;  // ���l�����T  �����bFoV�W���Y��
        //Video_of_OBJ = gameObject.transform.GetChild(1).gameObject.transform.GetChild(0).gameObject;

        position = gameObject.transform.position;
        
    }

    public void Object_update(Object_transform new_object_value)
    {
        
        Vector3 Obj_position = new Vector3(new_object_value.PosX, new_object_value.PosY, new_object_value.PosZ); // ��������m
        
        OBJ_Pos.transform.position = Obj_position; //���ܪ����m
        position = OBJ_Pos.transform.position;
        

        if (_time == 0) // �Ĥ@�������쪫�󱱨���
        {
            old_localscale = new Vector3(new_object_value.ScaleX, new_object_value.ScaleY, new_object_value.ScaleZ); // �������_�l�Y����
            _time += 1;
        }
        else
        {
            new_localscale = new Vector3(new_object_value.ScaleX, new_object_value.ScaleY, new_object_value.ScaleZ); // �������_�l�Y����
            if (new_localscale != old_localscale)  // �s���Y��j�p�������ª� �N������ 
            {
                // �p���Y���Ҫ��j�p
                float Scaleratio = new_localscale.x / old_localscale.x;
                //Box_of_OBJ.transform.localScale = Box_of_OBJ.transform.localScale * Scaleratio;
                OBJ_Pos.transform.localScale = OBJ_Pos.transform.localScale * Scaleratio;
                //Video_of_OBJ.transform.localScale = Video_of_OBJ.transform.localScale * Scaleratio;

            }
            old_localscale = new_localscale;
        }

  
    }
}
