using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class Item : MonoBehaviour
{
    // Start is called before the first frame update
    public string  itemName;
    private void Start() {
        if(itemName!="G")transform.DOPunchPosition(-0.5f*Vector3.down,1.5f);
        else transform.DOPunchPosition(3f*Vector3.up,2f);
     
    }
    private void OnTriggerEnter(Collider other) {
        if(other.tag=="Player"){
            //
            switch(itemName){
                case "HP":  Game.uiManager.GetUI<BagUI>("BagUI").AddHPItem();break;
                case "PP":  Game.uiManager.GetUI<BagUI>("BagUI").AddPPItem();break;
                case "Gun1":Game.uiManager.GetUI<BagUI>("BagUI").AddWeaponItem("Gun1Item");break;
                case "Gun2":Game.uiManager.GetUI<BagUI>("BagUI").AddWeaponItem("Gun2Item");break;
                case "Gun3":Game.uiManager.GetUI<BagUI>("BagUI").AddWeaponItem("Gun3Item");break;
                case "Gun4":Game.uiManager.GetUI<BagUI>("BagUI").AddWeaponItem("Gun4Item");break;
                case "Gun5":Game.uiManager.GetUI<BagUI>("BagUI").AddWeaponItem("Gun5Item");break;
            }
           AudioManager.instance.PlaySound("Pick Up", transform.position);
            Destroy(this.gameObject);

        }
    }
    private void Update() {
        
    }
}
