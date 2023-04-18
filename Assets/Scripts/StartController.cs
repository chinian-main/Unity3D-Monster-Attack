using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartController : MonoBehaviour
{
    public event Action triggerNextWave;
    private void OnTriggerEnter(Collider other) {
       if(other.tag=="Player"){
            triggerNextWave?.Invoke();
        }
   }
   public void Die(int X){
    Destroy(this.gameObject,0.01f);
   }
}
