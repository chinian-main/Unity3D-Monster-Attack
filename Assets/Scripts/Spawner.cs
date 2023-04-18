using System.Collections;
using UnityEngine;
using System;

public class Spawner : MonoBehaviour
{
    public Wave[] waves;

    LivingEntity playerEntity;
    Transform playerT;

    Wave currentWave;
    int currentWaveNumber;

    int SpawnCount;
    int AliveCount;
    float nextSpawnTime;

    MapGenerator map;
    float timeBetweenCampingChecks = 2;
    float campThresholdDistance = 1.5f;
    float nextCampCheckTime;
    Vector3 campPositionOld;
    bool isCamping;

    public event Action<int> OnNewWave;

    bool isDisabled;
    private void Start()
    {
        playerEntity = FindObjectOfType<PlayerController>();
        playerT = playerEntity.transform;
      
        nextCampCheckTime = timeBetweenCampingChecks + Time.time;
        campPositionOld = playerT.position;
        playerEntity.OnDeath += OnPlayerDeath;
        playerEntity.OnInvisible+=OnPlayerInvisible;
        map = FindObjectOfType<MapGenerator>();

        //开始游戏
        Game.uiManager.GetUI<FightUI>("FightUI").OnPlayGame+=SpawnBoss;
        NextWave();
    }
    void OnPlayerInvisible(){
        isDisabled=true;
        playerEntity.OnEmergent+=OnPlayeEmergent;
    }
    void OnPlayeEmergent(){
        isDisabled=false;
        playerEntity.OnEmergent-=OnPlayeEmergent;
    }
    void OnPlayerDeath()
    {
        isDisabled = true;
        Game.uiManager.GetUI<LossUI>("LossUI").resetCallBack += OnReset;
    }
    void OnReset()
    {
        isDisabled = false;
        Game.uiManager.GetUI<LossUI>("LossUI").resetCallBack -= OnReset;
    }
    private void Update()
    {
        if (!isDisabled) {

            if (Time.time > nextCampCheckTime)
            {
                nextCampCheckTime = Time.time + timeBetweenCampingChecks;
                isCamping = ( Vector3.Distance( playerT.position, campPositionOld ) < campThresholdDistance );
                
                campPositionOld = playerT.position;
            }
            if (( SpawnCount>0 || currentWave.infinite ) && Time.time > nextSpawnTime )
            {
                SpawnCount--;
                nextSpawnTime = Time.time + currentWave.timeBetweenSpawns;
                StartCoroutine("SpawnEnemy");
            }
        }
    }

