using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossBullet : MonoBehaviour
{
   public LayerMask collisionMask;

   private float speed =4;
   private float damage=1;
   float lifetime =5;
   float radius=0.5f;
    void Start(){
        Destroy(gameObject, lifetime);
       
		Collider[] initialCollisions = Physics.OverlapSphere(transform.position, radius, collisionMask);
		if (initialCollisions.Length > 0)
		{
			OnHitObject(initialCollisions[0], transform.position);
		}
    }
   
    public void SetSpeed(float newSpeed)
    {
        speed = newSpeed;
    }   
	public void SetDamage(float newDamage){
		damage=newDamage;
	}
    void Update()
    {
        float moveDistance = speed * Time.deltaTime;
        CheckCollisions(moveDistance);
        transform.Translate(Vector3.forward * moveDistance);
    }
    void CheckCollisions(float moveDistance)
	{
		Ray ray = new Ray(transform.position, transform.forward);
		RaycastHit hit;

		if (Physics.Raycast(ray, out hit, moveDistance + radius, collisionMask, QueryTriggerInteraction.Collide))
		{
			if(hit.collider.gameObject.layer==LayerMask.GetMask("Gound")){
				Destroy(this.gameObject);
			}
			else
			OnHitObject(hit.collider, hit.point);
		}
	}
    void OnHitObject(Collider c, Vector3 hitPoint)
	{
		IDamageable damageableObject = c.GetComponent<IDamageable>();
		if (damageableObject != null)
		{
			damageableObject.TakeHit(damage, hitPoint, transform.forward);
		}
		Destroy(gameObject);
	}
}
