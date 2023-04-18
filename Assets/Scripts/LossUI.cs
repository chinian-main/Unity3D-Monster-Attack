
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
public class LossUI : MonoBehaviour
{
    public UnityAction resetCallBack;
    public UnityAction quitCallBack;
    private void Awake()
    {
        transform.Find("resetBtn").GetComponent<Button>().onClick.AddListener(OnResetBtn);
        transform.Find("quitBtn").GetComponent<Button>().onClick.AddListener(OnQuitBtn);
    }
    void OnQuitBtn()
    {

        Game.jsonManager.UpdateUser();
        
        if (quitCallBack != null) {
            quitCallBack();
            Game.gameState = GameState.Login;
        }

    }

    void OnResetBtn()
    {
        if (resetCallBack != null)
        {
            resetCallBack();
        }

        Game.uiManager.CloseUI("LossUI");
    }
}
