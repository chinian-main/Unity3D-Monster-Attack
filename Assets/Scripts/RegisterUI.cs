
using UnityEngine;
using UnityEngine.UI;

public class RegisterUI : MonoBehaviour
{

    // Start is called before the first frame update
    public InputField nameInput;
    public InputField passwordInput;
    void Start()
    {
        transform.Find("signUpBtn").GetComponent<Button>().onClick.AddListener(SignUp);
        transform.Find("quitBtn").GetComponent<Button>().onClick.AddListener(onQuitBtn);
        transform.Find("signInBtn").GetComponent<Button>().onClick.AddListener(SignIn);
        passwordInput = transform.Find("pwdField").GetComponent<InputField>();
        nameInput = transform.Find("nameField").GetComponent<InputField>();
        Game.jsonManager.LoadJson();
    }
    public void onQuitBtn()
    {
        Application.Quit();
    }
    public void SignUp()
    {
        if (string.IsNullOrEmpty(nameInput.text) || string.IsNullOrEmpty(passwordInput.text))
        {
            Game.uiManager.ShowUI<MaskUI>("MaskUI").ShowMsg("输入不能为空");
            return;
        }
        if (Game.jsonManager.LoadJson().ContainsKey(nameInput.text)) Game.uiManager.ShowUI<MaskUI>("MaskUI").ShowMsg("用户名已存在");
        else
        {
            Game.jsonManager.AddUser(nameInput.text, passwordInput.text);
            Game.uiManager.ShowUI<MaskUI>("MaskUI").ShowMsg("恭喜你注册成功");
        }
    }
    /// <summary>
    /// 登录
    /// </summary>
    public void SignIn()
    {
        if (string.IsNullOrEmpty(nameInput.text) || string.IsNullOrEmpty(passwordInput.text))
        {
            Game.uiManager.ShowUI<MaskUI>("MaskUI").ShowMsg("输入不能为空");
            return;
        }
        // bool flag =false;
        var jsonDic = Game.jsonManager.LoadJson();
        if (jsonDic.ContainsKey(nameInput.text) && jsonDic[nameInput.text].Pwd == passwordInput.text)
        {

            Game.jsonManager.currentUser = jsonDic[nameInput.text];
            Game.uiManager.ShowUI<LoginUI>("LoginUI");
            Game.uiManager.CloseUI("RegisterUI");
            //游戏状态：开始界面Login
            Game.gameState = GameState.Login;
        }
        else
        {
            Game.uiManager.ShowUI<MaskUI>("MaskUI").ShowMsg("用户名或密码错误");
        }



    }
}
