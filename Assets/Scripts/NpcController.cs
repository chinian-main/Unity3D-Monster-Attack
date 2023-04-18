using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NpcController : MonoBehaviour
{
    
   private void OnTriggerEnter(Collider other) {
        if(other.tag=="Player"){
            Game.gameState = GameState.Talk;//
            Game.uiManager.HideUI("FightUI");
            
            this.GetComponentInParent<FungusManager>().PlaySay();
        }
   }
}
