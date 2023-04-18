using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager
{
    private Transform canvasTf;//画布的变换组件

    private List<GameObject> uiList;//存储加载过的界面的集合

    public void Init()
    {
        //找世界中的画布
        canvasTf = GameObject.Find("Canvas").transform;
        //初始化集合
        uiList = new List<GameObject>();
    }

    //显示
    public T ShowUI<T>(string uiName) where T : Component
    {
        T ui = Find<T>(uiName);
        if (ui == null)
        {
            //集合中没有 需要从Resources/UI文件夹中加载
            GameObject obj = Object.Instantiate(Resources.Load("UI/" + uiName), canvasTf) as GameObject;

            //改名字
            obj.name = uiName;

            //添加需要的脚本
            ui = obj.AddComponent<T>();

            //添加到集合进行存储
            uiList.Add(obj);
        }
        else
        {
            //显示
            ui.gameObject.SetActive(true);
        }

        return ui;
    }
    //隐藏
    public void HideUI(string uiName)
    {
        GameObject ui = Find(uiName);
        if (ui != null)
        {
            ui.SetActive(false);
        }
    }

    //关闭所有界面
    public void CloseAllUI()
    {
        for (int i = uiList.Count - 1; i >= 0; i--)
        {
            Object.Destroy(uiList[i].gameObject);
        }

        uiList.Clear();//清空集合
    }

    //关闭某个界面
    public void CloseUI(string uiName)
    {
        GameObject ui = Find(uiName);
        if (ui != null)
        {
            uiList.Remove(ui);
            Object.Destroy(ui.gameObject);
        }
    }

    //从集合中找到名字对应的界面脚本
    public T Find<T>(string uiName) where T : Component
    {
        for (int i = 0; i < uiList.Count; i++)
        {
            if (uiList[i].name == uiName)
            {
                return uiList[i].GetComponent<T>();
            }
        }
        return null;
    }

    public GameObject Find(string uiName)
    {
        for (int i = 0; i < uiList.Count; i++)
        {
            if (uiList[i].name == uiName)
            {
                return uiList[i];
            }
        }
        return null;
    }

    //获得某个界面的脚本
    public T GetUI<T>(string uiName) where T : Component
    {
        GameObject ui = Find(uiName);
        if (ui != null)
        {
            if(ui.activeSelf==true)
            return ui.GetComponent<T>();
            else {
                ui.SetActive(true);
                ui.SetActive(false);
                return ui.GetComponent<T>();

            }
        }
        return null;
    }
}
