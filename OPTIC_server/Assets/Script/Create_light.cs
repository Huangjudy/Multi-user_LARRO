using Microsoft.MixedReality.WebRTC.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Create_light : MonoBehaviour
{
    [SerializeField]
    PeerConnection peerConnection;
    
    //public GameObject Prefad;
    [SerializeField]
    Camera object_cam;

    public static bool openLight = false;

    //public LineRenderer lineRenderer;
    private Transform object1; // 第一個物體，光線的起始點
    private Transform object2; // 第二個物體，光線的中間點
    private Transform object3; // 第三個物體，光線的終點
    private GameObject line_obj; // 第三個物體，光線的終點
    private GameObject object3_default;
    private GameObject line;
    private float beamWidth = 0.01f; // 光線的寬度
    private float beamHeight = 0.01f; // 光線的高度
    
    // Start is called before the first frame update
    void Start()
    {
        object1= GameObject.Find("Object_manager").transform.Find("Object1").transform.GetChild(0).gameObject.transform.GetChild(1).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform;
        object2 = GameObject.Find("Object_manager").transform.Find("Object2").transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform;
        object3 = GameObject.Find("Object_manager").transform.Find("Object3").transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform;
        line = GameObject.Find("line_object");
        object3_default = GameObject.Find("Object_manager").transform.Find("Object3").transform.GetChild(0).gameObject.transform.GetChild(0).gameObject;
        // 假設你已經有了BoxCollider組件的引用
        BoxCollider boxCollider = object3_default.GetComponent<BoxCollider>();

        // 創建並設置物理材質
        PhysicMaterial physicsMaterial = new PhysicMaterial();
        physicsMaterial.dynamicFriction = 0f; // 設置動態摩擦力為0
        physicsMaterial.bounciness = 1f; // 設置彈性為1
        // 將物理材質設置到BoxCollider上
        boxCollider.material = physicsMaterial;

    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log($"openLight:{openLight}");
        string Received_json = peerConnection.GetLatencydata();//light的值
        if (Received_json == "open" || openLight==true)
        {
            
            object_cam.cullingMask |= (1 << LayerMask.NameToLayer("Object4"));
            //line = Instantiate(Prefad,object1.transform.position, Quaternion.identity, line_obj.transform);//動態生成使用者連線物件
            Debug.Log("cccccccccccccccccccccccccccccccccccccccccccccccccccccc");
            openLight = true;
            UpdateBeamPositions();
        }
        
    }
    private void UpdateBeamPositions()
    {


        line.GetComponent<LineRenderer>().startWidth = beamWidth; // 設置光線起始點的寬度
        line.GetComponent<LineRenderer>().endWidth = beamWidth; // 設置光線終點的寬度
        object3.position = new Vector3(object3.position.x-0.001f, object3.position.y+0.02f, object3.position.z -1);
        if (object1 != null && object2 != null && object3 != null)
        {
            Vector3 startPosition = GetHeadPosition(object1); // 第一個物體頭部位置
            Vector3 middlePosition = GetHeadPosition(object2); // 第二個物體頭部位置
            Vector3 endPosition = GetHeadPosition(object3); // 第三個物體頭部位置

            line.GetComponent<LineRenderer>().positionCount = 3; // 設置光線的位置數量為3

            line.GetComponent<LineRenderer>().SetPosition(0, startPosition);
            line.GetComponent<LineRenderer>().SetPosition(1, middlePosition);
            line.GetComponent<LineRenderer>().SetPosition(2, endPosition);
        }
    }

    private Vector3 GetHeadPosition(Transform obj)
    {
        // 根據您的需求，獲取物體頭部位置的具體邏輯
        // 這取決於物體的模型和層級設計
        // 您可以使用偏移、特定點的位置或任何其他方法來確定頭部位置

        // 將頭部位置設置為物體的上方偏移
        return obj.position + Vector3.up * obj.localScale.y * beamHeight;
    }
    
}
