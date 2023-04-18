using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class RankUI : MonoBehaviour
{
    GameObject elementWin;
    GameObject elementLose;
    Transform parent;
    private void Awake()
    {
        parent = transform.Find("ScrollRect/content").transform;
        elementWin = transform.Find("ScrollRect/content/win").gameObject;
        elementLose = transform.Find("ScrollRect/content/lose").gameObject;
        transform.Find("closeBtn").GetComponent<Button>().onClick.AddListener(OnBackBtn);
        List<User> userlist=Game.jsonManager.GetList();

        userlist.Sort((User a, User b) =>
        {   // a,b  1 交换位置
            if(a.isPassed&&b.isPassed)  // a-b
            return -a.Score.CompareTo(b.Score);//1 逆序
            else {
                if(a.isPassed)return -1;
                if(b.isPassed)return 1;
                return b.Score-a.Score;
            }
        });
   
        for (int i = 0; i < userlist.Count; i++)
        {
            GameObject obj = Instantiate(userlist[i].isPassed?elementWin:elementLose, parent);
            obj.SetActive(true);
            obj.transform.Find("content/one").GetComponent<Text>().text = (i+1).ToString();
            obj.transform.Find("content/two").GetComponent<Text>().text = userlist[i].Name;
            obj.transform.Find("content/three").GetComponent<Text>().text = userlist[i].Score.ToString();
            obj.transform.Find("content/four").GetComponent<Text>().text =CalculTime ((int)userlist[i].GameTime);
            obj.transform.Find("content/five").GetComponent<Text>().text=(userlist[i].isPassed?"通过成功":"未通关");
        }

    }
    string CalculTime(int time){

        if(time<60)return time+"s";
        else if(time<60*60)return time/60+"'"+time%60+"m";
       else  return time/3600+"'"+time%3600+"h";
    }
    public void OnBackBtn()
    {
        Game.uiManager.ShowUI<LoginUI>("LoginUI");
        Game.uiManager.CloseUI("RankUI");
    }


}
