using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FightManager : MonoBehaviour
{
    MapGenerator map;
    bool flag = false;
    GameObject obj;
    Transform target;
    Transform following;
        private Vector3 pos;
    public float Hight =20;
    private void Awake()
    {
         Cursor.lockState = CursorLockMode.Locked;
         Cursor.visible = false;     
        Vector3 pos = new Vector3(0, 0, 0);
        obj = Resources.Load<GameObject>("Player");
    
        target= Instantiate(obj, pos, Quaternion.identity).transform;
        following=GameObject.Find("MapCamera").GetComponent<Transform>();

        map = FindObjectOfType<MapGenerator>();
        Game.uiManager.CloseAllUI();
        Game.uiManager.ShowUI<FightUI>("FightUI");
        Game.uiManager.ShowUI<BagUI>("BagUI");
    }
    private void Start() {
        Game.uiManager.HideUI("BagUI");
    }
    public void CursorSwitch(){
         flag = !flag;
            if (flag)
            {
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
            }
            else
            {
                Cursor.lockState = CursorLockMode.Locked;
                Cursor.visible = false;
            }
    }
       bool Paused=false;
    private void Update()
    {
       
        if (Input.GetKeyDown(KeyCode.Q))
        {
           CursorSwitch();
        }
     
      if(Input.GetKeyDown(KeyCode.Alpha9)){
            Paused=!Paused;
            Debug.Log(Paused);
        Time.timeScale=Paused?0:1;
      }
    }
    private void LateUpdate() {
        if(target!=null){
        pos.x = target.position.x;
        pos.z = target.position.z;
        pos.y = Hight;
        following.position = pos;
        }
    }
}
