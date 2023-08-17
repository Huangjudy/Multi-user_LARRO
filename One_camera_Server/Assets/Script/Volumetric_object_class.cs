﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using UnityEngine;

public class Volumetric_object
{
    public const int NOISE = -1;
    public const int UNCLASSIFIED = 0;
    private GameObject OBJ_Pos;
    private GameObject OBJ_True;
    //private GameObject Box_of_OBJ;
    private GameObject Cam_of_OBJ;
    private GameObject RenderCam_of_OBJ;
    public Camera objectstreamingCam;
    public List<string> combinelayer = new List<string>();
    public int ClusterId;
    public string name;
    public Vector3 position;
    public Quaternion rotation;
    public Vector3 original_offset;
    public float distance_camerawithobject;
    private Vector3 new_localscale;
    private Vector3 old_localscale;
    private BoxCollider boxcollider;
    private int _time = 0;
    private Vector3[] BoundPoints;
    private float camera_orth_size;
    private float[] ScreenPos_x;
    private float[] ScreenPos_y;
    private Vector2 ObjectOnFrameSize;
    public float Onframesize;
    private Vector2 originalsize;
    private Vector2 originalpos;
    private float SizeRatio;
    public Rectangle Rect_onframe;
    private int layermask;
    public int firstclose;

    public override string ToString()
    {
        return String.Format("({0}, {1} , {2} ,{3})", position.x, position.y, position.z, name);
    }

    private static float DistanceSquared(Volumetric_object p1, Volumetric_object p2 )
    {
        float diffX = p2.position.x - p1.position.x;
        float diffY = p2.position.y - p1.position.y;
        float diffZ = p2.position.z - p1.position.z;
        return diffX * diffX + diffY * diffY + diffZ * diffZ;
    }

    public class DBSCAN 
    {
        public static void Grouping(List<Volumetric_object> points, double eps , float minPts)
        {
            List<List<Volumetric_object>> clusters = GetClusters(points, eps, minPts);

            // print points  秀出所有點
            //Debug.LogFormat("The {0} points are :\n", points.Count);
            //foreach (Volumetric_object p in points) Debug.LogFormat(" {0} ", p);
            
            // print clusters 秀有哪幾群
            int total = 0;
            for (int i = 0; i < clusters.Count; i++)
            {
                int count = clusters[i].Count;
                total += count;
                string plural = (count != 1) ? "s" : "";
                //Debug.LogFormat("\nCluster {0} consists of the following {1} point{2} :\n", i + 1, count, plural);
                //foreach (Volumetric_object p in clusters[i]) Debug.LogFormat(" {0} ", p);
                
            }
            // print any points which are NOISE 秀哪個是noise
            total = points.Count - total;
            if (total > 0)
            {
                string plural = (total != 1) ? "s" : "";
                string verb = (total != 1) ? "are" : "is";
                //Debug.LogFormat("\nThe following {0} point{1} {2} NOISE :\n", total, plural, verb);
                //foreach (Volumetric_object p in points)
                //{
                //    if (p.ClusterId == Volumetric_object.NOISE) Debug.LogFormat(" {0} ", p);
                //}
                
            }
            else
            {
                Debug.LogFormat("\nNo points are NOISE");
            }

        }

        static List<List<Volumetric_object>> GetClusters(List<Volumetric_object> points, double eps, float minPts)
        {
            if (points == null) return null;
            List<List<Volumetric_object>> clusters = new List<List<Volumetric_object>>();
            eps *= eps; // square eps 
            int clusterId = 1;
            for (int i = 0; i < points.Count; i++)
            {
                Volumetric_object p = points[i];
                if (p.ClusterId == Volumetric_object.UNCLASSIFIED)
                {
                    if (ExpandCluster(points, p, clusterId, eps, minPts)) clusterId++;
                }
            }
            // sort out points into their clusters, if any
            int maxClusterId = points.OrderBy(p => p.ClusterId).Last().ClusterId;
            if (maxClusterId < 1) return clusters; // no clusters, so list is empty
            for (int i = 0; i < maxClusterId; i++) clusters.Add(new List<Volumetric_object>());  // 創出總共有幾個群
            foreach (Volumetric_object p in points)
            {
                if (p.ClusterId > 0) clusters[p.ClusterId - 1].Add(p); //根據每個點的id將資料放到各個群中
            }
            return clusters; // 回傳分群結果
        }
        static List<Volumetric_object> GetRegion(List<Volumetric_object> points, Volumetric_object p, double eps)  // 先將points中與p符合距離限制的點圈出來
        {
            List<Volumetric_object> region = new List<Volumetric_object>();
            for (int i = 0; i < points.Count; i++)
            {
                float distSquared = Volumetric_object.DistanceSquared(p, points[i]);
                if (distSquared <= eps) region.Add(points[i]);
            }
            return region;
        }
        static bool ExpandCluster(List<Volumetric_object> points, Volumetric_object p, int clusterId, double eps, float minPts)
        {
            List<Volumetric_object> seeds = GetRegion(points, p, eps);
            if (seeds.Count < minPts) // no core point 不符合最小群組限制將此點視為雜訊
            {
                p.ClusterId = Volumetric_object.NOISE;
                return false;
            }
            else // all points in seeds are density reachable from point 'p' 如果不為雜訊點，代表區域中的所有點都符合限制距離
            {
                for (int i = 0; i < seeds.Count; i++) seeds[i].ClusterId = clusterId; // 將區域中的所有點設為相同群組id
                seeds.Remove(p);
                while (seeds.Count > 0) // 沿著這個區域具續擴大往下找，所有找到的符合限制點都將設為相同id
                {
                    Volumetric_object currentP = seeds[0];
                    List<Volumetric_object> result = GetRegion(points, currentP, eps);
                    if (result.Count >= minPts)
                    {
                        for (int i = 0; i < result.Count; i++)
                        {
                            Volumetric_object resultP = result[i];
                            if (resultP.ClusterId == Volumetric_object.UNCLASSIFIED || resultP.ClusterId == Volumetric_object.NOISE)
                            {
                                if (resultP.ClusterId == Volumetric_object.UNCLASSIFIED) seeds.Add(resultP);
                                resultP.ClusterId = clusterId;
                            }
                        }
                    }
                    seeds.Remove(currentP);
                }
                return true;
            }
        }  
    }

