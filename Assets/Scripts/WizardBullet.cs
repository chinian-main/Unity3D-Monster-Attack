using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WizardBullet : MonoBehaviour
{
    // Start is called before the first frame update
    public LayerMask collisionMask;
   private float speed =4;
   private float damage=1;
   float lifetime =20;
   float radius=0.5f;
    Transform target;
    void Start(){
        Destroy(gameObject, lifetime);
        target=FindObjectOfType<PlayerController>().transform;
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

    void Update()
    {   

        float moveDistance = speed * Time.deltaTime;
        CheckCollisions(moveDistance);
            transform.Translate(Vector3.forward * moveDistance);
        //  Vector3 dirToTarget = (target.position - transform.position).normalized;
        // transform.Translate( new Vector3(dirToTarget.x,0,dirToTarget.z)* moveDistance);
    }
    void CheckCollisions(float moveDistance)
	{
		Ray ray = new Ray(transform.position, transform.forward);
		RaycastHit hit;

		if (Physics.Raycast(ray, out hit, moveDistance + radius, collisionMask, QueryTriggerInteraction.Collide))
		{
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
