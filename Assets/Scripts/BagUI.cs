using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BagUI : MonoBehaviour
{
    // Start is called before the first frame update
    InventoryController useItemBag;
    InventoryController WeaponItemBag;
    void Awake()
    {
       // transform.Find("BtnClose").GetComponent<Button>().onClick.AddListener(OnCloseBtn);
        useItemBag=transform.Find("BagGroup/Bag1/Inventory").GetComponent<InventoryController>();
        WeaponItemBag=transform.Find("BagGroup/Bag2/Inventory").GetComponent<InventoryController>();

    }

    void OnCloseBtn(){
        Game.uiManager.HideUI("BagUI");
        // Game.uiManager.GetUI<BagUI>().AddHPItem();
    }

    public void AddHPItem(){
        bool temp =useItemBag.transform.parent.gameObject.activeSelf;
        if(temp)
            useItemBag.AddItem("HPItem");
        else {
            useItemBag.transform.parent.gameObject.SetActive(!temp);
            useItemBag.AddItem("HPItem");
            useItemBag.transform.parent.gameObject.SetActive(temp);
        }
    }
    public void AddPPItem(){

          bool temp =useItemBag.transform.parent.gameObject.activeSelf;
        if(temp)
              useItemBag.AddItem("PPItem");
        else {
            useItemBag.transform.parent.gameObject.SetActive(!temp);
              useItemBag.AddItem("PPItem");
            useItemBag.transform.parent.gameObject.SetActive(temp);
        }
     
    }
    public void AddWeaponItem(string name)
    {
        bool temp =WeaponItemBag.transform.parent.gameObject.activeSelf;
        if(temp)
               WeaponItemBag.AddItem(name);
        else {
        WeaponItemBag.transform.parent.gameObject.SetActive(!temp);
        WeaponItemBag.AddItem(name);
        WeaponItemBag.transform.parent.gameObject.SetActive(temp);
        }
    }
}
