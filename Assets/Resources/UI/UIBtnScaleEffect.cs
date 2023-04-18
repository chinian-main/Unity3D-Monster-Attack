using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIBtnScaleEffect : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    [SerializeField, Header("悬停时缩小至多少？"), Range(0, 1)]
    private float _downScale = 0.85f;
    [SerializeField, Header("缩放变化持续时间：悬停过程")]
    private float _downDuration = 0.2f;
    [SerializeField, Header("缩放变化持续时间：离开过程")]
    private float _upDuration = 0.15f;
    private Text text=null;
    [SerializeField, Header("按钮文字正常颜色")]
    public Color32 normalColor;
    [SerializeField, Header("按钮文字选中颜色")]
    public Color32 highLightColor;
    public bool isEffectText = true;

    private void Start()
    {
       
    }
    private RectTransform RectTransform
    {
        get
        {
            if (_rectTransform == null)
            {
                _rectTransform = GetComponent<RectTransform>();
            }
            return _rectTransform;
        }
    }

    private RectTransform _rectTransform;
    public void OnPointerEnter(PointerEventData eventData)
    {
        //高亮颜色绿色
        //textColor.color = new Color32(0, 255, 17, 255);
        if (isEffectText)
        {
            text = this.transform.Find("Text").GetComponent<Text>();
            text.color = highLightColor;
        }

        StopAllCoroutines();
        StartCoroutine(ChangeScaleCoroutine(1, _downScale, _downDuration));
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (isEffectText)
        {
            text = this.transform.Find("Text").GetComponent<Text>();
            //正常颜色蓝色
            text.color = normalColor;
        }

        //textColor.color = new Color32(0, 131, 255, 255);
        StopAllCoroutines();
        StartCoroutine(ChangeScaleCoroutine(RectTransform.localScale.x, 1, _upDuration));
    }

    private IEnumerator ChangeScaleCoroutine(float beginScale, float endScale, float duration)
    {
        float timer = 0f;
        while (timer < duration)
        {
            RectTransform.localScale = Vector3.one * Mathf.Lerp(beginScale, endScale, timer / duration);
            timer += Time.fixedDeltaTime;
            yield return null;
        }
        RectTransform.localScale = Vector3.one * endScale;
    }

    private void OnDisable()
    {
        RectTransform.localScale = Vector3.one;
    }


}
