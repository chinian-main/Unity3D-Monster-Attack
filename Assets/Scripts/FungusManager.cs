using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Fungus;
using UnityEngine.SceneManagement;

public class FungusManager : MonoBehaviour
{
    public Transform tip;
    public MapGenerator map;
    public Flowchart fungus;
    private void Start() {
        map=FindObjectOfType<MapGenerator>();
        fungus=this.GetComponent<Flowchart>();
        tip=GameObject.Find("Tip").GetComponent<Transform>();
    }
    public void ShowTip(){
         tip.DOLocalMoveY(1,2);
    }
    public void StartGame(){
        Game.gameState = GameState.Fight;//��Ϸ״̬��ս��
        Game.uiManager.ShowUI<FightUI>("FightUI").PlayGame();
        FindObjectOfType<PlayerController>().OpenAttack();
           tip.DOLocalMoveY(-2,2);
    }
    public void EndGame(){
        Game.uiManager.GetUI<FightUI>("FightUI").SuccessPassed();

         Game.jsonManager.UpdateUser();   
        Game.uiManager.CloseAllUI();
        Game.uiManager.ShowUI<LoginUI>("LoginUI");
        SceneManager.LoadScene("Login");
     

    }
    bool[] st=new bool[4];
    public void PlaySay(){
        int temp =map.CurrentMapIndex();
        if(st[temp])return ;
        FindObjectOfType<PlayerController>().StopAttack();
        st[temp]=true;
        if(temp==0)fungus.ExecuteBlock("One");
        if(temp==1)fungus.ExecuteBlock("Two");
        if(temp==2)fungus.ExecuteBlock("Three");
        if(temp==3)fungus.ExecuteBlock("Four");
    }
}
