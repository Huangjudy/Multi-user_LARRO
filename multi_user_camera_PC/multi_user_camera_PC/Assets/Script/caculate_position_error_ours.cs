using Microsoft.MixedReality.WebRTC.Unity;
using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Text;
using UnityEngine;

public class Caculate_Reprojection_2D
{
    public float Object_Screen_norm_x { get; set; }
    public float Object_Screen_norm_y { get; set; }
    public float Object_ScreenPosition_z { get; set; }
    public float Object_OriginalPosition_x { get; set; }
    public float Object_OriginalPosition_y { get; set; }
    public float Object_OriginalPosition_z { get; set; }
}

public class caculate_position_error_ours : MonoBehaviour
{
    [SerializeField]
    PeerConnection Getdata;
    [SerializeField]
    Camera cam;
    [SerializeField]
    Control_user_position control_User_Position;
    [SerializeField]
    GameObject gameobject;

    private float reprojection_error_3D;
    private float reprojection_error_2D;

    DataTable reprojectionerrortocsv = CreatCSVTable();


    void Update()
    {
        string Received_json = Getdata.GetReceivedDataFromServer();

        if (Received_json == "")
        {
            Debug.Log("ssss");
        }
        else
        {
            DataRow dataraw = reprojectionerrortocsv.NewRow();
            Caculate_Reprojection_2D object_reprojection = JsonConvert.DeserializeObject<Caculate_Reprojection_2D>(Received_json);
            Vector3 originalpoint = new Vector3(object_reprojection.Object_OriginalPosition_x, object_reprojection.Object_OriginalPosition_y, object_reprojection.Object_OriginalPosition_z);
            AddDatatoDataTable(dataraw, "raw_x", originalpoint.x);
            AddDatatoDataTable(dataraw, "raw_y", originalpoint.y);
            AddDatatoDataTable(dataraw, "raw_z", originalpoint.z);
            //streaming point 
            if (object_reprojection.Object_Screen_norm_x != float.NaN && object_reprojection.Object_Screen_norm_y != float.NaN)
            {

                float straming_x = (gameobject.transform.localScale.x * object_reprojection.Object_Screen_norm_x) - (gameobject.transform.localScale.x / 2);
                float straming_y = (gameobject.transform.localScale.y * object_reprojection.Object_Screen_norm_y) - (gameobject.transform.localScale.y / 2);
                Vector3 streamingpoint = new Vector3(object_reprojection.Object_OriginalPosition_x + straming_x, object_reprojection.Object_OriginalPosition_y + straming_y, object_reprojection.Object_OriginalPosition_z);

                reprojection_error_3D = Vector3.Distance(streamingpoint, originalpoint);
                Vector3 original_3Dto2D = cam.WorldToScreenPoint(originalpoint);
                Vector3 streaming_3Dto2D = cam.WorldToScreenPoint(streamingpoint);

                Debug.Log(original_3Dto2D.ToString("f4"));
                Debug.Log(streaming_3Dto2D.ToString("f4"));

                Vector2 original_2D = new Vector2(original_3Dto2D.x / Screen.width, original_3Dto2D.y / Screen.height);
                Vector2 streaming_2D = new Vector2(streaming_3Dto2D.x / Screen.width, streaming_3Dto2D.y / Screen.height);
                reprojection_error_2D = Vector2.Distance(original_2D, streaming_2D);

                Debug.Log("reprojection_error_3D: " + reprojection_error_3D.ToString("f3"));
                Debug.Log("reprojection_error_2D: " + reprojection_error_2D.ToString("f3"));
                AddDatatoDataTable(dataraw, "stream_x", streamingpoint.x);
                AddDatatoDataTable(dataraw, "stream_y", streamingpoint.y);
                AddDatatoDataTable(dataraw, "stream_z", streamingpoint.z);
            }
            else
            {
                reprojection_error_3D = 0f;
                reprojection_error_2D = 0f;
                AddDatatoDataTable(dataraw, "stream_x", 0f);
                AddDatatoDataTable(dataraw, "stream_y", 0f);
                AddDatatoDataTable(dataraw, "stream_z", 0f);

            }
            AddDatatoDataTable(dataraw, "reprojection_error_3D", reprojection_error_3D);
            AddDatatoDataTable(dataraw, "reprojection_error_2D", reprojection_error_2D);
            reprojectionerrortocsv.Rows.Add(dataraw);
            SaveReprojectionerror();
        }
    }



