using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

#region 脚本信息
//背包物品信息提示
#endregion

public class ItemMessageUI : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    //信息提示面板
    private Text tip;
    private CanvasGroup canvasGroup;
    private float targetAlpha = 0;
    public float smoothing = 3; //动画速度
    private void Start()
    {
        tip = transform.Find("ItemMessageText").GetComponent<Text>();
        canvasGroup = transform.Find("ItemMessageText").GetComponent<CanvasGroup>();
    }
    private void Update()
    {
        if (canvasGroup.alpha != targetAlpha)
        {
            canvasGroup.alpha = Mathf.Lerp(canvasGroup.alpha, targetAlpha, smoothing * Time.deltaTime);
            if (Mathf.Abs(canvasGroup.alpha - targetAlpha) < 0.01f)
            {
                canvasGroup.alpha = targetAlpha;
            }
        }
    }
    public void OnPointerEnter(PointerEventData eventData)
    {
        targetAlpha = 1;
        
        //tip.SetActive(true);
        string name =transform.parent.Find("slot"). GetComponent<Image>().sprite.name; 

        if(name[0]=='P'){
            tip.text="这是一瓶可\n以恢复法力值\n的药瓶";
        }else if(name[0]=='H')tip.text="这是一瓶可\n以恢复生命\n值的药瓶";
        else if(name[3]=='1')tip.text="沙漠之鹰，\n一把各方面\n都均衡的小\n手枪";
       else if(name[3]=='2')tip.text="冲锋步枪，\n射速快，但\n伤害一般";
       else if(name[3]=='3')tip.text="突击步枪，\n可以连发，\n伤害不错";
       else if(name[3]=='4')tip.text="黄金散弹枪\n，可以连发，\n伤害非常客\n观";
       else if(name[3]=='5')tip.text="气弹枪，可\n以发射4颗\n炮弹";
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        targetAlpha = 0;
        //tip.SetActive(false);
    }
}
