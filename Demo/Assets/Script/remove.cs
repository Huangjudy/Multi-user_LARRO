using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class remove : MonoBehaviour
{
    public GameObject allobject;
    // Start is called before the first frame update
    private int childCount;
    public void RemoveAllChildren(GameObject allobject)
    {
        childCount = allobject.transform.childCount;
        Transform transform;
        for (int i = 0; i < childCount; i++)
        {
            transform = allobject.transform.GetChild(i);
            GameObject.Destroy(transform.gameObject);
        }
    }
}
