using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileController : MonoBehaviour
{
   Renderer renderer;
   Material originMat;
    void Start()
    {
        renderer=GetComponent<Renderer>();
        originMat=renderer.material;
    }
    public void SwitchMaterialToLava(){
        Material lava=Resources.Load<Material>("Materials/lava");
        renderer.material=lava;
        
    }
    public float Damage(){
        if(renderer.material!=originMat)return 3f;
        return 0;
    }
    float nextTime;
    float timeTween=0.5f;
    private void OnTriggerEnter(Collider other) {
        if(other.tag!="Player"||renderer.material==originMat)return ;
        other.GetComponent<PlayerController>().TakeDamage(Damage());
        other.GetComponent<Rigidbody>().AddForce(Vector3.up*150f,ForceMode.Force);
        AudioManager.instance.PlaySound("Player Death", transform.position);
        nextTime=Time.time+timeTween;
      
    }
    private void OnTriggerStay(Collider other) {
         if(other.tag!="Player"||renderer.material==originMat)return ;
        if(Time.time<nextTime)return ;
        other.GetComponent<PlayerController>().TakeDamage(Damage());
        other.GetComponent<Rigidbody>().AddForce(Vector3.up*150f,ForceMode.Force);
        AudioManager.instance.PlaySound("Player Death", transform.position);
        nextTime=Time.time+timeTween;
    }
  
}
