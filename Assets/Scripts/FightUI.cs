using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class FightUI : MonoBehaviour
{
    int ScoreSum;
    float startTime;
    bool isPassed;
    public event Action OnPlayGame;
    private void Start()
    {
        UpdateScore(0);
        startTime = Time.time;
        //  transform.Find("play").GetComponent<Button>().onClick.AddListener(PlayGame);
    }
    public void SuccessPassed()
    {
        isPassed = true;
    }
    public void GetUserInfo(out float gametime, out int score, out bool passed)
    {
        gametime = Time.time - startTime;
        score = ScoreSum;
        passed = isPassed;
    }
    public void PlayGame()
    {
        OnPlayGame?.Invoke();
        // HidePlayeGame();
    }
    public void HidePlayeGame()
    {
        transform.Find("play").gameObject.SetActive(false);
    }

    public void ShowPlayeGame()
    {
        transform.Find("play").gameObject.SetActive(true);
    }

    public void UpdateScore(int score)
    {
        ScoreSum += score;
        transform.Find("Score").GetComponent<Text>().text = "score:" + ScoreSum.ToString();
    }
    public void UpdateBulletCount(int count)
    {
        if (count > 0)
        {
            transform.Find("bullet/Text").GetComponent<Text>().text = count.ToString();
        }
        if (count==0)
        {         
            transform.Find("bullet/Text").GetComponent<Text>().text = "<color=#FF0000>0</color>";
        }

    }
    public void UpdateHP(float cur, float max)
    {
        transform.Find("hp/fill").GetComponent<Image>().fillAmount = cur / max;
        transform.Find("hp/Text").GetComponent<Text>().text = cur + "/" + max;
    }
    public void UPdatePP(float cur, float max)
    {
        transform.Find("pp/fill").GetComponent<Image>().fillAmount = cur / max;
        transform.Find("pp/Text").GetComponent<Text>().text = cur + "/" + max;
    }
}
