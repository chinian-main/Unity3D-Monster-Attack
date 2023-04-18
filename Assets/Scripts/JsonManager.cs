using System.Collections;
using System.Collections.Generic;
using System.IO;

using UnityEngine;
[System.Serializable]
public class User{
    public int Id;
    public string Name;
    public string Pwd;
    public int Score;
    public float GameTime;
    public bool isPassed;
    public User(int id,string name,string pwd){
           this.Id=id;
            this.Name=name;
            this.Pwd=pwd;
            this.Score=0;
            this.GameTime=0;
            this.isPassed=false;
        }                
 };       
[System.Serializable]
public class UserList{
        public   List<User> userlist;
    };    
public class JsonManager
{
    private string jsonFilePath = Application.dataPath + "/Resources/Users.json";
    private Dictionary<string,User> dic = new Dictionary<string,User>();
    public  UserList userlist;
    public User currentUser;
    public void Init(){

        dic.Clear();
        
        TextAsset txt = Resources.Load<TextAsset>("Users");
        //if (PlayerPrefs.HasKey("Users")){
        //    userlist = JsonUtility.FromJson<UserList>(PlayerPrefs.GetString("Users"));
        //}
        //else
        //{    
        
            if (txt.text == "{}")
            {
                userlist = new UserList();
                userlist.userlist = new List<User>();
            }
            else
            {
                userlist = JsonUtility.FromJson<UserList>(txt.text);
            }
        
        
        SaveJson();
    }
  public Dictionary<string,User> LoadJson()
    {
        dic.Clear();
       string jsonStr=PlayerPrefs.GetString("Users");
        userlist= JsonUtility.FromJson<UserList>(jsonStr);
        foreach(var data in userlist.userlist){
            dic.Add(data.Name,data);
        }
        return dic;
    }
       public void SaveJson(){
        string jsonStr = JsonUtility.ToJson(userlist);
        File.WriteAllText(jsonFilePath,jsonStr);
        PlayerPrefs.SetString("Users",jsonStr);
        //UnityEditor.AssetDatabase.Refresh();//刷新unity内资源
        
    }
    
    public List<User> GetList(){
        LoadJson();
        return userlist.userlist;
    }
    public void AddUser(string userName,string password)
    {
        LoadJson();
        //添加新用户
        int userId=userlist.userlist.Count+1;
        User user=new User(userId,userName,password);
        userlist.userlist.Add(user);
       
        SaveJson();
    }
    public void UpdateUser( ){
        float gametime;
        int score;
        bool passed;
        Game.uiManager.GetUI<FightUI>("FightUI").GetUserInfo(out gametime,out score,out passed);
        currentUser.GameTime+=gametime;
        currentUser.Score+=score;
        currentUser.isPassed|=passed;
        // 不知道排序会不会影响到这个。
        userlist.userlist[currentUser.Id-1]=currentUser;
        SaveJson();
    }
}
