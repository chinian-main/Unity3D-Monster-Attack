
using UnityEngine;
using System;

public class LivingEntity :  MonoBehaviour, IDamageable
{
    // Start is called before the first frame update
   
    public float health { get; protected set; }
    protected bool dead=false;
    public float startingHealth;
    public event Action OnDeath;
        public event Action OnInvisible;
        public event Action OnEmergent;
    protected virtual void Start()
    {
        health = startingHealth;
    }

    [ContextMenu("Self Destruct")]//
    public  virtual void Die(bool IsDestroy=true)
    {

       // health = 0;
        dead = true;
        if (OnDeath != null)
        {
            OnDeath();
        }
        if(IsDestroy) Destroy(gameObject);
    }
    public void ExcuteInvisibleEvent(){
        OnInvisible?.Invoke();
    }
    public void ExcuteEmergentEvent(){
        OnEmergent?.Invoke();
    }
    public void ExcuteDeathEvent(){
        
        if (OnDeath != null)
        {
            OnDeath();
        }
    }

    public virtual void TakeDamage(float damage)
    {
        health -= damage;

        if (health <= 0 && !dead)
        {
            Die();
        }
    }

    public virtual void TakeHit(float damage, Vector3 hitPoint, Vector3 hitDirection)
    {
        TakeDamage(damage);
    }
}