    private static DataTable CreatCSVTable()
    {
        // 創儲存位置的資料表
        DataTable dt = new DataTable("Reprojection");

        // 定義每一列需放甚麼資料
        dt.Columns.Add("reprojection_error_3D");
        dt.Columns.Add("reprojection_error_2D");
        dt.Columns.Add("raw_x");
        dt.Columns.Add("raw_y");
        dt.Columns.Add("raw_z");
        dt.Columns.Add("stream_x");
        dt.Columns.Add("stream_y");
        dt.Columns.Add("stream_z");


        // 於第一行加入標籤
        DataRow dr = dt.NewRow();
        dr["reprojection_error_3D"] = "reprojection_error_3D";
        dr["reprojection_error_2D"] = "reprojection_error_2D";
        dr["stream_x"] = "stream_x";
        dr["stream_y"] = "stream_y";
        dr["stream_z"] = "stream_z";
        dr["raw_x"] = "raw_x";
        dr["raw_y"] = "raw_y";
        dr["raw_z"] = "raw_z";
        dt.Rows.Add(dr);
        return dt;
    }

    private void AddDatatoDataTable<T>(DataRow dr, string columname, T value)
    {
        dr[columname] = value;
    }

    private static void SaveCSV(string CSVPath, DataTable mSheet)
    {

        //判断数据表内是否存在数据
        if (mSheet.Rows.Count < 1)
            return;
        //读取数据表行数和列数
        int rowCount = mSheet.Rows.Count;
        int colCount = mSheet.Columns.Count;

        //创建一个StringBuilder存储数据
        StringBuilder stringBuilder = new StringBuilder();


        for (int i = 0; i < rowCount; i++)
        {
            for (int j = 0; j < colCount; j++)
            {
                //使用","分割每一個數值
                stringBuilder.Append(mSheet.Rows[i][j] + ",");
            }
            //使用換行符分割每一行
            stringBuilder.Append("\r\n");
        }

        //寫入文件中
        using (FileStream fileStream = new FileStream(CSVPath, FileMode.Create, FileAccess.Write))
        {
            using (TextWriter textWriter = new StreamWriter(fileStream, Encoding.UTF8))
            {
                textWriter.Write(stringBuilder.ToString());
            }

        }
    }

    private static void SaveCSV1(string CSVPath, DataRow mSheet)
    {
        /*
        //判断数据表内是否存在数据
        if (mSheet.Rows.Count < 1)
            return;
        //读取数据表行数和列数
        int rowCount = mSheet.Rows.Count;
        int colCount = mSheet.Columns.Count;
        */
        //创建一个StringBuilder存储数据
        StringBuilder stringBuilder = new StringBuilder();

        stringBuilder.Append(mSheet);
        /*
        for (int i = 0; i < rowCount; i++)
        {
            for (int j = 0; j < colCount; j++)
            {
                //使用","分割每一個數值
                //stringBuilder.Append(mSheet.Rows[i][j] + ",");
                stringBuilder.Append(mSheet.Rows[i][j] + ",");
            }
            //使用換行符分割每一行
            stringBuilder.Append("\r\n");
        }
        */

        //寫入文件中
        using (FileStream fileStream = new FileStream(CSVPath, FileMode.Create, FileAccess.Write))
        {
            using (TextWriter textWriter = new StreamWriter(fileStream, Encoding.UTF8))
            {
                textWriter.Write(stringBuilder.ToString());
            }

        }
    }
    public void SaveReprojectionerror()
    {
        DataTable raw_data = control_User_Position.GetRawData();
        //string filePath = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        //string filePath_error = "C:/Data/Users/judy311166/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        //string filePath_data = "C:/Data/Users/judy311166/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/RawData.csv";
        //string filePath_error = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/multiuser_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        string filePath_error = "D:/multi_user_camera_PC/data/3DReprojection.csv";
        SaveCSV(filePath_error, reprojectionerrortocsv);
        //SaveCSV(filePath_error, raw_data);
    }
    public void SaveReprojectionerror1(DataRow raw_data)
    {
        //string filePath = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        //string filePath_error = "C:/Data/Users/judy311166/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        //string filePath_data = "C:/Data/Users/judy311166/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/RawData.csv";
        //string filePath_error = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/multiuser_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        string filePath_error = "D:/multi_user_camera_PC/data/3DReprojection.csv";
        SaveCSV1(filePath_error, raw_data);
        //SaveCSV(filePath_error, raw_data);
    }
    /*
    public void SaveReprojectionerror()
    {
        DataTable raw_data = control_User_Position.GetRawData();
        //string filePath = "C:/Data/Users/spexial1020p@gmail.com/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        //string filePath_error = "C:/Data/Users/judy311166/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/3DReprojection.csv";
        //string filePath_data = "C:/Data/Users/judy311166/AppData/Local/Packages/Template3D_pzq3xp76mxafg/RoamingState/RawData.csv";
        string filePath_error = "C:/Data/Users/spexial1020p@gmail.com/Downloads/3DReprojection.csv";
        SaveCSV(filePath_error, reprojectionerrortocsv);
        //SaveCSV(filePath_data, raw_data);
    }
    */
}
