
using UnityEngine;
using UnityEngine.UI;

public class MaskUI : MonoBehaviour
{
    Text text;
    private void Awake() {
        text=transform.Find("msg/bg/Text").GetComponent<Text>();
        transform.Find("msg/bg/closeBtn").GetComponent<Button>().onClick.AddListener(OnBackBtn);
    }
    public void ShowMsg(string msg){
        text.text=msg.ToString();
    }
        public void OnBackBtn()
    {
    
        Game.uiManager.CloseUI("MaskUI");
    }
}