    public void object_init(GameObject gameObject, string remoteID)
    {
        OBJ_Pos = gameObject.transform.GetChild(0).gameObject;
        name = gameObject.name;
        //*layermask = gameObject.layer;
        OBJ_True = gameObject.transform.GetChild(0).gameObject;    // 真實物件資訊 Obj_mesh 控制物件旋轉
        //Box_of_OBJ = gameObject.transform.GetChild(1).gameObject;  // 盒子物件資訊  控制物件在FoV上的縮放
        Cam_of_OBJ = GameObject.Find(remoteID).transform.Find(name).transform.GetChild(0).gameObject;  //控制相機拍攝物件
        RenderCam_of_OBJ = Cam_of_OBJ.transform.GetChild(0).gameObject;
        objectstreamingCam = RenderCam_of_OBJ.GetComponent<Camera>();
        camera_orth_size = objectstreamingCam.orthographicSize;
        distance_camerawithobject = Vector3.Distance(new Vector3(0, 0, 0), Cam_of_OBJ.transform.position); //設定相機與物件距離
        original_offset = OBJ_True.transform.eulerAngles; // 物件預設偏移角度
        position = gameObject.transform.position;
        rotation = OBJ_True.transform.rotation;
        firstclose = 0;

        boxcollider = OBJ_True.GetComponent<BoxCollider>();
        BoundPoints = new Vector3[8];
        ScreenPos_x = new float[8];
        ScreenPos_y = new float[8];
        ObjectOnFrameSize = new Vector2();
        
        originalsize = new Vector2();
        originalpos = new Vector2();
        originalsize.x = objectstreamingCam.rect.width;
        originalsize.y = objectstreamingCam.rect.height;
        originalpos.x = objectstreamingCam.rect.x;
        originalpos.y = objectstreamingCam.rect.y;

        BoundPoints[0] = boxcollider.bounds.min;
        BoundPoints[7] = boxcollider.bounds.max;
        BoundPoints[1] = new Vector3(BoundPoints[7].x, BoundPoints[7].y, BoundPoints[0].z);
        BoundPoints[2] = new Vector3(BoundPoints[7].x, BoundPoints[0].y, BoundPoints[7].z);
        BoundPoints[3] = new Vector3(BoundPoints[7].x, BoundPoints[0].y, BoundPoints[0].z);
        BoundPoints[4] = new Vector3(BoundPoints[7].x, BoundPoints[7].y, BoundPoints[7].z);
        BoundPoints[5] = new Vector3(BoundPoints[7].x, BoundPoints[7].y, BoundPoints[0].z);
        BoundPoints[6] = new Vector3(BoundPoints[7].x, BoundPoints[0].y, BoundPoints[7].z);

    }

