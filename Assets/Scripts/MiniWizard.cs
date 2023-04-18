using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiniWizard : Enemy
{
    public Transform attackPos;

    protected override void Start() {
        base.Start();
         attackDistanceThreshold=4f;
        animator=this.GetComponent<Animator>();
        attackPos=this.transform.Find("AttackPos").transform;
    }
    private void Update() {
         if (hasTarget) {
            if (Time.time > nextAttackTime)
            {
                float sqrDstToTarget = (target.position - transform.position).sqrMagnitude;
                if (sqrDstToTarget < Mathf.Pow(attackDistanceThreshold + myCollisionRadius + targetCollisionRadius, 2))
                {
                    nextAttackTime = Time.time + timeBetweenAttacks;
                    //AudioManager.instance.PlaySound("Enemy Attack", transform.position);
                    StartCoroutine(Attack());
                }
            }
        }
        else {
            currentState=State.Idle;
        }
        switch(currentState){
            case State.Idle:animator.Play("idle");break;
            case State.Chasing:animator.Play("run");break;
        }
    }
    IEnumerator Attack(){
        currentState = State.Attacking;
        animator.Play("attack");
        pathfinder.enabled = false;
        yield return new WaitForSeconds(0.8f);
        //攻击
          transform.LookAt(target.transform);
      
            nextAttackTime=Time.time+ timeBetweenAttacks;
            GameObject preabs = Resources.Load("WizardBullet") as GameObject;
            Instantiate(preabs,attackPos.position,attackPos.rotation);
        //Debug.Log("攻击");

        yield return new WaitForSeconds(0.5f);

        //skinMaterial.color = originalColour;
         float sqrDstToTarget = (target.position - transform.position).sqrMagnitude;
         if (sqrDstToTarget > Mathf.Pow(attackDistanceThreshold + myCollisionRadius + targetCollisionRadius, 2))
         {
            currentState = State.Chasing;
          
        }else{
            transform.LookAt(target.transform.position);
        }                           
        pathfinder.enabled = true;
    }
}
