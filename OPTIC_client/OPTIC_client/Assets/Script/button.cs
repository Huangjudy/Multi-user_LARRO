using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.WebRTC.Unity;

public class button : MonoBehaviour
{
    [SerializeField]
    PeerConnection peerconnection;

    GameObject ObjectSet;
    
   
    GameObject lens;
    
    [SerializeField]
    GameObject Table;

    
    GameObject SettingTable;
    string open;

    Rigidbody Table_Rigidbody;

    void Start()
    {
        Table_Rigidbody = Table.GetComponent<Rigidbody>();
        //This locks the RigidBody so that it does not move or rotate in the Z axis.
        //m_Rigidbody.constraints = RigidbodyConstraints.FreezePositionZ | RigidbodyConstraints.FreezeRotationZ;
    }


    public void GenerateOpticalModel()
    {
        Vector3 offset = new Vector3(0, 1, 0);
        Vector3 lensposition = Table.transform.position + offset;
        GameObject newobject = Instantiate(lens, lensposition, Quaternion.identity);
        newobject.transform.parent = ObjectSet.transform;
    }
    /*
    public void ControlSettingTable()
    {
        if (GameObject.Find("Open") != null)
        {
            GameObject.Find("Open").transform.name = "Close";
            SettingTable.SetActive(true);

        }
        else
        {
            GameObject.Find("Close").transform.name = "Open";
            SettingTable.SetActive(false);
        }
    }
    */
    public void Showtable()
    {
        Table.SetActive(true);
        RemoveAllParent();
    }

    public void hiddentable()
    {
        Table.SetActive(false);
    }
    /*
    public void lock_unlock()
    {
        if (GameObject.Find("Lock") != null)
        {
            GameObject.Find("Lock").GetComponent<ButtonConfigHelper>();
            GameObject.Find("Lock").transform.name = "unLock";
            Table_Rigidbody.constraints = RigidbodyConstraints.FreezePosition | RigidbodyConstraints.FreezeRotation;


        }
        else
        {
            GameObject.Find("unLock").GetComponent<ButtonConfigHelper>();
            GameObject.Find("unLock").transform.name = "Lock";
            Table_Rigidbody.constraints = RigidbodyConstraints.None;
        }
    }
    */
    public void Lock()
    {
        //Table_Rigidbody.constraints = RigidbodyConstraints.FreezePosition | RigidbodyConstraints.FreezeRotation;
        Table_Rigidbody.constraints = RigidbodyConstraints.FreezeAll;
    }

    public void unLock()
    {
        Table_Rigidbody.constraints = RigidbodyConstraints.None;
    }
    public void openline()
    {
        open = "open";
        peerconnection.UseDataChannel("Latency",open);
    }

    public void RemoveAllParent()
    {
        for (int i = 0; i < ObjectSet.transform.childCount; i++)
        {
            GameObject removedobject = ObjectSet.transform.GetChild(i).gameObject;
            Destroy(removedobject);
        }
    }
}
