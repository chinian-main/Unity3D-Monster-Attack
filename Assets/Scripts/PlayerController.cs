
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;


public class PlayerController : LivingEntity
{
    // public Animator ani;
    public Rigidbody body;
    public Transform camTf;
    //public Crosshairs crosshairs;
    public Animator ani;
    public float MoveSpeed = 130f;
    //   public float RotateSpeed = 

    public float H;// ˮƽ
    public float V;
    public Vector3 dir;  //
    public Vector3 offset;
    public float Mouse_X;
    public float Mouse_Y;
    public float scroll;
    public float Angle_X;
    public float Angle_Y;

    public Quaternion camRotation;
    GunController gunController;
    public Vector3 currentPos;
    public Quaternion currentRotation;
    public int startingPP;
    public int PP{private set;get;}
    Transform EffectPos;
    protected override void Start()
    {
        base.Start();
        transform.position=new Vector3(0,0,0);
        currentPos = transform.position;
        currentRotation = transform.rotation;

        dead = ani.GetBool("IsDie");
        PP=startingPP;
        map=FindObjectOfType<MapGenerator>();
        Game.uiManager.GetUI<FightUI>("FightUI").UpdateHP(health, startingHealth);
        Game.uiManager.GetUI<FightUI>("FightUI").UPdatePP(PP, startingPP);
        EquipGunSwitch(1);
       // InvisiBle();
        Emergent();
    }
    bool isInvisit=false;
    public void InvisiBle(){     
        // Debug.Log("222");
        isInvisit=true;
        base.ExcuteInvisibleEvent();
          foreach(Renderer i in this.GetComponentsInChildren<Renderer>()){
            foreach(var j in i.sharedMaterials){
                    j.DOFade(0.5f,0.1f);
            }
        }
    }
    public void Emergent(){
      //  Debug.Log("111");
      isInvisit=false;
      base.ExcuteEmergentEvent();
        foreach(Renderer i in this.GetComponentsInChildren<Renderer>()){
            foreach(var j in i.sharedMaterials){
                    j.DOFade(1f,0.1f);
            }
        }
    }
    private void Awake()
    {
        Angle_X = transform.eulerAngles.x;
        Angle_Y = transform.eulerAngles.y;
        gunController = GetComponent<GunController>();
        // ani getcomp
        ani = transform.Find("Player_inner").GetComponent<Animator>();

        body = GetComponent<Rigidbody>();
        EffectPos=transform.Find("Effect").transform; 
        camTf = Camera.main.transform;
        FindObjectOfType<Spawner>().OnNewWave += OnNewWave;
    }
    public void EquipGunSwitch(int idx){
        gunController.EquipGun(idx-1);
    }
    void OnNewWave(int waveNumber)
    {
    }
    bool isProtectSkill=false;
    public void OpenProtectSkill(){
        if(PP-30<0)return ;
        PP-=30;
        Game.uiManager.GetUI<FightUI>("FightUI").UPdatePP(PP, startingPP);
        isProtectSkill=true;
       Destroy(Instantiate(Resources.Load("Effects/Rings"), EffectPos) as GameObject,2f);
    }
    public void CloseProtectSkill(){
        isProtectSkill=false;
    }
    public void OpenDeliverySkill(){
        if(PP-10<0)return ;
        PP-=10;
        Game.uiManager.GetUI<FightUI>("FightUI").UPdatePP(PP, startingPP);
       Transform pos= map.GetRandomOpenTile();
       transform.position=new Vector3(pos.position.x,transform.position.y,pos.position.z);
    }
    public override void TakeDamage(float damage)
    {
        if (dead == true)
        {
            return;
        }
        if(!isProtectSkill)GetHitRPC(damage);
       
    }
    public void FakeDie(){
        Die(false);       
    }

    public void AddHp(int hp){
        health+=hp;
        //特效
         Destroy(Instantiate(Resources.Load("Effects/AddHP"), EffectPos) as GameObject,2f);
        if(health>startingHealth)health=startingHealth;
        Game.uiManager.GetUI<FightUI>("FightUI").UpdateHP(health, startingHealth);
    }
      public void AddPp(int pp){
        PP+=pp;
        //特效
         Destroy(Instantiate(Resources.Load("Effects/AddPP"), EffectPos) as GameObject,2f);
        if(PP>startingPP)PP=startingPP;
        Game.uiManager.GetUI<FightUI>("FightUI").UPdatePP(PP,startingPP);
    }
    public void GetHitRPC(float damge)
    {
        health -= damge;
        //PlayerHit
         Destroy(Instantiate(Resources.Load("Effects/PlayerHit"), EffectPos) as GameObject,2f);
         AudioManager.instance.PlaySound("Impact", transform.position);
        if (health <= 0)
        {
            health = 0;
        }
   
            Game.uiManager.GetUI<FightUI>("FightUI").UpdateHP(health, startingHealth);
            if (health == 0)
            {
                AudioManager.instance.PlaySound("Player Death", transform.position);
                Game.uiManager.GetUI<FightUI>("FightUI").UpdateHP(0, startingHealth);
                GameOver();
                Die(false);
            }
        
    }
    public override void Die(bool IsDestroy)
    {
        ani.SetBool("IsDie", true);
        base.Die(false);
    }
    private void GameOver()
    {
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
        Game.uiManager.ShowUI<LossUI>("LossUI").resetCallBack += OnReset;
        Game.uiManager.GetUI<LossUI>("LossUI").quitCallBack += OnQuit;
    }

    public void OnQuit()
    {
        OnQuitRpc();
         SceneManager.LoadScene("Login");
    }

    public void OnQuitRpc()
    {
        Game.uiManager.CloseAllUI();
        Game.uiManager.ShowUI<LoginUI>("LoginUI");
    }
    public void OnReset()
    {
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
        OnResetRPC();
    }

