using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationUI : MonoBehaviour
{
    //曲线动画
    public AnimationCurve showCurve;
    public AnimationCurve hideCurve;
    //动画速度
    public float animationSpeed;
    //面板
    public GameObject panel;
    IEnumerator ShowPanel(GameObject game0bject)
    {
        float timer = 0;
        while (timer <= 1)
        {
            //放大
            game0bject.transform.localScale = Vector3.one * showCurve.Evaluate(timer); timer += Time.deltaTime * animationSpeed;
            //暂缓一帧
            yield return null;
        }
    }
    IEnumerator HidePanel(GameObject game0bject)
    {
        //缩小
        float timer = 0;
        while (timer <= 1)
        {
            gameObject.transform.localScale = Vector3.one * hideCurve.Evaluate(timer);
            timer += Time.deltaTime * animationSpeed;
            yield return null;
        }
    }
    private void Update()
    {
        if (Input.GetMouseButton(0))
        {
            Debug.Log("0");
           StartCoroutine(ShowPanel(panel));
        }
        if (Input.GetMouseButton(1))
        {
            Debug.Log("1");
           StartCoroutine(HidePanel(panel));
        }
    }
}