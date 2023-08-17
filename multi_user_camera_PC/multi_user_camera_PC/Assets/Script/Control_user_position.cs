using Microsoft.MixedReality.WebRTC.Unity;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;

public class Control_user_position : MonoBehaviour
{
    [SerializeField]
    PeerConnection PeerConnection;


    private string camera_info;

    void Update()
    {
        camera_info = GetCameraInfo(transform);
        PeerConnection.UseDataChannel("Camera", camera_info);
    }

    private string GetCameraInfo(Transform maincam)
    {
        string position_x = maincam.position.x.ToString("f3");
        string position_y = maincam.position.y.ToString("f3");
        string position_z = maincam.position.z.ToString("f3");
        string rotation_yoll = maincam.eulerAngles.x.ToString("f3");
        string rotation_pitch = maincam.eulerAngles.y.ToString("f3");
        string rotation_raw = maincam.eulerAngles.z.ToString("f3");
        string track_data = position_x + ',' + position_y + ',' + position_z + ',' + rotation_yoll + ',' + rotation_pitch + ',' + rotation_raw;
        return track_data;
    }
    DataTable trace_raw_data = CreatCSVTable();

    private static DataTable CreatCSVTable()
    {
        // 創儲存位置的資料表
        DataTable dt = new DataTable("move_trace_raw_data");
        // 定義每一列需放甚麼資料
        dt.Columns.Add("timestamp");
        dt.Columns.Add("x");
        dt.Columns.Add("y");
        dt.Columns.Add("z");
        dt.Columns.Add("qx");
        dt.Columns.Add("qy");
        dt.Columns.Add("qz");
        dt.Columns.Add("qw");
        // 於第一行加入標籤
        DataRow dr = dt.NewRow();
        dr["timestamp"] = "timestamp";
        dr["x"] = "x";
        dr["y"] = "y";
        dr["z"] = "z";
        dr["qx"] = "qx";
        dr["qy"] = "qy";
        dr["qz"] = "qz";
        dr["qw"] = "qw";
        dt.Rows.Add(dr);
        return dt;
    }
    private void AddDatatoDataTable(DataTable dt, long timestamp, float x, float y, float z, float qx, float qy, float qz, float qw)
    {
        DataRow dr = dt.NewRow();
        dr["timestamp"] = timestamp;
        dr["x"] = x;
        dr["y"] = y;
        dr["z"] = z;
        dr["qx"] = qx;
        dr["qy"] = qy;
        dr["qz"] = qz;
        dr["qw"] = qw;
        dt.Rows.Add(dr);
    }
    public DataTable GetRawData()
    {
        return trace_raw_data;
    }
}
