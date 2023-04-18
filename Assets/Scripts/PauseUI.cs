
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
/// <summary>
/// 面板：游戏暂停
/// </summary>
public class PauseUI : MonoBehaviour
{
    void Start()
    {
        transform.Find("continentBtn").GetComponent<Button>().onClick.AddListener(onContinentBtn);
        //transform.Find("restartBtn").GetComponent<Button>().onClick.AddListener(onRestartBtn);
        transform.Find("opetrationBtn").GetComponent<Button>().onClick.AddListener(onOpetrationBtn);
        transform.Find("settingBtn").GetComponent<Button>().onClick.AddListener(onSettingBtn);
        transform.Find("quitBtn").GetComponent<Button>().onClick.AddListener(onQuitBtn);
    }
    /// <summary>
    /// 游戏继续
    /// </summary>
    void onContinentBtn()
    {
        Time.timeScale = 1;
        //游戏状态
        Game.gameState = GameState.Game;
        //Game.uiManager.ShowUI<RankUI>("RankUI");
        FindObjectOfType<FightManager>().CursorSwitch();
        //暂停面板
        PlayerController.isPause = false;
        Game.uiManager.CloseUI("PauseUI");
    }
    /// <summary>
    /// 重新开始
    /// </summary>
    //void onRestartBtn()
    //{
    //    Time.timeScale = 1;
    //    //游戏状态
    //    Game.gameState = GameState.Game;
    //    FindObjectOfType<FightManager>().CursorSwitch();
    //    Game.uiManager.CloseUI("PauseUI");
    //    SceneManager.LoadScene("Game");
    //    PlayerController.isPause = !PlayerController.isPause;
    //}
    /// <summary>
    /// 操作说明
    /// </summary>
    void onOpetrationBtn()
    {
        Game.uiManager.ShowUI<OperationUI>("OperationUI");
        Game.uiManager.CloseUI("PauseUI");
    }
    /// <summary>
    /// 设置
    /// </summary>
    public void onSettingBtn()
    {
        Game.uiManager.ShowUI<OptionsUI>("OptionsUI");
        Game.uiManager.CloseUI("PauseUI");
    }
    /// <summary>
    /// 回到开始界面
    /// </summary>
    void onQuitBtn()
    {
        Time.timeScale = 1;
        //暂停面板
        PlayerController.isPause = false;
        Game.uiManager.CloseUI("PauseUI");
        Game.uiManager.CloseUI("FightUI");
        Game.uiManager.ShowUI<LoginUI>("LoginUI");
        SceneManager.LoadScene("Login");
        //游戏状态：开始界面Login
        Game.gameState = GameState.Login;
    }
}
