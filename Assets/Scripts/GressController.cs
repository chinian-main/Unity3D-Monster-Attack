using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class GressController : MonoBehaviour
{
    Renderer renderer;
    Material originMat;
    void Start(){
        renderer =GetComponentInChildren<Renderer>();
        originMat=renderer.material;
    }
    private void OnTriggerEnter(Collider other) {
        if(other.tag!="Player")return ;
        renderer.sharedMaterial.DOFade(0.5f,3f);
        other.gameObject.GetComponent<PlayerController>().InvisiBle();
    }
    private void OnTriggerExit(Collider other) {
         if(other.tag!="Player")return ;
        renderer.sharedMaterial.DOFade(1f,3f);
        other.gameObject.GetComponent<PlayerController>().Emergent();
    }
}
