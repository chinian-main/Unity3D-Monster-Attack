using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class DoorController : MonoBehaviour
{//下一关。。
    public event Action triggerNextWave;
   
    private void OnTriggerEnter(Collider other) {
       if(other.tag=="Player"){
          //  Game.uiManager.GetUI<FightUI>("FightUI").ShowPlayeGame();
            triggerNextWave?.Invoke();

        }
   }
   public void Hide(int X){
     transform.DOLocalMoveY(-5f,2);
   }
   public void Show(){
    transform.DOLocalMoveY(1.5f,4);
   }
}
