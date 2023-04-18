using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 游戏状态
/// </summary>
public enum GameState
{
    Register,
    Login,
    Game,
    Pause,      //暂停
    Fight,      //战斗
    Talk        //对话
}
public class Game : MonoBehaviour
{
     public static GameState gameState;
    public static UIManager uiManager;
    public static JsonManager jsonManager;
       //键：物品名称，值：物品数量
    public static Dictionary<string, int> itemsDic ;

    //键：物品名称，值：物品对象
    public static Dictionary<string, GameObject> objsDic;
    public static bool isLoaded = false;
    private void Awake()
    {
        if (isLoaded == true)
        {
            Destroy(gameObject);
        }
        else
        {
            isLoaded = true;
            DontDestroyOnLoad(gameObject);
            uiManager = new UIManager();
            jsonManager=new JsonManager();
            itemsDic= new Dictionary<string, int>();
            objsDic = new Dictionary<string, GameObject>();
            jsonManager.Init();
            uiManager.Init();
        }
    }
    private void Start()
    {
        //uiManager.ShowUI<LoginUI>("LoginUI");
        uiManager.ShowUI<RegisterUI>("RegisterUI");
    }


}
