using Microsoft.MixedReality.WebRTC.Unity;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;


public class create_peer : MonoBehaviour
{
    public GameObject Prefad;
    public GameObject parent;
    // Start is called before the first frame update
    string init_remoteID = "";
    // Update is called once per frame

    private bool connect = false;
    void Start()
    {
        //Debug.Log("Not RemotePeerId Data");
        GameObject.Find("NodeDssSignaler_Send").GetComponent<NodeDssSignaler>().RemotePeerId = "";
        //init_remoteID = GameObject.Find("NodeDssSignaler").GetComponent<NodeDssSignaler>().GetRemoteID();
    }
    void Update()
    {
        string remoteID = GameObject.Find("NodeDssSignaler_Send").GetComponent<NodeDssSignaler>().GetRemoteID();
        if (remoteID == "")
        {
            //Debug.Log("Not RemotePeerId Data");
        }
        else if(init_remoteID != remoteID)
        {
            
            Debug.Log($"remoteID:{remoteID}");
            
            GameObject user_conn=Instantiate(Prefad, new Vector3(0, 0, 0), Quaternion.identity, parent.transform);//動態生成使用者連線物件
            //startpoint, guidetip = Instantiate(Resources.Load("Prefabs/hand") as GameObject,Quaternion.identity, parent.transform);
            // 修改名稱為 
            user_conn.name = remoteID;

            

            GameObject Node0 = user_conn.transform.GetChild(0).gameObject;//取生成的物件的第1個子物件
            GameObject Node1 = user_conn.transform.GetChild(1).gameObject;//取生成的物件的第2個子物件
            GameObject Node2 = user_conn.transform.GetChild(2).gameObject;//取生成的物件的第3個子物件

            Node0.GetComponent<PeerConnection>().init=false;

            
            Node1.name = Node1.name + "_" + remoteID;//更改物件名稱當中的物件的東西
            Node1.GetComponent<NodeDssSignaler>().ReceiverNode = false;
            Node1.GetComponent<NodeDssSignaler>().RemotePeerId = remoteID;
            Node1.GetComponent<NodeDssSignaler>().LocalPeerId = "UNITY_" + remoteID;

            Debug.Log("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
            init_remoteID = remoteID;
            connect = false;

            


        }
        else if(connect==false)
        {

            GameObject user_conn = GameObject.Find(init_remoteID);
            GameObject Node0 = user_conn.transform.GetChild(0).gameObject;
            GameObject Node2 = user_conn.transform.GetChild(2).gameObject;
            if (Node0.GetComponent<PeerConnection>().init==true)
            {
                Node2.GetComponent<NodeDssSignalerUI>().StartConnection();
                Debug.Log("yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy");
                connect = true;
            }
        }
        
    }
    
}
