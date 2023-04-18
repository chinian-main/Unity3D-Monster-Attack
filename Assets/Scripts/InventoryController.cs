using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

#region 脚本信息
//背包制作
#endregion

public class InventoryController : MonoBehaviour
{
    //拾取按钮
    //public Button btn_pickup;
    //背包物品槽(预制体)
    public GameObject item;
    //物品精灵图
   // public Sprite[] sprites;

    //生成物品的父物体
    private Transform content;
    PlayerController player;
    // Start is called before the first frame update
    void Start()
    {
        //实例化对象父亲的目录！！！
        content = transform.Find("Viewport/Content").transform;
        player=FindObjectOfType<PlayerController>().GetComponent<PlayerController>();
        Init();
        //btn_pickup.onClick.AddListener(AddHPItem);
    }
    void Init(){
        
    }
    /// <summary>
    /// 拾取按钮绑定事件
    /// </summary>
    public void AddItem(string itemName){
                //Debug.Log("点击");
        int i = 0;
        string objName="";
        Sprite sprite=Resources.Load<Sprite>("UISprites/"+itemName);
          for (int j = 0; j < 20; j++)
        {
            if (Game.itemsDic.ContainsKey(sprite.name+j.ToString()))
            {
                objName = sprite.name + j.ToString();
                i = j;
            }
            else
            { 
                //得到字典中最后一个该物体名字赋值objName后跳出循环
                break;
            }
        }
        //如果字典中没有该物体，从0开始给名字加后缀
        if (objName=="")
        {
            i = 0;
            objName = sprite.name + i.ToString();
        }
        //如果字典中有该物体，进入if
        if (Game.itemsDic.ContainsKey(objName))
        {
            //设置背包一个格子最多放两个（*2）
            if (Game.itemsDic[objName] < 2)
            {
                Game.itemsDic[objName]++;
                Game.objsDic[objName].transform.Find("num").GetComponent<Text>().text = "x" + Game.itemsDic[objName].ToString();
                //Debug.Log("加一"+objName + itemsDic[objName].ToString());
            }
            //如果背包一个格子内物品大于两个，objName后缀数字加1，重新实例化一个新物体加到字典中
            else if (Game.itemsDic[objName] >= 2)
            {
                //Debug.Log("满了");
                i++;
                objName = sprite.name + i.ToString();
                Game.itemsDic.Add(objName, 1);
                //实例化一个一样的物品，更改名字后缀i
                GameObject obj = Instantiate(item, content.transform);
                Image image = obj.transform.Find("slot").GetComponent<Image>();
                image.sprite = sprite;
                Text text = obj.transform.Find("num").GetComponent<Text>();
                text.text = "x" + Game.itemsDic[objName].ToString();
                obj.GetComponentInChildren<Button>().onClick.AddListener(delegate ()
                {
                    OnClickUse(obj, objName, text);
                });
                Game.objsDic.Add(objName, obj);
            }
        }  
        //如果字典中没有该物体名字，则在字典中添加该物体名字
        else
        {
            Game.itemsDic.Add(objName, 1);
            //实例化对象
            GameObject obj = Instantiate(item, content.transform);
            Image image = obj.transform.Find("slot").GetComponent<Image>();
            image.sprite = sprite;
            Text text = obj.transform.Find("num").GetComponent<Text>();
            text.text = "x" + Game.itemsDic[objName].ToString();
            obj.GetComponentInChildren<Button>().onClick.AddListener(delegate ()
            {
                OnClickUse(obj, objName, text);
            });
            Game.objsDic.Add(objName, obj);
        }

    }

    // void OnClickPickUp()
    // {

    //     //随机生成物品
    //     Sprite sprite = sprites[Random.Range(0, sprites.Length)];
    //     //循环得到字典中最后一个物品名字
      
    // }

    /// <summary>
    /// 使用按钮绑定事件
    /// </summary>
    /// <param name="obj">使用物品对象</param>
    /// <param name="name">使用物品名称</param>
    /// <param name="text">剩余数量文本</param>
    void OnClickUse(GameObject obj, string name, Text text)
    {
           
       
            //如果没有使用完              
          //剩余数量减1
          Game.itemsDic[name]--;
            text.text = "x" + Game.itemsDic[name].ToString();
            //
            if(name.Substring(0,6)=="HPItem"){
                player.AddHp(5);
                
            }
            if(name.Substring(0,6)=="PPItem"){
                player.AddPp(5);
                }
            if(name.Substring(0,4)=="Gun2"){
                player.EquipGunSwitch(2);
            }
            if(name.Substring(0,4)=="Gun1"){
                player.EquipGunSwitch(1);
            }
            if(name.Substring(0,4)=="Gun3"){
                player.EquipGunSwitch(3);
            }
            if(name.Substring(0,4)=="Gun4"){
                player.EquipGunSwitch(4);
            }
            if(name.Substring(0,4)=="Gun5"){
                player.EquipGunSwitch(5);
            }

         if (Game.itemsDic[name] <= 0)     //如果使用完
        {
           Game.itemsDic.Remove(name);
            Game.objsDic.Remove(name);
            Destroy(obj);
        }
    }
}
