
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class LoginUI : MonoBehaviour
{
    
    void Start()
    {
        transform.Find("startBtn").GetComponent<Button>().onClick.AddListener(OnStartGameBtn);
        transform.Find("quitBtn").GetComponent<Button>().onClick.AddListener(onQuitBtn);
        transform.Find("optionsBtn").GetComponent<Button>().onClick.AddListener(onOptionBtn);
        transform.Find("rankBtn").GetComponent<Button>().onClick.AddListener(onRankBtn);
    }
    void onRankBtn(){
        
        Game.uiManager.ShowUI<RankUI>("RankUI");
        Game.uiManager.CloseUI("LoginUI");
    }
    void OnStartGameBtn()
    {
        //��Ϸ״̬��ս��
        Game.gameState = GameState.Fight;
        SceneManager.LoadScene("Game");
    }
    void onOptionBtn()
    {
        Game.uiManager.CloseAllUI();
        Game.uiManager.ShowUI<OptionsUI>("OptionsUI");
    }
   
    public void onQuitBtn()
    {
        Application.Quit();
    }
 
}
