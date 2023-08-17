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
    private Transform object1; // �Ĥ@�Ӫ���A���u���_�l�I
    private Transform object2; // �ĤG�Ӫ���A���u�������I
    private Transform object3; // �ĤT�Ӫ���A���u�����I
    private GameObject line_obj; // �ĤT�Ӫ���A���u�����I
    private GameObject object3_default;
    private GameObject line;
    private float beamWidth = 0.01f; // ���u���e��
    private float beamHeight = 0.01f; // ���u������
    
    // Start is called before the first frame update
    void Start()
    {
        object1= GameObject.Find("Object_manager").transform.Find("Object1").transform.GetChild(0).gameObject.transform.GetChild(1).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform;
        object2 = GameObject.Find("Object_manager").transform.Find("Object2").transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform;
        object3 = GameObject.Find("Object_manager").transform.Find("Object3").transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject.transform;
        line = GameObject.Find("line_object");
        object3_default = GameObject.Find("Object_manager").transform.Find("Object3").transform.GetChild(0).gameObject.transform.GetChild(0).gameObject;
        // ���]�A�w�g���FBoxCollider�ե󪺤ޥ�
        BoxCollider boxCollider = object3_default.GetComponent<BoxCollider>();

        // �Ыبó]�m���z����
        PhysicMaterial physicsMaterial = new PhysicMaterial();
        physicsMaterial.dynamicFriction = 0f; // �]�m�ʺA�����O��0
        physicsMaterial.bounciness = 1f; // �]�m�u�ʬ�1
        // �N���z����]�m��BoxCollider�W
        boxCollider.material = physicsMaterial;

    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log($"openLight:{openLight}");
        string Received_json = peerConnection.GetLatencydata();//light����
        if (Received_json == "open" || openLight==true)
        {
            
            object_cam.cullingMask |= (1 << LayerMask.NameToLayer("Object4"));
            //line = Instantiate(Prefad,object1.transform.position, Quaternion.identity, line_obj.transform);//�ʺA�ͦ��ϥΪ̳s�u����
            Debug.Log("cccccccccccccccccccccccccccccccccccccccccccccccccccccc");
            openLight = true;
            UpdateBeamPositions();
        }
        
    }
    private void UpdateBeamPositions()
    {


        line.GetComponent<LineRenderer>().startWidth = beamWidth; // �]�m���u�_�l�I���e��
        line.GetComponent<LineRenderer>().endWidth = beamWidth; // �]�m���u���I���e��
        object3.position = new Vector3(object3.position.x-0.001f, object3.position.y+0.02f, object3.position.z -1);
        if (object1 != null && object2 != null && object3 != null)
        {
            Vector3 startPosition = GetHeadPosition(object1); // �Ĥ@�Ӫ����Y����m
            Vector3 middlePosition = GetHeadPosition(object2); // �ĤG�Ӫ����Y����m
            Vector3 endPosition = GetHeadPosition(object3); // �ĤT�Ӫ����Y����m

            line.GetComponent<LineRenderer>().positionCount = 3; // �]�m���u����m�ƶq��3

            line.GetComponent<LineRenderer>().SetPosition(0, startPosition);
            line.GetComponent<LineRenderer>().SetPosition(1, middlePosition);
            line.GetComponent<LineRenderer>().SetPosition(2, endPosition);
        }
    }

    private Vector3 GetHeadPosition(Transform obj)
    {
        // �ھڱz���ݨD�A��������Y����m�������޿�
        // �o���M���骺�ҫ��M�h�ų]�p
        // �z�i�H�ϥΰ����B�S�w�I����m�Υ����L��k�ӽT�w�Y����m

        // �N�Y����m�]�m�����骺�W�谾��
        return obj.position + Vector3.up * obj.localScale.y * beamHeight;
    }
    
}
