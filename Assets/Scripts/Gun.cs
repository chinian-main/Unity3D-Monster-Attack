using UnityEngine;
using System.Collections;

public class Gun : MonoBehaviour
{
    public enum FireMode { Auto, Burst, Single };
    public FireMode fireMode;
    public Transform[] projectileSpawn;
    public Projectile projectile;
    public float msBetweenShots = 100;
    public float muzzleVelocity = 35;
    public int burstCount;
    public float damage=1;
    public int projectilesPerMag;
    public float reloadTime = .3f;

    [Header("Recoil")]
    public Vector2 kickMinMax = new Vector2(.05f, .2f);
    public Vector2 recoilAngleMinMax = new Vector2(3, 5);
    public float recoilMoveSettleTime = .1f;
    public float recoilRotationSettleTime = .1f;
    [Header("Effects")]
    public Transform shell;
    public Transform shellEjetion;
    public AudioClip shootAudio;
    public AudioClip reloadAudio;


    MuzzleFlash muzzleFlash;
    float nextShotTime;

    bool triggerReleaseSinceLastShot;
    int shotsRemainingInBurst;
    int projectilesRemainingInMag;
    bool isReloading;

    Vector3 recoilSmoothDampVelocity;
    float recoilRotmoothDampVelocity;
    float recoilAngle;
    private void Start()
    {

        muzzleFlash = GetComponent<MuzzleFlash>();
        shotsRemainingInBurst = burstCount;
        projectilesRemainingInMag = projectilesPerMag;
        Game.uiManager.GetUI<FightUI>("FightUI").UpdateBulletCount(projectilesRemainingInMag);
    }
    private void LateUpdate()
    {
        transform.localPosition = Vector3.SmoothDamp(transform.localPosition, Vector3.zero, ref recoilSmoothDampVelocity, recoilMoveSettleTime);
        recoilAngle = Mathf.SmoothDamp(recoilAngle, 0, ref recoilRotmoothDampVelocity, recoilRotationSettleTime);
        transform.localEulerAngles = transform.localEulerAngles + Vector3.left * recoilAngle;


    }


    void Shoot()
    {

        if (!isReloading && projectilesRemainingInMag == 0)
        {
            //Reload();
            StartCoroutine(AnimateReload(false));
            AudioManager.instance.PlaySound("Freesound", transform.position);


        }

        if (!isReloading && Time.time > nextShotTime && projectilesRemainingInMag > 0)
        {

            if (fireMode == FireMode.Burst)
            {
                if (shotsRemainingInBurst == 0) return;
                shotsRemainingInBurst--;

            }

            else if (fireMode == FireMode.Single)
            {
                if (!triggerReleaseSinceLastShot) return;

            }
            GameObject preabs = Resources.Load("Bullet") as GameObject;
            for (int i = 0; i < projectileSpawn.Length; i++)
            {
                //�ӵ�����=0
                if (projectilesRemainingInMag == 0)
                {
                    break;
                }
                projectilesRemainingInMag--;
                Game.uiManager.GetUI<FightUI>("FightUI").UpdateBulletCount(projectilesRemainingInMag);
                nextShotTime = Time.time + msBetweenShots / 1000;

                Projectile newProjectile = Instantiate(preabs, projectileSpawn[i].position, projectileSpawn[i].rotation).GetComponent<Projectile>();
                newProjectile.SetDamage(damage);
                newProjectile.SetSpeed(muzzleVelocity);
            }

            Instantiate(shell, shellEjetion.position, shellEjetion.rotation);
            muzzleFlash.Activate();

            transform.localPosition -= Vector3.forward * Random.Range(kickMinMax.x, kickMinMax.y);

            recoilAngle += Random.Range(recoilAngleMinMax.x, recoilAngleMinMax.y);
            recoilAngle = Mathf.Clamp(recoilAngle, 0, 30);

            AudioManager.instance.PlaySound(shootAudio, transform.position);
        }
    }
    public void Reload()
    {
        if (!isReloading && projectilesRemainingInMag != projectilesPerMag)
        {
            StartCoroutine(AnimateReload());
            AudioManager.instance.PlaySound(reloadAudio, transform.position);
        }

    }
    IEnumerator AnimateReload(bool flag = true)
    {
        isReloading = true;
        yield return new WaitForSeconds(.2f);
        float reloadSpeed = 1f / reloadTime;
        float percent = 0;
        float maxReloadAngle = 30;
        Vector3 initialRot = transform.localEulerAngles;
        while (percent < 1)
        {
            percent += reloadSpeed * Time.deltaTime;
            float interpolation = (-Mathf.Pow(percent, 2) + percent) * 4;
            float reloadAngle = Mathf.Lerp(0, maxReloadAngle, interpolation);
            transform.localEulerAngles = initialRot + Vector3.left * reloadAngle;

            yield return null;
        }

        isReloading = false;
        if (flag)
        {
            projectilesRemainingInMag = projectilesPerMag;
            Game.uiManager.GetUI<FightUI>("FightUI").UpdateBulletCount(projectilesRemainingInMag);
        }


    }
    public void OnTriggerHold()
    {

        Shoot();
        triggerReleaseSinceLastShot = false;

    }
    public void OnTriggerRelease()
    {
        triggerReleaseSinceLastShot = true;
        shotsRemainingInBurst = burstCount;
    }

    public void Aim(Vector3 aimPoint)
    {
        if (!isReloading)
            transform.LookAt(aimPoint);

    }


}