    void DestroyAllEnemy(){
        StopCoroutine("spawnEnemy");
        StopCoroutine("SpawningBoss");
        foreach(Enemy it in FindObjectsOfType<Enemy>())
        {
            GameObject.Destroy(it.gameObject);
        }
         foreach(Boss it in FindObjectsOfType<Boss>())
        {
            GameObject.Destroy(it.gameObject);
        }
        //   foreach(ParticleSystem it in FindObjectsOfType<ParticleSystem>())
        // {
        //     GameObject.Destroy(it.gameObject);
        // }
          foreach(Item it in FindObjectsOfType<Item>())
        {
            GameObject.Destroy(it.gameObject);
        }
    }
    int RedBossCount=0;
    public void OnRedBossDie(){
        RedBossCount--;
    }
    IEnumerator SpawningBoss(){
        if(map.CurrentMapIndex()==2){
            yield return new WaitForSeconds(2f);
                Transform spawnTile = map.GetRandomOpenTile();
                GameObject preabs = currentWave.Boss.gameObject;
                Boss spawnedBoos =  Instantiate(preabs, spawnTile.position+Vector3.up , Quaternion.identity) .GetComponent<Boss>();
                spawnedBoos.gameObject.transform.position = spawnTile.position ;
                spawnedBoos.OnDeath += OnEnemyDeath;
                spawnedBoos.OnDeath+=  NextWaveLast;
                spawnedBoos.SetCharacteristics(currentWave.moveSpeed, currentWave.hitDamage*5, currentWave.enemyHealth*10, currentWave.skinColour);
            while(true){
                yield return new WaitForSeconds(3f);
                if(RedBossCount>1)continue;
                else {
                    RedBossCount++;
                 preabs = waves[0].Boss.gameObject;
               Boss  RedBoos =  Instantiate(preabs, spawnedBoos.transform.position+Vector3.up+Vector3.forward , Quaternion.identity) .GetComponent<Boss>();
                RedBoos.gameObject.transform.position = spawnTile.position ;
                RedBoos.OnDeath += OnEnemyDeath;
                RedBoos.OnDeath+=OnRedBossDie;
                RedBoos.SetCharacteristics(currentWave.moveSpeed, currentWave.hitDamage*3, currentWave.enemyHealth*5, currentWave.skinColour);
                }
            }
        }
        else 
        {
            for(int i=0;i<currentWave.bossCount;i++)
            {
                yield return new WaitForSeconds(2f);
                Transform spawnTile = map.GetRandomOpenTile();
                GameObject preabs = currentWave.Boss.gameObject;
                Boss spawnedBoos =  Instantiate(preabs, spawnTile.position+Vector3.up , Quaternion.identity) .GetComponent<Boss>();
                spawnedBoos.gameObject.transform.position = spawnTile.position ;
                spawnedBoos.OnDeath += OnEnemyDeath;
                spawnedBoos.SetCharacteristics(currentWave.moveSpeed, currentWave.hitDamage*3, currentWave.enemyHealth*5, currentWave.skinColour);
            }
        }
        
    }
    void SpawnBoss(){
        isDisabled = false;
        StartCoroutine(SpawningBoss());
    }
    IEnumerator SpawnEnemy()
    {
        float spawnDelay = 1;
        float tileFlashSpeed = 4;
        Transform spawnTile = map.GetRandomOpenTile();
        if (isCamping)
        {
            spawnTile = map.GetTileFromPosition(playerT.position);
        }
        Material tileMat = spawnTile.GetComponent<Renderer>().material;
        Color initialColour = tileMat.color;
        Color flashColour = Color.red;

        float spawnTimer = 0;
        while (spawnTimer < spawnDelay)
        {
            tileMat.color = Color.Lerp(initialColour, flashColour, Mathf.PingPong(spawnTimer * tileFlashSpeed, 1));
            spawnTimer += Time.deltaTime;
            yield return null;
        }
        GameObject preabs =currentWave.enemy.gameObject;
        Enemy spawnedEnemy =  Instantiate(preabs, spawnTile.position+Vector3.up , Quaternion.identity) .GetComponent<Enemy>();
        spawnedEnemy.gameObject.transform.position = spawnTile.position + Vector3.up;
        spawnedEnemy.OnDeath += OnEnemyDeath;
        spawnedEnemy.SetCharacteristics(currentWave.moveSpeed, currentWave.hitDamage, currentWave.enemyHealth, currentWave.skinColour);
    }
    void OnEnemyDeath(){
        Debug.Log(AliveCount+"--");
        AliveCount--;
        if (AliveCount == 0)//
        {
            NextWaveLast();
           //NextWave();
        } 
    }
    bool oneFlag=false;
    void NextWaveLast(){
        if(oneFlag){
            FindObjectOfType<DoorController>().Show();

        }
        else{
            Vector3 pos =new Vector3(0,-5f,0);
            GameObject obj =Resources.Load<GameObject>("door");
            GameObject temp =Instantiate(obj,pos,Quaternion.identity);
            temp.GetComponent<DoorController>().triggerNextWave+=NextWave;
               temp.GetComponent<DoorController>().triggerNextWave+= DestroyAllEnemy;
            temp.GetComponent<DoorController>().triggerNextWave+=FindObjectOfType<FungusManager>().GetComponent<FungusManager>().ShowTip;
            OnNewWave+=temp.GetComponent<DoorController>().Hide;
            temp.GetComponent<DoorController>().Show();
            oneFlag=true;
        }
        
    }
    private void ResetPlayerPosition()
    {
        Vector3 centrePosition = new Vector3(map.maps[currentWaveNumber - 1].mapCentre.x, 1f, map.maps[currentWaveNumber - 1].mapCentre.y);
        playerT.position = map.GetTileFromPosition(centrePosition+Vector3.forward).position;
        playerT.position = map.GetTileFromPosition(Vector3.zero).position + Vector3.up * 3;
    }
    void NextWave()
    {
        isDisabled=true;
        if (currentWaveNumber > 0)
        {
            AudioManager.instance.PlaySound2D("Level Completed");
        }
        currentWaveNumber++;
        if (currentWaveNumber - 1 < waves.Length)
        {
            currentWave = waves[currentWaveNumber - 1];

            SpawnCount = currentWave.enemyCount;
            AliveCount = currentWave.enemyCount;
            AliveCount+=currentWave.bossCount;
            
            if (OnNewWave != null)
            {
                OnNewWave(currentWaveNumber);
            }

            ResetPlayerPosition();
           // SpawnBoss(); //点击开始按钮才能生成
        }
    }

    [System.Serializable]
    public class Wave
    {
        public bool infinite;
        public int enemyCount;
        public Enemy enemy;
        public float timeBetweenSpawns;
        public float moveSpeed;
        public int hitDamage;
        public float enemyHealth;
        public Color skinColour;
        public LivingEntity Boss;
        public int bossCount;

    }
}
