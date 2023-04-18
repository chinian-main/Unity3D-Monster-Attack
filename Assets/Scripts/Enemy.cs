using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


[RequireComponent(typeof(NavMeshAgent))]
public class Enemy : LivingEntity
{
    public enum State { Idle, Chasing, Attacking };
   protected State currentState;

    public ParticleSystem deathEffect;

    public static event System.Action OnDeathStatic;
   protected  Transform target;
   protected NavMeshAgent pathfinder;
   protected LivingEntity targetEntity;
    Material skinMaterial;
    Color originalColour;

   protected  float damage = 1;
   protected  float attackDistanceThreshold = .5f;   //                               ������λ
    protected float timeBetweenAttacks = 1;

    protected float nextAttackTime;
    protected float myCollisionRadius;
    protected float targetCollisionRadius;
    protected Animator animator;
    protected bool hasTarget;
    bool isReset;

    public override void TakeHit(float damage, Vector3 hitPoint, Vector3 hitDirection)
    {
        AudioManager.instance.PlaySound("Impact",transform.position);
        if (damage >= health)
        {
            if (OnDeathStatic != null)
            {
                OnDeathStatic();
            }
            AudioManager.instance.PlaySound("Enemy Death", transform.position);
            Destroy(Instantiate(deathEffect.gameObject, hitPoint, Quaternion.FromToRotation(Vector3.forward, hitDirection)) as GameObject,2f);//Multiplier
        }
        TakeDamage(damage);
    }
    public override void TakeDamage(float damage)
    {
          health -= damage;
        if (health <= 0)
        {
            health = 0;
            Game.uiManager.GetUI<FightUI>("FightUI").UpdateScore(1);
            FallingItem();
            Die();
        }

    }
 

    private void Awake()
    {
        pathfinder = GetComponent<NavMeshAgent>();


        if (GameObject.FindGameObjectWithTag("Player") != null)
        {
            hasTarget = true;

            target = GameObject.FindGameObjectWithTag("Player").transform;
            targetEntity = target.GetComponent<LivingEntity>();

            myCollisionRadius = GetComponent<CapsuleCollider>().radius;
            targetCollisionRadius = target.GetComponent<CapsuleCollider>().radius;
        }
  
    }
 
    public void SetCharacteristics(float moveSpeed ,int hitDamage,float enemyHealth , Color skinColour  )
    {
        pathfinder.speed = moveSpeed;
        if (hasTarget)
        {
            damage = hitDamage;
        }
        startingHealth = enemyHealth;
        deathEffect.startColor = new Color(skinColour.r,skinColour.g,skinColour.b,1f);
        skinMaterial = GetComponent<Renderer>().material;
        skinMaterial.color = skinColour;
        originalColour = skinMaterial.color;
    }
    protected override void  Start()
    {
        base.Start();
        if (hasTarget){
            currentState = State.Chasing;
            targetEntity.OnDeath += OnTargetDeath;
            targetEntity.OnInvisible+=OnPlayerInvisible;
            StartCoroutine(UpdatePath());
        }
                animator=this.GetComponent<Animator>();
    }
    void OnTargetDeath()
    {
        hasTarget = false;
        currentState = State.Idle;
        Game.uiManager.GetUI<LossUI>("LossUI").resetCallBack += OnResetBtn;
    }
    void OnResetBtn()
    { 
        ResetTarget();
    }

    void OnPlayerInvisible(){
        currentState=State.Idle;
         hasTarget = false;
         targetEntity.OnEmergent+=OnPlayerEmergent;
        // pathfinder.enabled=false;
    }
    void OnPlayerEmergent(){
        
            hasTarget = true;
            currentState = State.Chasing;
           // pathfinder.enabled=true; 
            if(!dead)StartCoroutine(UpdatePath());
            targetEntity.OnEmergent-=OnPlayerEmergent;
        
    }
    void ResetTarget()
    {
        if (GameObject.FindGameObjectWithTag("Player") != null)
        {
            hasTarget = true;
            target = GameObject.FindGameObjectWithTag("Player").transform;
            targetEntity = target.GetComponent<LivingEntity>();
        }
        if (hasTarget)
        {
            currentState = State.Chasing;
            targetEntity.OnDeath += OnTargetDeath;
           if(!dead) StartCoroutine(UpdatePath());
        }
    }

    private void Update()
    {
        if (hasTarget) {
            if (Time.time > nextAttackTime)
            {
                float sqrDstToTarget = (target.position - transform.position).sqrMagnitude;
                if (sqrDstToTarget < Mathf.Pow(attackDistanceThreshold + myCollisionRadius + targetCollisionRadius, 2))
                {
                    nextAttackTime = Time.time + timeBetweenAttacks;
                    AudioManager.instance.PlaySound("Enemy Attack", transform.position);
                    StartCoroutine(Attack());
                }
            }
        }
             switch(currentState){
            case State.Idle:animator.Play("idle");break;
            case State.Chasing:animator.Play("run");break;
        }
       
    }
    // Update is called once per frame
    IEnumerator Attack()
    {
        currentState = State.Attacking;
        pathfinder.enabled = false;
        animator.Play("attack");
        Vector3 originalPositon = transform.position;
        Vector3 dirToTarget = (target.position - transform.position).normalized;
        Vector3 attackPosition = target.position - dirToTarget * (myCollisionRadius);//

        float attackSpeed = 3;
        float percent = 0;

        skinMaterial.color = Color.red;
        bool hasAppliedDamage = false;
        while (percent <=1)
        {
            if (percent >= .5f && !hasAppliedDamage)
            {
                hasAppliedDamage = true;
                targetEntity.GetComponent<Rigidbody>().AddForce((this.transform.position-target.position)*-200f);
                targetEntity.TakeDamage(damage);
            }
            percent += Time.deltaTime* attackSpeed;
            float interpolation = (-Mathf.Pow(percent, 2) + percent) * 4;
            transform.position = Vector3.Lerp(originalPositon, attackPosition, interpolation);

            yield return null;
        }
        skinMaterial.color = originalColour;

        currentState = State.Chasing;
        pathfinder.enabled = true;


    }

    IEnumerator UpdatePath()
    {
        float refreshRate = .25f;
        while (hasTarget)
        {
            if (currentState == State.Chasing) {
                Vector3 dirToTarget = (target.position - transform.position).normalized;
                Vector3 targetPosition = target.position - dirToTarget * (myCollisionRadius + targetCollisionRadius + attackDistanceThreshold / 2);

                if (!dead&&pathfinder.enabled) pathfinder.SetDestination(targetPosition);
            }
      
            yield return new WaitForSeconds(refreshRate);
        }
    }
    void FallingItem(){
        int rand= Random.Range(0,2);
        if(rand==0)Instantiate(Resources.Load("AddHP"),this.transform.position+Vector3.up,Quaternion.identity);
        else Instantiate(Resources.Load("AddPP"),this.transform.position+Vector3.up,Quaternion.identity);
    }
}
