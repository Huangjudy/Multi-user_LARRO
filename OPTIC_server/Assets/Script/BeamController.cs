using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeamController : MonoBehaviour
{
    public LineRenderer lineRenderer;
    public Transform object1; // 第一個物體，光線的起始點
    public Transform object2; // 第二個物體，光線的中間點
    public Transform object3; // 第三個物體，光線的終點

    public float beamWidth = 0.2f; // 光線的寬度
    public float beamHeight = 0.5f; // 光線的高度

    private void Start()
    {
        if (lineRenderer == null)
        {
            lineRenderer = GetComponent<LineRenderer>();
        }

        lineRenderer.startWidth = beamWidth; // 設置光線起始點的寬度
        lineRenderer.endWidth = beamWidth; // 設置光線終點的寬度

        UpdateBeamPositions();
    }

    private void UpdateBeamPositions()
    {
        if (object1 != null && object2 != null && object3 != null)
        {
            Vector3 startPosition = GetHeadPosition(object1); // 第一個物體頭部位置
            Vector3 middlePosition = GetHeadPosition(object2); // 第二個物體頭部位置
            Vector3 endPosition = GetHeadPosition(object3); // 第三個物體頭部位置

            lineRenderer.positionCount = 3; // 設置光線的位置數量為3

            lineRenderer.SetPosition(0, startPosition);
            lineRenderer.SetPosition(1, middlePosition);
            lineRenderer.SetPosition(2, endPosition);
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
