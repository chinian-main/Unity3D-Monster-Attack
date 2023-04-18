using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Boss :LivingEntity
{
    public enum State
    {
        Idle,
        Walk,
        Chasing,
        Attack,
        Die,
    }
   public bool hasTarget=false;
   public float attackRadius=3;
   public Transform target;  
   public Animator anim;
   LivingEntity targetEntity;
    private float backUptime;

    private const int attackDistance = 10;
   public float damage =10;
   MapGenerator map;
  
   NavMeshAgent pathfinder;
   float myCollisionRadius;
   float targetCollisionRadius;
   State currentState;
   public Transform[] attackPos;
   public GameObject preabsBullet;
   Transform effectPos;
   public string EffectName="ZiseEffect";
   private void Awake(){
      pathfinder = GetComponent<NavMeshAgent>();
      map = FindObjectOfType<MapGenerator>();
      effectPos=transform.Find("Effect").transform;
      //attackPos=transform.Find("AttackPos").GetComponent<Transform>();
      anim=GetComponentInChildren<Animator>();
      if (GameObject.FindGameObjectWithTag("Player") != null)
        {   
            hasTarget =true;
            target = GameObject.FindGameObjectWithTag("Player").transform;
            targetEntity = target.GetComponent<LivingEntity>();
            myCollisionRadius = GetComponent<CapsuleCollider>().radius;
            targetCollisionRadius = target.GetComponent<CapsuleCollider>().radius;
        }
   }
   public void SetCharacteristics(float moveSpeed ,int hitDamage,float enemyHealth , Color skinColour)
    {
        pathfinder.speed = moveSpeed;
        //damage = hitDamage;
        //startingHealth = enemyHealth;

    }
    public override void TakeDamage(float damage)
    {
        if(dead)return ;
         health -= damage;
         Destroy(Instantiate(Resources.Load("Effects/"+EffectName),effectPos),1f);
         currentState=State.Chasing;
         pathfinder.SetDestination(transform.position);
        if (health <= 0)
        {
            health = 0;
            Game.uiManager.GetUI<FightUI>("FightUI").UpdateScore(100);
            Die();
        }
    }
    public override void Die(bool IsDestroy = true)
    {
        if(dead)return ;
        dead = true;
        health = 0;
        anim.Play("die"); 
        currentState=State.Die;
        FallingItem();
        ExcuteDeathEvent();
    
        Destroy(this.gameObject,3);
    }
    void FallingItem(){
        int rand= Random.Range(1,6);
       Instantiate(Resources.Load("AddGun"+rand.ToString()),this.transform.position+Vector3.up,Quaternion.identity);
    }
    private void Start()
    {
        base.Start();
        if(hasTarget){
            currentState=State.Walk;
            targetEntity.OnDeath+=OnTargetDeath;
            targetEntity.OnInvisible+=OnPlayerInvisible;
        }
    }
       void OnPlayerInvisible(){
        currentState=State.Walk;
         hasTarget = false;
         targetEntity.OnEmergent+=OnPlayerEmergent;
    }
    void OnPlayerEmergent(){
        
            hasTarget = true;
            currentState = State.Walk;
            targetEntity.OnEmergent-=OnPlayerEmergent;
        
    }
    void OnTargetDeath(){
         currentState=State.Idle;
         hasTarget = false;
         Game.uiManager.GetUI<LossUI>("LossUI").resetCallBack += OnResetBtn;
    }
    void OnResetBtn(){
      if (GameObject.FindGameObjectWithTag("Player") != null)
        {
            hasTarget = true;
            target = GameObject.FindGameObjectWithTag("Player").transform;
            targetEntity = target.GetComponent<LivingEntity>();
        }
        if (hasTarget)
        {
            currentState = State.Walk;
            targetEntity.OnDeath += OnTargetDeath;
        }
         Game.uiManager.GetUI<LossUI>("LossUI").resetCallBack -= OnResetBtn;
    }
    float atkTime=0;
    float findTime=0;
    float findTween=0.5f;
    void findTarget()
    {
        
        if(currentState!=State.Walk)return ;
        //走路
        if(Time.time>findTime){
            findTime=Time.time+ findTween;
            anim.Play("walk");
            Transform walkTile=map.GetRandomOpenTile();
            pathfinder.SetDestination(walkTile.position);
            //Debug.Log("走路："+walkTile.position);
        }
        //找玩家
        if(!hasTarget)return ;
        Vector3 pos = target.position;
        float tempDistance =Vector3.Distance(transform.position, target.transform.position);
        pos.y = this.transform.position.y;
        float angle = Vector3.Angle(this.transform.forward, pos - this.transform.position);
        if (angle < 10&& tempDistance<13)
        {
            currentState = State.Chasing;
            pathfinder.SetDestination(transform.position);
        } 
    } 
    private void Update()
    {

        if(dead)return ;
        float tempDistance =Vector3.Distance(transform.position, target.transform.position);
        //Debug.Log(tempDistance);
        if(hasTarget){
            if (tempDistance < attackDistance)
              {
                    currentState = State.Attack;    
               }
                else {
               if(tempDistance<13&&(currentState==State.Attack||currentState==State.Chasing)){
                            currentState=State.Chasing;
                        }
                        else {
                            currentState=State.Walk;
                            }
                    }                                
        }
        else currentState=State.Walk;
        
       // Debug.Log("Boss状态："+currentState);


        switch (currentState)
        {
            case State.Idle:
                anim.Play("idle");
                break;
            case State.Walk:
                findTarget();
                break;
            case State.Chasing:
               ChasingPlayer();
                break;
            case State.Attack:
               Attack();
               break;
        }
    }
    void ChasingPlayer(){
        anim.Play("run");
        StartCoroutine(UpdatePath());
    }
    void DieAnim(){
        //死亡动画
        anim.Play("die");
    }
    float nextAttackTime;
    public float timeBetweenAttacks=0.7f;
    public void Attack(){
      //攻击
      if(!hasTarget)return ;
             anim.Play("attack");

        transform.LookAt(target.transform);
      if(Time.time>nextAttackTime){
        nextAttackTime=Time.time+ timeBetweenAttacks;
        for(int i=0;i<attackPos.Length;i++){
            BossBullet bullet= Instantiate(preabsBullet,attackPos[i].position,attackPos[i].rotation).GetComponent<BossBullet>();
            bullet.SetDamage(damage);
            bullet.SetSpeed(6);
        }

      }
      		
   }
   IEnumerator UpdatePath()
    {
        float refreshRate = .25f;

        while (hasTarget&&currentState == State.Chasing)
        {
            
                Vector3 dirToTarget = (target.position - transform.position).normalized;
                Vector3 targetPosition = target.position - dirToTarget * (myCollisionRadius + targetCollisionRadius + attackRadius / 2);
                if (!dead) pathfinder.SetDestination(targetPosition);

            yield return new WaitForSeconds(refreshRate);
        }
    }
}
