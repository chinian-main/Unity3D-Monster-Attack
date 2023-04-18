using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SillItem : MonoBehaviour
{
    public float coldTime = 5f;                 //技能冷却时间
    public float lastTime = 3f;
    public bool isProtect=true;
    public KeyCode keycode;                     //技能按键
    float timer = 0;                            //后台读秒时间
    Image filledImage;                          //冷却图片
    bool isStartTimer = false;                  //技能是否冷却   按钮
    // Start is called before the first frame update
    void Start()
    {
        //寻找冷却图片
        filledImage = this.transform.Find("ImageFilled").GetComponent<Image>();
        player= FindObjectOfType<PlayerController>();
        filledImage.fillAmount = 0;                                     //填充进度重置为0
    }

    // Update is called once per frame
    IEnumerator OpenSkill(){
       player.OpenProtectSkill();
        yield return new WaitForSeconds(3f);
       player.CloseProtectSkill();
    }
    void OpenDelivery(){
        player.OpenDeliverySkill();
    }
    PlayerController player;
    void Update()
    {
        //按键
        if (Input.GetKeyDown(keycode)&&!isStartTimer&& player.PP>=(isProtect?30:10))
        {
            isStartTimer = true;
            //释放技能
            if(isProtect)StartCoroutine(OpenSkill());
            else OpenDelivery();
        }
        if (isStartTimer)                                               //开始冷却
        {
            timer += Time.deltaTime;                                    //读秒时间
            filledImage.fillAmount = (coldTime - timer) / coldTime;     //冷却图片填充进度（从100->0）
            if (timer > coldTime)
            {
                filledImage.fillAmount = 0;                             //填充进度重置为0
                timer = 0;
                isStartTimer = false;                                   //停止冷却
            }
        }
    }
    public void OnClick()
    {
        isStartTimer = true;
    }
}