   public void OnResetRPC()
    {
        health = startingHealth;
        dead = false;
        ani.SetBool("IsDie", dead);
        Game.uiManager.GetUI<FightUI>("FightUI").UpdateHP(health, startingHealth); 
        if (transform.position.y < -3)
        {
            
            transform.position = map.GetRandomOpenTile().transform.position+Vector3.up;
        }            
    }
    bool isAttack=true;
    public void StopAttack(){
        isAttack=false;
    }
    public void OpenAttack(){
        isAttack=true;
    }
    private void Update()
    {
     
         if (dead == true) return;
        if (Game.gameState != GameState.Pause)
        {
            UpdatePosition();
            UpdateRotation();
            UpdateLookInput();
            if(isAttack)UpdateGun();
        }
        //监听UI
        UpdateBagUI();
        UpdatePauseUI();
     
    }
    bool flag =false;
     void UpdateBagUI()
    {
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            flag = !flag;
            if (flag)
            {
                StopAttack();
                Game.uiManager.ShowUI<BagUI>("BagUI");
                FindObjectOfType<FightManager>().CursorSwitch();
            }
            else
            {
                OpenAttack();
                Game.uiManager.HideUI("BagUI");
                FindObjectOfType<FightManager>().CursorSwitch();
            }
        }
    }
    MapGenerator map;
      /// <summary>
    /// 游戏暂停
    /// </summary>
    public static bool isPause = false;
    void UpdatePauseUI()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            ////鼠标是否锁定在屏幕中间
            //Cursor.lockState = Cursor.visible ? CursorLockMode.Confined : CursorLockMode.Locked;
            Game.uiManager.HideUI("BagUI");
            isPause = !isPause;
            if (isPause)
            {
                //游戏暂停
                Time.timeScale = 0;
                //游戏状态
                Game.gameState = GameState.Pause;
                Game.uiManager.ShowUI<PauseUI>("PauseUI");
                FindObjectOfType<FightManager>().CursorSwitch();
            }
            else
            {
                //游戏继续
                Time.timeScale = 1;
                //游戏状态
                Game.gameState = GameState.Game;
                Game.uiManager.HideUI("PauseUI");
                //鼠标
                FindObjectOfType<FightManager>().CursorSwitch();
            }
        }
    }
    void UpdateLookInput()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        Plane groundPlane = new Plane(Vector3.up, Vector3.up * gunController.GunHeight);
        float rayDistance;
        if (groundPlane.Raycast(ray, out rayDistance))
        {
            Vector3 point = ray.GetPoint(rayDistance);
            LookAt(point);
            //
            //   crosshairs.transform.position = Camera.main.WorldToScreenPoint(  point);
            //   crosshairs.DetectTargets(ray);
            if ((new Vector2(point.x, point.z) - new Vector2(transform.position.x, transform.position.z)).sqrMagnitude > 1.5f)
            {
                gunController.Aim(point);
            }
        }
    }
    public void LookAt(Vector3 lookPoint)
    {
        Vector3 heightCorrectedPoint = new Vector3(lookPoint.x, transform.position.y, lookPoint.z);
        transform.LookAt(heightCorrectedPoint);
    }

    public void UpdateGun()
    {
        if (Input.GetMouseButton(0))
        {
            if(isInvisit)base.ExcuteEmergentEvent();
            gunController.OnTriggerHold();
        }
        if (Input.GetMouseButtonUp(0))
        {
            gunController.OnTriggerRelease();
        }
        if (Input.GetKeyDown(KeyCode.R))
        {
            gunController.Reload();
        }
        if (transform.position.y < -10)
        {
            TakeDamage(health);
        }
    }
    bool addSpeed;
    public void UpdatePosition()
    {
        H = Input.GetAxisRaw("Horizontal");
        V = Input.GetAxisRaw("Vertical");
        if (H != 0 || V != 0)
        {
            ani.SetBool("IsRun", true); 
             dir = camTf.forward * V + camTf.right * H;
          
            //body.MovePosition(transform.position + dir * Time.deltaTime * MoveSpeed);
            body.velocity=new Vector3(dir.x,0,dir.z) * Time.fixedDeltaTime * MoveSpeed;
           // body.mov
        }
        else ani.SetBool("IsRun", false); 

        if(Input.GetKeyDown(KeyCode.LeftShift)&&!addSpeed){MoveSpeed*=3;addSpeed=true;ani.speed*=2; } 
        if(Input.GetKeyUp(KeyCode.LeftShift)&&addSpeed){MoveSpeed/=3;addSpeed=false; ani.speed/=2; }
    }
    // -360  360  
    public float ClampAngle(float val, float min, float max)
    {
        if (val > 360)
        {
            val -= 360;
        }
        if (val < -360)
        {
            val += 360;
        }
        return Mathf.Clamp(val, min, max);
    }
    public void UpdateRotation()
    {
        Mouse_X = Input.GetAxisRaw("Mouse X");
        Mouse_Y = Input.GetAxisRaw("Mouse Y");
        scroll = Input.GetAxis("Mouse ScrollWheel");

        Angle_X = Angle_X + Mouse_Y;
        Angle_Y = Angle_Y + Mouse_X;

        Angle_X = ClampAngle(Angle_X, -60, 60);
        Angle_Y = ClampAngle(Angle_Y, -360, 360);
        camRotation = Quaternion.Euler(Angle_X, Angle_Y, 0);
        camTf.rotation = camRotation;
        offset.z += scroll;
        camTf.position = transform.position + camTf.rotation * offset;
        transform.eulerAngles = new Vector3(0, camTf.eulerAngles.y, 0);
    }
}