    public void Object_update(Object_transform new_object_value)
    {
        //*ClusterId = Volumetric_object.UNCLASSIFIED;
        Vector3 Obj_position = new Vector3(new_object_value.PosX, new_object_value.PosY, new_object_value.PosZ); // 獲取物件位置
        Quaternion Obj_rotation = new Quaternion(new_object_value.RotX, new_object_value.RotY, new_object_value.RotZ, new_object_value.RotW);// 獲取物件旋轉

        OBJ_Pos.transform.position = Obj_position; //改變物件位置
        position = OBJ_Pos.transform.position;
        OBJ_True.transform.rotation = Obj_rotation; //改變物件旋轉
        rotation = OBJ_True.transform.rotation;
        //Box_of_OBJ.transform.rotation = OBJ_True.transform.rotation;
        //OBJ_True.transform.eulerAngles += original_offset; //旋轉角度加上旋轉偏移

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
                OBJ_True.transform.localScale = OBJ_True.transform.localScale * Scaleratio;
                //Box_of_OBJ.transform.localScale = Box_of_OBJ.transform.localScale * Scaleratio;
                Cam_of_OBJ.transform.position = new Vector3(Cam_of_OBJ.transform.position.x, Cam_of_OBJ.transform.position.y, Cam_of_OBJ.transform.position.z * Scaleratio);
                distance_camerawithobject = distance_camerawithobject * Scaleratio;
                //RenderCam_of_OBJ.transform.position = new Vector3(RenderCam_of_OBJ.transform.position.x, RenderCam_of_OBJ.transform.position.y * Scaleratio, RenderCam_of_OBJ.transform.position.z);
                objectstreamingCam.orthographicSize = objectstreamingCam.orthographicSize * Scaleratio;
                camera_orth_size = objectstreamingCam.orthographicSize;
            }
            old_localscale = new_localscale;
        }

        BoundPoints[0] = boxcollider.bounds.min;
        BoundPoints[7] = boxcollider.bounds.max;
        BoundPoints[1] = new Vector3(BoundPoints[7].x, BoundPoints[7].y, BoundPoints[0].z);
        BoundPoints[2] = new Vector3(BoundPoints[7].x, BoundPoints[0].y, BoundPoints[7].z);
        BoundPoints[3] = new Vector3(BoundPoints[7].x, BoundPoints[0].y, BoundPoints[0].z);
        BoundPoints[4] = new Vector3(BoundPoints[7].x, BoundPoints[7].y, BoundPoints[7].z);
        BoundPoints[5] = new Vector3(BoundPoints[7].x, BoundPoints[7].y, BoundPoints[0].z);
        BoundPoints[6] = new Vector3(BoundPoints[7].x, BoundPoints[0].y, BoundPoints[7].z);
    }

    public bool Visiable(Camera maincamera)
    {
        if(objectstreamingCam.cullingMask != 8 ) // 不等於CloseCamera代表上一個是可以看到的，把firstclose歸 0
        {
            firstclose = 0;
        }

        if (Volumetric_object.IsObjectInFrustum(maincamera,BoundPoints))
        {
            objectstreamingCam.orthographicSize = camera_orth_size;
            CaculateObjectOnViewSize(maincamera,BoundPoints);
            objectstreamingCam.rect = new Rect(originalpos.x, originalpos.y, originalsize.x * SizeRatio, originalsize.y * SizeRatio);
            objectstreamingCam.cullingMask = 1 << layermask;
            return true;
        }
        else
        {
            objectstreamingCam.cullingMask = 1 << LayerMask.NameToLayer("CloseCamera");
            objectstreamingCam.orthographicSize = 0f;
            return false;
        }
    }


    static bool IsPointInFrustum(Camera maincamera , Vector3 point)
    {
        Plane[] planes = Volumetric_object.GetFrustumPlanes(maincamera);

        for (int i = 0, iMax = planes.Length; i < iMax; ++i)
        {
            //判断一个点是否在平面的正方向上
            if (!planes[i].GetSide(point))
            {
                return false;
            }
        }
        return true;
    }

    static bool IsObjectInFrustum( Camera maincamera ,Vector3[] Boundpoints)
    {
        int count = 0;
        for (int i = 0; i < Boundpoints.Length; i++)
        {
            if (IsPointInFrustum(maincamera, Boundpoints[i]))
            {
                count += 1;
            }
            if (count >= 1)
            {
                return true;
            }
        }
        return false;
    }

    static Plane[]  GetFrustumPlanes(Camera maincamera)
    {
        return GeometryUtility.CalculateFrustumPlanes(maincamera);
    }

    private void CaculateObjectOnViewSize(Camera maincamera , Vector3[] Boundpoints)
    {

        for (int i = 0; i < BoundPoints.Length; i++)
        {
            Vector3 screenPos = maincamera.WorldToScreenPoint(BoundPoints[i]);
            ScreenPos_x[i] = screenPos.x ;
            ScreenPos_y[i] = screenPos.y ;
            
        }

        double diff_x = ScreenPos_x.Max() - ScreenPos_x.Min();
        double diff_y = ScreenPos_y.Max() - ScreenPos_y.Min();
        Onframesize = (float)(diff_x * diff_y);
        Rect_onframe = new Rectangle((int)ScreenPos_x.Min(), (int)ScreenPos_y.Min(), (int)diff_x, (int)diff_y); 

        ObjectOnFrameSize.x = (float)Math.Floor(diff_x / 96) / 10;   // 根據佔畫面大小調整
        ObjectOnFrameSize.y = (float)Math.Floor(diff_y / 96) / 10;

        if (ObjectOnFrameSize.x > 1)
        {
            ObjectOnFrameSize.x = 1.0f;
        }
        if (ObjectOnFrameSize.y > 1)
        {
            ObjectOnFrameSize.y = 1.0f;
        }

        SizeRatio = (ObjectOnFrameSize.x + ObjectOnFrameSize.y) / 2;   


    }

    private double GetEvenNum(double num)
    {
        if (num % 2 == 0)
        {
            return num;
        }
        else
        {
            return num + 1;
        }
    }
}

