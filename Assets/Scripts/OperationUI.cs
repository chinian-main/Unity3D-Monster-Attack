using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/// <summary>
/// 面板：操作说明
/// </summary>
public class OperationUI : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        transform.Find("closeBtn").GetComponent<Button>().onClick.AddListener(onCloseBtn);
    }
    void onCloseBtn()
    {
        Debug.Log("close");
        Game.uiManager.CloseUI("OperationUI");
        Game.uiManager.ShowUI<PauseUI>("PauseUI");
    }
}
