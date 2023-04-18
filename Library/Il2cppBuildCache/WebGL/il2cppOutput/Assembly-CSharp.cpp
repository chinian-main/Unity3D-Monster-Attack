#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Collections.Generic.IEnumerable`1<MapGenerator/Coord>
struct IEnumerable_1_t7B094542AD19F3151B6DA5D6616663C8CDD8C7CE;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<MapGenerator/Coord>
struct List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC;
// System.Collections.Generic.Queue`1<MapGenerator/Coord>
struct Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// Gun[]
struct GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// MapGenerator/Coord[]
struct CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584;
// MapGenerator/Map[]
struct MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744;
// Spawner/Wave[]
struct WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120;
// System.Boolean[0...,0...]
struct BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4;
// UnityEngine.Transform[0...,0...]
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Crosshairs
struct Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameUI
struct GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF;
// Gun
struct Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C;
// GunController
struct GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// IDamageable
struct IDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LivingEntity
struct LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66;
// MapGenerator
struct MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MuzzleFlash
struct MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Shell
struct Shell_tBB91054C9493DE994824A479BF37CAF307029629;
// Spawner
struct Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// Utility
struct Utility_t01179311E92FA84213BB8ED036BE87C91851ACCE;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Enemy/<Attack>d__21
struct U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025;
// Enemy/<UpdatePath>d__22
struct U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E;
// GameUI/<AnimateNewWaveBanner>d__8
struct U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3;
// GameUI/<Fade>d__11
struct U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6;
// Gun/<AnimateReload>d__28
struct U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D;
// MapGenerator/Map
struct Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// Shell/<Fade>d__6
struct U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1;
// Spawner/<SpawnEnemy>d__23
struct U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4;
// Spawner/Wave
struct Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral22E884DFBA63AABDD517EEF233A9BBB88E5427F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral4E95CBE0DF6BC8C85E9DEF17DB8CFF854861CAEB;
IL2CPP_EXTERN_C String_t* _stringLiteral5D47CB1F151C1F15C93693525397036478D69EC1;
IL2CPP_EXTERN_C String_t* _stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673;
IL2CPP_EXTERN_C String_t* _stringLiteral725D5C07A55A26A7CAA126742EB48326B8FB30A7;
IL2CPP_EXTERN_C String_t* _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral93959F7E2EBF7DE9EE8EBDEFBC42CA5CCC0C18EE;
IL2CPP_EXTERN_C String_t* _stringLiteral94F6AE308541ADA690833204EE6F56F88581DD15;
IL2CPP_EXTERN_C String_t* _stringLiteralC36439DD386C8E43E56442B1F20A32122A311A31;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD32BB518070BFAB836D87E2CD15A4A9851EEA472;
IL2CPP_EXTERN_C String_t* _stringLiteralD36070345E1BBE825940C76A43B5AD5F33F3FC62;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC628212BD80D34BFD277B0B6DB3976FA45F497A;
IL2CPP_EXTERN_C String_t* _stringLiteralDCE7C0A1AC714A9BFAB4654B551DE9898E58182B;
IL2CPP_EXTERN_C String_t* _stringLiteralFAF3A19F572FBE73CBA5AEFA111615C03BE560A3;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81_m5B89132790F23A87059325654CB6F4186502E9D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_m2438F0F607566C20DFD97B6E1DBAF0376A2DBC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66_m4609E8D141F1C0048811A088398539AB378259ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498_mF73C1EC9F143BEF52A848346AD8466ED7ADF015B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m3BF8F0D99AB14A2C6D2C3DCC33AC2AFAC49B29D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enemy_OnTargetDeath_m37657266571AE56E3B74E02C1702324785D2BFDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUI_OnGameOver_m6688D0FC79C8DEBA072E964163DDCFC7CCF18193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameUI_OnNewWave_mE2137A0F0635C77DA267FA1878F19FE7464A44A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapGenerator_OnNewWave_mFB0BFE0B318B22A3CCB0B24522EFAA6C3F1FE0FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C_mCBCBC266E9569BA1EB51AC89A17F24A9361F48D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mF69210EDB2FD882E3C1595F85212BE3E09EF549B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGun_tDD43AC55F07276B834B8A3A792545BD8A456066C_m4E93DC6D955D674D937C3AE0FA384A1176285BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_m4FB7934BC3821DBC3CD8E6804CDB54B86CF9F925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player_OnNewWave_m950250E871D4D369787B52B5947E8AA1D7B8087C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_OnEnemyDeath_m8F2FC6BCFF80B80A3C7A2275ADB74A66E0691481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_OnPlayerDeath_m4FC658E89317C5929B019CA3E613D69EA554938D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateNewWaveBannerU3Ed__8_System_Collections_IEnumerator_Reset_m4A9C603041FF5D0B4A7DB14780BBF8A9EDEE35F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateReloadU3Ed__28_System_Collections_IEnumerator_Reset_mC6170F5468B8FC9DB333CC64A90E2C41CFBC7CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__21_System_Collections_IEnumerator_Reset_m94963641AE06AE8C6AB3F9134841C8B0E0F758E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__11_System_Collections_IEnumerator_Reset_mA73BAD85B51FA5716E48B1A359FE6234820CB93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__6_System_Collections_IEnumerator_Reset_m041449E882012A18FDF20DC8B252805AFC623CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemyU3Ed__23_System_Collections_IEnumerator_Reset_m7C4AC3D9398DF1FB28EB9275A24B0C243FE20848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePathU3Ed__22_System_Collections_IEnumerator_Reset_mB3024392326341D511F67ABCABE72427E1E33C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
struct GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584;
struct MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744;
struct WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120;
struct BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4;
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<MapGenerator/Coord>
struct List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC, ____items_1)); }
	inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* get__items_1() const { return ____items_1; }
	inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC_StaticFields, ____emptyArray_5)); }
	inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<MapGenerator/Coord>
struct Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16, ____array_0)); }
	inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* get__array_0() const { return ____array_0; }
	inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Utility
struct Utility_t01179311E92FA84213BB8ED036BE87C91851ACCE  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Enemy/<UpdatePath>d__22
struct U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<UpdatePath>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<UpdatePath>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<UpdatePath>d__22::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;
	// System.Single Enemy/<UpdatePath>d__22::<refreshRate>5__2
	float ___U3CrefreshRateU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrefreshRateU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E, ___U3CrefreshRateU3E5__2_3)); }
	inline float get_U3CrefreshRateU3E5__2_3() const { return ___U3CrefreshRateU3E5__2_3; }
	inline float* get_address_of_U3CrefreshRateU3E5__2_3() { return &___U3CrefreshRateU3E5__2_3; }
	inline void set_U3CrefreshRateU3E5__2_3(float value)
	{
		___U3CrefreshRateU3E5__2_3 = value;
	}
};


// GameUI/<AnimateNewWaveBanner>d__8
struct U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3  : public RuntimeObject
{
public:
	// System.Int32 GameUI/<AnimateNewWaveBanner>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameUI/<AnimateNewWaveBanner>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameUI GameUI/<AnimateNewWaveBanner>d__8::<>4__this
	GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * ___U3CU3E4__this_2;
	// System.Single GameUI/<AnimateNewWaveBanner>d__8::<speed>5__2
	float ___U3CspeedU3E5__2_3;
	// System.Single GameUI/<AnimateNewWaveBanner>d__8::<animatePercent>5__3
	float ___U3CanimatePercentU3E5__3_4;
	// System.Int32 GameUI/<AnimateNewWaveBanner>d__8::<dir>5__4
	int32_t ___U3CdirU3E5__4_5;
	// System.Single GameUI/<AnimateNewWaveBanner>d__8::<endDelayTime>5__5
	float ___U3CendDelayTimeU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CU3E4__this_2)); }
	inline GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CspeedU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CspeedU3E5__2_3)); }
	inline float get_U3CspeedU3E5__2_3() const { return ___U3CspeedU3E5__2_3; }
	inline float* get_address_of_U3CspeedU3E5__2_3() { return &___U3CspeedU3E5__2_3; }
	inline void set_U3CspeedU3E5__2_3(float value)
	{
		___U3CspeedU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CanimatePercentU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CanimatePercentU3E5__3_4)); }
	inline float get_U3CanimatePercentU3E5__3_4() const { return ___U3CanimatePercentU3E5__3_4; }
	inline float* get_address_of_U3CanimatePercentU3E5__3_4() { return &___U3CanimatePercentU3E5__3_4; }
	inline void set_U3CanimatePercentU3E5__3_4(float value)
	{
		___U3CanimatePercentU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CdirU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CdirU3E5__4_5)); }
	inline int32_t get_U3CdirU3E5__4_5() const { return ___U3CdirU3E5__4_5; }
	inline int32_t* get_address_of_U3CdirU3E5__4_5() { return &___U3CdirU3E5__4_5; }
	inline void set_U3CdirU3E5__4_5(int32_t value)
	{
		___U3CdirU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CendDelayTimeU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3, ___U3CendDelayTimeU3E5__5_6)); }
	inline float get_U3CendDelayTimeU3E5__5_6() const { return ___U3CendDelayTimeU3E5__5_6; }
	inline float* get_address_of_U3CendDelayTimeU3E5__5_6() { return &___U3CendDelayTimeU3E5__5_6; }
	inline void set_U3CendDelayTimeU3E5__5_6(float value)
	{
		___U3CendDelayTimeU3E5__5_6 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// MapGenerator/Coord
struct Coord_tFC7948A515859998E0BB210D9F19E635E768E711 
{
public:
	// System.Int32 MapGenerator/Coord::x
	int32_t ___x_0;
	// System.Int32 MapGenerator/Coord::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Coord_tFC7948A515859998E0BB210D9F19E635E768E711, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Coord_tFC7948A515859998E0BB210D9F19E635E768E711, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Enemy/<Attack>d__21
struct U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Attack>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Attack>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<Attack>d__21::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Enemy/<Attack>d__21::<originalPositon>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginalPositonU3E5__2_3;
	// UnityEngine.Vector3 Enemy/<Attack>d__21::<attackPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CattackPositionU3E5__3_4;
	// System.Single Enemy/<Attack>d__21::<attackSpeed>5__4
	float ___U3CattackSpeedU3E5__4_5;
	// System.Single Enemy/<Attack>d__21::<percent>5__5
	float ___U3CpercentU3E5__5_6;
	// System.Boolean Enemy/<Attack>d__21::<hasAppliedDamage>5__6
	bool ___U3ChasAppliedDamageU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalPositonU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CoriginalPositonU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginalPositonU3E5__2_3() const { return ___U3CoriginalPositonU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginalPositonU3E5__2_3() { return &___U3CoriginalPositonU3E5__2_3; }
	inline void set_U3CoriginalPositonU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginalPositonU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CattackPositionU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CattackPositionU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CattackPositionU3E5__3_4() const { return ___U3CattackPositionU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CattackPositionU3E5__3_4() { return &___U3CattackPositionU3E5__3_4; }
	inline void set_U3CattackPositionU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CattackPositionU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CattackSpeedU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CattackSpeedU3E5__4_5)); }
	inline float get_U3CattackSpeedU3E5__4_5() const { return ___U3CattackSpeedU3E5__4_5; }
	inline float* get_address_of_U3CattackSpeedU3E5__4_5() { return &___U3CattackSpeedU3E5__4_5; }
	inline void set_U3CattackSpeedU3E5__4_5(float value)
	{
		___U3CattackSpeedU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CpercentU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3CpercentU3E5__5_6)); }
	inline float get_U3CpercentU3E5__5_6() const { return ___U3CpercentU3E5__5_6; }
	inline float* get_address_of_U3CpercentU3E5__5_6() { return &___U3CpercentU3E5__5_6; }
	inline void set_U3CpercentU3E5__5_6(float value)
	{
		___U3CpercentU3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3ChasAppliedDamageU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025, ___U3ChasAppliedDamageU3E5__6_7)); }
	inline bool get_U3ChasAppliedDamageU3E5__6_7() const { return ___U3ChasAppliedDamageU3E5__6_7; }
	inline bool* get_address_of_U3ChasAppliedDamageU3E5__6_7() { return &___U3ChasAppliedDamageU3E5__6_7; }
	inline void set_U3ChasAppliedDamageU3E5__6_7(bool value)
	{
		___U3ChasAppliedDamageU3E5__6_7 = value;
	}
};


// Enemy/State
struct State_tB16D1A1DE3105352C639AC0A0A67ECC1AF43195E 
{
public:
	// System.Int32 Enemy/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tB16D1A1DE3105352C639AC0A0A67ECC1AF43195E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameUI/<Fade>d__11
struct U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6  : public RuntimeObject
{
public:
	// System.Int32 GameUI/<Fade>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameUI/<Fade>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single GameUI/<Fade>d__11::time
	float ___time_2;
	// GameUI GameUI/<Fade>d__11::<>4__this
	GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * ___U3CU3E4__this_3;
	// UnityEngine.Color GameUI/<Fade>d__11::from
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___from_4;
	// UnityEngine.Color GameUI/<Fade>d__11::to
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to_5;
	// System.Single GameUI/<Fade>d__11::<speed>5__2
	float ___U3CspeedU3E5__2_6;
	// System.Single GameUI/<Fade>d__11::<percent>5__3
	float ___U3CpercentU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___U3CU3E4__this_3)); }
	inline GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_from_4() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___from_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_from_4() const { return ___from_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_from_4() { return &___from_4; }
	inline void set_from_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___from_4 = value;
	}

	inline static int32_t get_offset_of_to_5() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___to_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_to_5() const { return ___to_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_to_5() { return &___to_5; }
	inline void set_to_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___to_5 = value;
	}

	inline static int32_t get_offset_of_U3CspeedU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___U3CspeedU3E5__2_6)); }
	inline float get_U3CspeedU3E5__2_6() const { return ___U3CspeedU3E5__2_6; }
	inline float* get_address_of_U3CspeedU3E5__2_6() { return &___U3CspeedU3E5__2_6; }
	inline void set_U3CspeedU3E5__2_6(float value)
	{
		___U3CspeedU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CpercentU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6, ___U3CpercentU3E5__3_7)); }
	inline float get_U3CpercentU3E5__3_7() const { return ___U3CpercentU3E5__3_7; }
	inline float* get_address_of_U3CpercentU3E5__3_7() { return &___U3CpercentU3E5__3_7; }
	inline void set_U3CpercentU3E5__3_7(float value)
	{
		___U3CpercentU3E5__3_7 = value;
	}
};


// Gun/<AnimateReload>d__28
struct U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D  : public RuntimeObject
{
public:
	// System.Int32 Gun/<AnimateReload>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gun/<AnimateReload>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gun Gun/<AnimateReload>d__28::<>4__this
	Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * ___U3CU3E4__this_2;
	// System.Single Gun/<AnimateReload>d__28::<reloadSpeed>5__2
	float ___U3CreloadSpeedU3E5__2_3;
	// System.Single Gun/<AnimateReload>d__28::<percent>5__3
	float ___U3CpercentU3E5__3_4;
	// System.Single Gun/<AnimateReload>d__28::<maxReloadAngle>5__4
	float ___U3CmaxReloadAngleU3E5__4_5;
	// UnityEngine.Vector3 Gun/<AnimateReload>d__28::<initialRot>5__5
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CinitialRotU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CU3E4__this_2)); }
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreloadSpeedU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CreloadSpeedU3E5__2_3)); }
	inline float get_U3CreloadSpeedU3E5__2_3() const { return ___U3CreloadSpeedU3E5__2_3; }
	inline float* get_address_of_U3CreloadSpeedU3E5__2_3() { return &___U3CreloadSpeedU3E5__2_3; }
	inline void set_U3CreloadSpeedU3E5__2_3(float value)
	{
		___U3CreloadSpeedU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CpercentU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CpercentU3E5__3_4)); }
	inline float get_U3CpercentU3E5__3_4() const { return ___U3CpercentU3E5__3_4; }
	inline float* get_address_of_U3CpercentU3E5__3_4() { return &___U3CpercentU3E5__3_4; }
	inline void set_U3CpercentU3E5__3_4(float value)
	{
		___U3CpercentU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CmaxReloadAngleU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CmaxReloadAngleU3E5__4_5)); }
	inline float get_U3CmaxReloadAngleU3E5__4_5() const { return ___U3CmaxReloadAngleU3E5__4_5; }
	inline float* get_address_of_U3CmaxReloadAngleU3E5__4_5() { return &___U3CmaxReloadAngleU3E5__4_5; }
	inline void set_U3CmaxReloadAngleU3E5__4_5(float value)
	{
		___U3CmaxReloadAngleU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CinitialRotU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D, ___U3CinitialRotU3E5__5_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CinitialRotU3E5__5_6() const { return ___U3CinitialRotU3E5__5_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CinitialRotU3E5__5_6() { return &___U3CinitialRotU3E5__5_6; }
	inline void set_U3CinitialRotU3E5__5_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CinitialRotU3E5__5_6 = value;
	}
};


// Gun/FireMode
struct FireMode_t6B6EED9DCC8C983D66D3DD236C335B39ADF47550 
{
public:
	// System.Int32 Gun/FireMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FireMode_t6B6EED9DCC8C983D66D3DD236C335B39ADF47550, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MapGenerator/Map
struct Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0  : public RuntimeObject
{
public:
	// MapGenerator/Coord MapGenerator/Map::mapSize
	Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___mapSize_0;
	// System.Single MapGenerator/Map::obstaclePercent
	float ___obstaclePercent_1;
	// System.Int32 MapGenerator/Map::seed
	int32_t ___seed_2;
	// System.Single MapGenerator/Map::minObstacleHeight
	float ___minObstacleHeight_3;
	// System.Single MapGenerator/Map::maxObstacleHeight
	float ___maxObstacleHeight_4;
	// UnityEngine.Color MapGenerator/Map::foregroundColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___foregroundColour_5;
	// UnityEngine.Color MapGenerator/Map::backgroundColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColour_6;

public:
	inline static int32_t get_offset_of_mapSize_0() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___mapSize_0)); }
	inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711  get_mapSize_0() const { return ___mapSize_0; }
	inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * get_address_of_mapSize_0() { return &___mapSize_0; }
	inline void set_mapSize_0(Coord_tFC7948A515859998E0BB210D9F19E635E768E711  value)
	{
		___mapSize_0 = value;
	}

	inline static int32_t get_offset_of_obstaclePercent_1() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___obstaclePercent_1)); }
	inline float get_obstaclePercent_1() const { return ___obstaclePercent_1; }
	inline float* get_address_of_obstaclePercent_1() { return &___obstaclePercent_1; }
	inline void set_obstaclePercent_1(float value)
	{
		___obstaclePercent_1 = value;
	}

	inline static int32_t get_offset_of_seed_2() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___seed_2)); }
	inline int32_t get_seed_2() const { return ___seed_2; }
	inline int32_t* get_address_of_seed_2() { return &___seed_2; }
	inline void set_seed_2(int32_t value)
	{
		___seed_2 = value;
	}

	inline static int32_t get_offset_of_minObstacleHeight_3() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___minObstacleHeight_3)); }
	inline float get_minObstacleHeight_3() const { return ___minObstacleHeight_3; }
	inline float* get_address_of_minObstacleHeight_3() { return &___minObstacleHeight_3; }
	inline void set_minObstacleHeight_3(float value)
	{
		___minObstacleHeight_3 = value;
	}

	inline static int32_t get_offset_of_maxObstacleHeight_4() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___maxObstacleHeight_4)); }
	inline float get_maxObstacleHeight_4() const { return ___maxObstacleHeight_4; }
	inline float* get_address_of_maxObstacleHeight_4() { return &___maxObstacleHeight_4; }
	inline void set_maxObstacleHeight_4(float value)
	{
		___maxObstacleHeight_4 = value;
	}

	inline static int32_t get_offset_of_foregroundColour_5() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___foregroundColour_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_foregroundColour_5() const { return ___foregroundColour_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_foregroundColour_5() { return &___foregroundColour_5; }
	inline void set_foregroundColour_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___foregroundColour_5 = value;
	}

	inline static int32_t get_offset_of_backgroundColour_6() { return static_cast<int32_t>(offsetof(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0, ___backgroundColour_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColour_6() const { return ___backgroundColour_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColour_6() { return &___backgroundColour_6; }
	inline void set_backgroundColour_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColour_6 = value;
	}
};


// Shell/<Fade>d__6
struct U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1  : public RuntimeObject
{
public:
	// System.Int32 Shell/<Fade>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Shell/<Fade>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Shell Shell/<Fade>d__6::<>4__this
	Shell_tBB91054C9493DE994824A479BF37CAF307029629 * ___U3CU3E4__this_2;
	// System.Single Shell/<Fade>d__6::<percent>5__2
	float ___U3CpercentU3E5__2_3;
	// System.Single Shell/<Fade>d__6::<fadeSpeed>5__3
	float ___U3CfadeSpeedU3E5__3_4;
	// UnityEngine.Material Shell/<Fade>d__6::<mat>5__4
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CmatU3E5__4_5;
	// UnityEngine.Color Shell/<Fade>d__6::<initialColour>5__5
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CinitialColourU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CU3E4__this_2)); }
	inline Shell_tBB91054C9493DE994824A479BF37CAF307029629 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Shell_tBB91054C9493DE994824A479BF37CAF307029629 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Shell_tBB91054C9493DE994824A479BF37CAF307029629 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpercentU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CpercentU3E5__2_3)); }
	inline float get_U3CpercentU3E5__2_3() const { return ___U3CpercentU3E5__2_3; }
	inline float* get_address_of_U3CpercentU3E5__2_3() { return &___U3CpercentU3E5__2_3; }
	inline void set_U3CpercentU3E5__2_3(float value)
	{
		___U3CpercentU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CfadeSpeedU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CfadeSpeedU3E5__3_4)); }
	inline float get_U3CfadeSpeedU3E5__3_4() const { return ___U3CfadeSpeedU3E5__3_4; }
	inline float* get_address_of_U3CfadeSpeedU3E5__3_4() { return &___U3CfadeSpeedU3E5__3_4; }
	inline void set_U3CfadeSpeedU3E5__3_4(float value)
	{
		___U3CfadeSpeedU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CmatU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CmatU3E5__4_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CmatU3E5__4_5() const { return ___U3CmatU3E5__4_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CmatU3E5__4_5() { return &___U3CmatU3E5__4_5; }
	inline void set_U3CmatU3E5__4_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CmatU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmatU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitialColourU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1, ___U3CinitialColourU3E5__5_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CinitialColourU3E5__5_6() const { return ___U3CinitialColourU3E5__5_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CinitialColourU3E5__5_6() { return &___U3CinitialColourU3E5__5_6; }
	inline void set_U3CinitialColourU3E5__5_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CinitialColourU3E5__5_6 = value;
	}
};


// Spawner/<SpawnEnemy>d__23
struct U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4  : public RuntimeObject
{
public:
	// System.Int32 Spawner/<SpawnEnemy>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spawner/<SpawnEnemy>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Spawner Spawner/<SpawnEnemy>d__23::<>4__this
	Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * ___U3CU3E4__this_2;
	// System.Single Spawner/<SpawnEnemy>d__23::<spawnDelay>5__2
	float ___U3CspawnDelayU3E5__2_3;
	// System.Single Spawner/<SpawnEnemy>d__23::<tileFlashSpeed>5__3
	float ___U3CtileFlashSpeedU3E5__3_4;
	// UnityEngine.Transform Spawner/<SpawnEnemy>d__23::<spawnTile>5__4
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CspawnTileU3E5__4_5;
	// UnityEngine.Material Spawner/<SpawnEnemy>d__23::<tileMat>5__5
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CtileMatU3E5__5_6;
	// UnityEngine.Color Spawner/<SpawnEnemy>d__23::<initialColour>5__6
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CinitialColourU3E5__6_7;
	// UnityEngine.Color Spawner/<SpawnEnemy>d__23::<flashColour>5__7
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CflashColourU3E5__7_8;
	// System.Single Spawner/<SpawnEnemy>d__23::<spawnTimer>5__8
	float ___U3CspawnTimerU3E5__8_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CU3E4__this_2)); }
	inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CspawnDelayU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CspawnDelayU3E5__2_3)); }
	inline float get_U3CspawnDelayU3E5__2_3() const { return ___U3CspawnDelayU3E5__2_3; }
	inline float* get_address_of_U3CspawnDelayU3E5__2_3() { return &___U3CspawnDelayU3E5__2_3; }
	inline void set_U3CspawnDelayU3E5__2_3(float value)
	{
		___U3CspawnDelayU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtileFlashSpeedU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CtileFlashSpeedU3E5__3_4)); }
	inline float get_U3CtileFlashSpeedU3E5__3_4() const { return ___U3CtileFlashSpeedU3E5__3_4; }
	inline float* get_address_of_U3CtileFlashSpeedU3E5__3_4() { return &___U3CtileFlashSpeedU3E5__3_4; }
	inline void set_U3CtileFlashSpeedU3E5__3_4(float value)
	{
		___U3CtileFlashSpeedU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CspawnTileU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CspawnTileU3E5__4_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CspawnTileU3E5__4_5() const { return ___U3CspawnTileU3E5__4_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CspawnTileU3E5__4_5() { return &___U3CspawnTileU3E5__4_5; }
	inline void set_U3CspawnTileU3E5__4_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CspawnTileU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CspawnTileU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtileMatU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CtileMatU3E5__5_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CtileMatU3E5__5_6() const { return ___U3CtileMatU3E5__5_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CtileMatU3E5__5_6() { return &___U3CtileMatU3E5__5_6; }
	inline void set_U3CtileMatU3E5__5_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CtileMatU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtileMatU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitialColourU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CinitialColourU3E5__6_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CinitialColourU3E5__6_7() const { return ___U3CinitialColourU3E5__6_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CinitialColourU3E5__6_7() { return &___U3CinitialColourU3E5__6_7; }
	inline void set_U3CinitialColourU3E5__6_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CinitialColourU3E5__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CflashColourU3E5__7_8() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CflashColourU3E5__7_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CflashColourU3E5__7_8() const { return ___U3CflashColourU3E5__7_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CflashColourU3E5__7_8() { return &___U3CflashColourU3E5__7_8; }
	inline void set_U3CflashColourU3E5__7_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CflashColourU3E5__7_8 = value;
	}

	inline static int32_t get_offset_of_U3CspawnTimerU3E5__8_9() { return static_cast<int32_t>(offsetof(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4, ___U3CspawnTimerU3E5__8_9)); }
	inline float get_U3CspawnTimerU3E5__8_9() const { return ___U3CspawnTimerU3E5__8_9; }
	inline float* get_address_of_U3CspawnTimerU3E5__8_9() { return &___U3CspawnTimerU3E5__8_9; }
	inline void set_U3CspawnTimerU3E5__8_9(float value)
	{
		___U3CspawnTimerU3E5__8_9 = value;
	}
};


// Spawner/Wave
struct Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924  : public RuntimeObject
{
public:
	// System.Boolean Spawner/Wave::infinite
	bool ___infinite_0;
	// System.Int32 Spawner/Wave::enemyCount
	int32_t ___enemyCount_1;
	// System.Single Spawner/Wave::timeBetweenSpawns
	float ___timeBetweenSpawns_2;
	// System.Single Spawner/Wave::moveSpeed
	float ___moveSpeed_3;
	// System.Int32 Spawner/Wave::hitsToKillPlayer
	int32_t ___hitsToKillPlayer_4;
	// System.Single Spawner/Wave::enemyHealth
	float ___enemyHealth_5;
	// UnityEngine.Color Spawner/Wave::skinColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___skinColour_6;

public:
	inline static int32_t get_offset_of_infinite_0() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___infinite_0)); }
	inline bool get_infinite_0() const { return ___infinite_0; }
	inline bool* get_address_of_infinite_0() { return &___infinite_0; }
	inline void set_infinite_0(bool value)
	{
		___infinite_0 = value;
	}

	inline static int32_t get_offset_of_enemyCount_1() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___enemyCount_1)); }
	inline int32_t get_enemyCount_1() const { return ___enemyCount_1; }
	inline int32_t* get_address_of_enemyCount_1() { return &___enemyCount_1; }
	inline void set_enemyCount_1(int32_t value)
	{
		___enemyCount_1 = value;
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_2() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___timeBetweenSpawns_2)); }
	inline float get_timeBetweenSpawns_2() const { return ___timeBetweenSpawns_2; }
	inline float* get_address_of_timeBetweenSpawns_2() { return &___timeBetweenSpawns_2; }
	inline void set_timeBetweenSpawns_2(float value)
	{
		___timeBetweenSpawns_2 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_hitsToKillPlayer_4() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___hitsToKillPlayer_4)); }
	inline int32_t get_hitsToKillPlayer_4() const { return ___hitsToKillPlayer_4; }
	inline int32_t* get_address_of_hitsToKillPlayer_4() { return &___hitsToKillPlayer_4; }
	inline void set_hitsToKillPlayer_4(int32_t value)
	{
		___hitsToKillPlayer_4 = value;
	}

	inline static int32_t get_offset_of_enemyHealth_5() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___enemyHealth_5)); }
	inline float get_enemyHealth_5() const { return ___enemyHealth_5; }
	inline float* get_address_of_enemyHealth_5() { return &___enemyHealth_5; }
	inline void set_enemyHealth_5(float value)
	{
		___enemyHealth_5 = value;
	}

	inline static int32_t get_offset_of_skinColour_6() { return static_cast<int32_t>(offsetof(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924, ___skinColour_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_skinColour_6() const { return ___skinColour_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_skinColour_6() { return &___skinColour_6; }
	inline void set_skinColour_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___skinColour_6 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Crosshairs
struct Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LayerMask Crosshairs::targetMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___targetMask_4;
	// UnityEngine.SpriteRenderer Crosshairs::dot
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___dot_5;
	// UnityEngine.Color Crosshairs::dotHighlightColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___dotHighlightColour_6;
	// UnityEngine.Color Crosshairs::originalDotColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___originalDotColour_7;

public:
	inline static int32_t get_offset_of_targetMask_4() { return static_cast<int32_t>(offsetof(Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A, ___targetMask_4)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_targetMask_4() const { return ___targetMask_4; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_targetMask_4() { return &___targetMask_4; }
	inline void set_targetMask_4(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___targetMask_4 = value;
	}

	inline static int32_t get_offset_of_dot_5() { return static_cast<int32_t>(offsetof(Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A, ___dot_5)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_dot_5() const { return ___dot_5; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_dot_5() { return &___dot_5; }
	inline void set_dot_5(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___dot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dot_5), (void*)value);
	}

	inline static int32_t get_offset_of_dotHighlightColour_6() { return static_cast<int32_t>(offsetof(Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A, ___dotHighlightColour_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_dotHighlightColour_6() const { return ___dotHighlightColour_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_dotHighlightColour_6() { return &___dotHighlightColour_6; }
	inline void set_dotHighlightColour_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___dotHighlightColour_6 = value;
	}

	inline static int32_t get_offset_of_originalDotColour_7() { return static_cast<int32_t>(offsetof(Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A, ___originalDotColour_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_originalDotColour_7() const { return ___originalDotColour_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_originalDotColour_7() { return &___originalDotColour_7; }
	inline void set_originalDotColour_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___originalDotColour_7 = value;
	}
};


// GameUI
struct GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image GameUI::fadePlane
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fadePlane_4;
	// UnityEngine.GameObject GameUI::gameOverUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverUI_5;
	// UnityEngine.RectTransform GameUI::newWaveBanner
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___newWaveBanner_6;
	// UnityEngine.UI.Text GameUI::newWaveTitle
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___newWaveTitle_7;
	// UnityEngine.UI.Text GameUI::newWaveEnemyCount
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___newWaveEnemyCount_8;
	// Spawner GameUI::spawner
	Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * ___spawner_9;

public:
	inline static int32_t get_offset_of_fadePlane_4() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___fadePlane_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fadePlane_4() const { return ___fadePlane_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fadePlane_4() { return &___fadePlane_4; }
	inline void set_fadePlane_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fadePlane_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadePlane_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverUI_5() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___gameOverUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverUI_5() const { return ___gameOverUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverUI_5() { return &___gameOverUI_5; }
	inline void set_gameOverUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_newWaveBanner_6() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___newWaveBanner_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_newWaveBanner_6() const { return ___newWaveBanner_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_newWaveBanner_6() { return &___newWaveBanner_6; }
	inline void set_newWaveBanner_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___newWaveBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newWaveBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_newWaveTitle_7() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___newWaveTitle_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_newWaveTitle_7() const { return ___newWaveTitle_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_newWaveTitle_7() { return &___newWaveTitle_7; }
	inline void set_newWaveTitle_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___newWaveTitle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newWaveTitle_7), (void*)value);
	}

	inline static int32_t get_offset_of_newWaveEnemyCount_8() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___newWaveEnemyCount_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_newWaveEnemyCount_8() const { return ___newWaveEnemyCount_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_newWaveEnemyCount_8() { return &___newWaveEnemyCount_8; }
	inline void set_newWaveEnemyCount_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___newWaveEnemyCount_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newWaveEnemyCount_8), (void*)value);
	}

	inline static int32_t get_offset_of_spawner_9() { return static_cast<int32_t>(offsetof(GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF, ___spawner_9)); }
	inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * get_spawner_9() const { return ___spawner_9; }
	inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 ** get_address_of_spawner_9() { return &___spawner_9; }
	inline void set_spawner_9(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * value)
	{
		___spawner_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawner_9), (void*)value);
	}
};


// Gun
struct Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Gun/FireMode Gun::fireMode
	int32_t ___fireMode_4;
	// UnityEngine.Transform[] Gun::projectileSpawn
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___projectileSpawn_5;
	// Projectile Gun::projectile
	Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * ___projectile_6;
	// System.Single Gun::msBetweenShots
	float ___msBetweenShots_7;
	// System.Single Gun::muzzleVelocity
	float ___muzzleVelocity_8;
	// System.Int32 Gun::burstCount
	int32_t ___burstCount_9;
	// System.Int32 Gun::projectilesPerMag
	int32_t ___projectilesPerMag_10;
	// System.Single Gun::reloadTime
	float ___reloadTime_11;
	// UnityEngine.Vector2 Gun::kickMinMax
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___kickMinMax_12;
	// UnityEngine.Vector2 Gun::recoilAngleMinMax
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___recoilAngleMinMax_13;
	// System.Single Gun::recoilMoveSettleTime
	float ___recoilMoveSettleTime_14;
	// System.Single Gun::recoilRotationSettleTime
	float ___recoilRotationSettleTime_15;
	// UnityEngine.Transform Gun::shell
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shell_16;
	// UnityEngine.Transform Gun::shellEjetion
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shellEjetion_17;
	// MuzzleFlash Gun::muzzleFlash
	MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * ___muzzleFlash_18;
	// System.Single Gun::nextShotTime
	float ___nextShotTime_19;
	// System.Boolean Gun::triggerReleaseSinceLastShot
	bool ___triggerReleaseSinceLastShot_20;
	// System.Int32 Gun::shotsRemainingInBurst
	int32_t ___shotsRemainingInBurst_21;
	// System.Int32 Gun::projectilesRemainingInMag
	int32_t ___projectilesRemainingInMag_22;
	// System.Boolean Gun::isReloading
	bool ___isReloading_23;
	// UnityEngine.Vector3 Gun::recoilSmoothDampVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___recoilSmoothDampVelocity_24;
	// System.Single Gun::recoilRotmoothDampVelocity
	float ___recoilRotmoothDampVelocity_25;
	// System.Single Gun::recoilAngle
	float ___recoilAngle_26;

public:
	inline static int32_t get_offset_of_fireMode_4() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___fireMode_4)); }
	inline int32_t get_fireMode_4() const { return ___fireMode_4; }
	inline int32_t* get_address_of_fireMode_4() { return &___fireMode_4; }
	inline void set_fireMode_4(int32_t value)
	{
		___fireMode_4 = value;
	}

	inline static int32_t get_offset_of_projectileSpawn_5() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___projectileSpawn_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_projectileSpawn_5() const { return ___projectileSpawn_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_projectileSpawn_5() { return &___projectileSpawn_5; }
	inline void set_projectileSpawn_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___projectileSpawn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectileSpawn_5), (void*)value);
	}

	inline static int32_t get_offset_of_projectile_6() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___projectile_6)); }
	inline Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * get_projectile_6() const { return ___projectile_6; }
	inline Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F ** get_address_of_projectile_6() { return &___projectile_6; }
	inline void set_projectile_6(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * value)
	{
		___projectile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_6), (void*)value);
	}

	inline static int32_t get_offset_of_msBetweenShots_7() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___msBetweenShots_7)); }
	inline float get_msBetweenShots_7() const { return ___msBetweenShots_7; }
	inline float* get_address_of_msBetweenShots_7() { return &___msBetweenShots_7; }
	inline void set_msBetweenShots_7(float value)
	{
		___msBetweenShots_7 = value;
	}

	inline static int32_t get_offset_of_muzzleVelocity_8() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___muzzleVelocity_8)); }
	inline float get_muzzleVelocity_8() const { return ___muzzleVelocity_8; }
	inline float* get_address_of_muzzleVelocity_8() { return &___muzzleVelocity_8; }
	inline void set_muzzleVelocity_8(float value)
	{
		___muzzleVelocity_8 = value;
	}

	inline static int32_t get_offset_of_burstCount_9() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___burstCount_9)); }
	inline int32_t get_burstCount_9() const { return ___burstCount_9; }
	inline int32_t* get_address_of_burstCount_9() { return &___burstCount_9; }
	inline void set_burstCount_9(int32_t value)
	{
		___burstCount_9 = value;
	}

	inline static int32_t get_offset_of_projectilesPerMag_10() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___projectilesPerMag_10)); }
	inline int32_t get_projectilesPerMag_10() const { return ___projectilesPerMag_10; }
	inline int32_t* get_address_of_projectilesPerMag_10() { return &___projectilesPerMag_10; }
	inline void set_projectilesPerMag_10(int32_t value)
	{
		___projectilesPerMag_10 = value;
	}

	inline static int32_t get_offset_of_reloadTime_11() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___reloadTime_11)); }
	inline float get_reloadTime_11() const { return ___reloadTime_11; }
	inline float* get_address_of_reloadTime_11() { return &___reloadTime_11; }
	inline void set_reloadTime_11(float value)
	{
		___reloadTime_11 = value;
	}

	inline static int32_t get_offset_of_kickMinMax_12() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___kickMinMax_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_kickMinMax_12() const { return ___kickMinMax_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_kickMinMax_12() { return &___kickMinMax_12; }
	inline void set_kickMinMax_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___kickMinMax_12 = value;
	}

	inline static int32_t get_offset_of_recoilAngleMinMax_13() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___recoilAngleMinMax_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_recoilAngleMinMax_13() const { return ___recoilAngleMinMax_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_recoilAngleMinMax_13() { return &___recoilAngleMinMax_13; }
	inline void set_recoilAngleMinMax_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___recoilAngleMinMax_13 = value;
	}

	inline static int32_t get_offset_of_recoilMoveSettleTime_14() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___recoilMoveSettleTime_14)); }
	inline float get_recoilMoveSettleTime_14() const { return ___recoilMoveSettleTime_14; }
	inline float* get_address_of_recoilMoveSettleTime_14() { return &___recoilMoveSettleTime_14; }
	inline void set_recoilMoveSettleTime_14(float value)
	{
		___recoilMoveSettleTime_14 = value;
	}

	inline static int32_t get_offset_of_recoilRotationSettleTime_15() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___recoilRotationSettleTime_15)); }
	inline float get_recoilRotationSettleTime_15() const { return ___recoilRotationSettleTime_15; }
	inline float* get_address_of_recoilRotationSettleTime_15() { return &___recoilRotationSettleTime_15; }
	inline void set_recoilRotationSettleTime_15(float value)
	{
		___recoilRotationSettleTime_15 = value;
	}

	inline static int32_t get_offset_of_shell_16() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___shell_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shell_16() const { return ___shell_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shell_16() { return &___shell_16; }
	inline void set_shell_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shell_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shell_16), (void*)value);
	}

	inline static int32_t get_offset_of_shellEjetion_17() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___shellEjetion_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shellEjetion_17() const { return ___shellEjetion_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shellEjetion_17() { return &___shellEjetion_17; }
	inline void set_shellEjetion_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shellEjetion_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shellEjetion_17), (void*)value);
	}

	inline static int32_t get_offset_of_muzzleFlash_18() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___muzzleFlash_18)); }
	inline MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * get_muzzleFlash_18() const { return ___muzzleFlash_18; }
	inline MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 ** get_address_of_muzzleFlash_18() { return &___muzzleFlash_18; }
	inline void set_muzzleFlash_18(MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * value)
	{
		___muzzleFlash_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muzzleFlash_18), (void*)value);
	}

	inline static int32_t get_offset_of_nextShotTime_19() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___nextShotTime_19)); }
	inline float get_nextShotTime_19() const { return ___nextShotTime_19; }
	inline float* get_address_of_nextShotTime_19() { return &___nextShotTime_19; }
	inline void set_nextShotTime_19(float value)
	{
		___nextShotTime_19 = value;
	}

	inline static int32_t get_offset_of_triggerReleaseSinceLastShot_20() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___triggerReleaseSinceLastShot_20)); }
	inline bool get_triggerReleaseSinceLastShot_20() const { return ___triggerReleaseSinceLastShot_20; }
	inline bool* get_address_of_triggerReleaseSinceLastShot_20() { return &___triggerReleaseSinceLastShot_20; }
	inline void set_triggerReleaseSinceLastShot_20(bool value)
	{
		___triggerReleaseSinceLastShot_20 = value;
	}

	inline static int32_t get_offset_of_shotsRemainingInBurst_21() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___shotsRemainingInBurst_21)); }
	inline int32_t get_shotsRemainingInBurst_21() const { return ___shotsRemainingInBurst_21; }
	inline int32_t* get_address_of_shotsRemainingInBurst_21() { return &___shotsRemainingInBurst_21; }
	inline void set_shotsRemainingInBurst_21(int32_t value)
	{
		___shotsRemainingInBurst_21 = value;
	}

	inline static int32_t get_offset_of_projectilesRemainingInMag_22() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___projectilesRemainingInMag_22)); }
	inline int32_t get_projectilesRemainingInMag_22() const { return ___projectilesRemainingInMag_22; }
	inline int32_t* get_address_of_projectilesRemainingInMag_22() { return &___projectilesRemainingInMag_22; }
	inline void set_projectilesRemainingInMag_22(int32_t value)
	{
		___projectilesRemainingInMag_22 = value;
	}

	inline static int32_t get_offset_of_isReloading_23() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___isReloading_23)); }
	inline bool get_isReloading_23() const { return ___isReloading_23; }
	inline bool* get_address_of_isReloading_23() { return &___isReloading_23; }
	inline void set_isReloading_23(bool value)
	{
		___isReloading_23 = value;
	}

	inline static int32_t get_offset_of_recoilSmoothDampVelocity_24() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___recoilSmoothDampVelocity_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_recoilSmoothDampVelocity_24() const { return ___recoilSmoothDampVelocity_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_recoilSmoothDampVelocity_24() { return &___recoilSmoothDampVelocity_24; }
	inline void set_recoilSmoothDampVelocity_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___recoilSmoothDampVelocity_24 = value;
	}

	inline static int32_t get_offset_of_recoilRotmoothDampVelocity_25() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___recoilRotmoothDampVelocity_25)); }
	inline float get_recoilRotmoothDampVelocity_25() const { return ___recoilRotmoothDampVelocity_25; }
	inline float* get_address_of_recoilRotmoothDampVelocity_25() { return &___recoilRotmoothDampVelocity_25; }
	inline void set_recoilRotmoothDampVelocity_25(float value)
	{
		___recoilRotmoothDampVelocity_25 = value;
	}

	inline static int32_t get_offset_of_recoilAngle_26() { return static_cast<int32_t>(offsetof(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C, ___recoilAngle_26)); }
	inline float get_recoilAngle_26() const { return ___recoilAngle_26; }
	inline float* get_address_of_recoilAngle_26() { return &___recoilAngle_26; }
	inline void set_recoilAngle_26(float value)
	{
		___recoilAngle_26 = value;
	}
};


// GunController
struct GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform GunController::weaponHold
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___weaponHold_4;
	// Gun[] GunController::allGuns
	GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE* ___allGuns_5;
	// Gun GunController::equippedGun
	Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * ___equippedGun_6;

public:
	inline static int32_t get_offset_of_weaponHold_4() { return static_cast<int32_t>(offsetof(GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81, ___weaponHold_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_weaponHold_4() const { return ___weaponHold_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_weaponHold_4() { return &___weaponHold_4; }
	inline void set_weaponHold_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___weaponHold_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponHold_4), (void*)value);
	}

	inline static int32_t get_offset_of_allGuns_5() { return static_cast<int32_t>(offsetof(GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81, ___allGuns_5)); }
	inline GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE* get_allGuns_5() const { return ___allGuns_5; }
	inline GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE** get_address_of_allGuns_5() { return &___allGuns_5; }
	inline void set_allGuns_5(GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE* value)
	{
		___allGuns_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allGuns_5), (void*)value);
	}

	inline static int32_t get_offset_of_equippedGun_6() { return static_cast<int32_t>(offsetof(GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81, ___equippedGun_6)); }
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * get_equippedGun_6() const { return ___equippedGun_6; }
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C ** get_address_of_equippedGun_6() { return &___equippedGun_6; }
	inline void set_equippedGun_6(Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * value)
	{
		___equippedGun_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___equippedGun_6), (void*)value);
	}
};


// LivingEntity
struct LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LivingEntity::health
	float ___health_4;
	// System.Boolean LivingEntity::dead
	bool ___dead_5;
	// System.Single LivingEntity::startingHealth
	float ___startingHealth_6;
	// System.Action LivingEntity::OnDeath
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDeath_7;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_dead_5() { return static_cast<int32_t>(offsetof(LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66, ___dead_5)); }
	inline bool get_dead_5() const { return ___dead_5; }
	inline bool* get_address_of_dead_5() { return &___dead_5; }
	inline void set_dead_5(bool value)
	{
		___dead_5 = value;
	}

	inline static int32_t get_offset_of_startingHealth_6() { return static_cast<int32_t>(offsetof(LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66, ___startingHealth_6)); }
	inline float get_startingHealth_6() const { return ___startingHealth_6; }
	inline float* get_address_of_startingHealth_6() { return &___startingHealth_6; }
	inline void set_startingHealth_6(float value)
	{
		___startingHealth_6 = value;
	}

	inline static int32_t get_offset_of_OnDeath_7() { return static_cast<int32_t>(offsetof(LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66, ___OnDeath_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDeath_7() const { return ___OnDeath_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDeath_7() { return &___OnDeath_7; }
	inline void set_OnDeath_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDeath_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDeath_7), (void*)value);
	}
};


// MapGenerator
struct MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapGenerator/Map[] MapGenerator::maps
	MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744* ___maps_4;
	// System.Int32 MapGenerator::mapIndex
	int32_t ___mapIndex_5;
	// UnityEngine.Transform MapGenerator::tilePrefab
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tilePrefab_6;
	// UnityEngine.Transform MapGenerator::obstaclePrefab
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___obstaclePrefab_7;
	// UnityEngine.Transform MapGenerator::mapFloor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mapFloor_8;
	// UnityEngine.Transform MapGenerator::navmeshFloor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___navmeshFloor_9;
	// UnityEngine.Transform MapGenerator::navmeshMaskPrefab
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___navmeshMaskPrefab_10;
	// UnityEngine.Vector2 MapGenerator::maxMapSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maxMapSize_11;
	// System.Single MapGenerator::outlinePercent
	float ___outlinePercent_12;
	// System.Single MapGenerator::tileSize
	float ___tileSize_13;
	// System.Collections.Generic.List`1<MapGenerator/Coord> MapGenerator::allTileCoords
	List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * ___allTileCoords_14;
	// System.Collections.Generic.Queue`1<MapGenerator/Coord> MapGenerator::shuffledTileCoords
	Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * ___shuffledTileCoords_15;
	// System.Collections.Generic.Queue`1<MapGenerator/Coord> MapGenerator::shuffledOpenTileCoords
	Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * ___shuffledOpenTileCoords_16;
	// UnityEngine.Transform[0...,0...] MapGenerator::tileMap
	TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* ___tileMap_17;
	// MapGenerator/Map MapGenerator::currentMap
	Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * ___currentMap_18;

public:
	inline static int32_t get_offset_of_maps_4() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___maps_4)); }
	inline MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744* get_maps_4() const { return ___maps_4; }
	inline MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744** get_address_of_maps_4() { return &___maps_4; }
	inline void set_maps_4(MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744* value)
	{
		___maps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_4), (void*)value);
	}

	inline static int32_t get_offset_of_mapIndex_5() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___mapIndex_5)); }
	inline int32_t get_mapIndex_5() const { return ___mapIndex_5; }
	inline int32_t* get_address_of_mapIndex_5() { return &___mapIndex_5; }
	inline void set_mapIndex_5(int32_t value)
	{
		___mapIndex_5 = value;
	}

	inline static int32_t get_offset_of_tilePrefab_6() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___tilePrefab_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_tilePrefab_6() const { return ___tilePrefab_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_tilePrefab_6() { return &___tilePrefab_6; }
	inline void set_tilePrefab_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___tilePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tilePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_obstaclePrefab_7() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___obstaclePrefab_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_obstaclePrefab_7() const { return ___obstaclePrefab_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_obstaclePrefab_7() { return &___obstaclePrefab_7; }
	inline void set_obstaclePrefab_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___obstaclePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obstaclePrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_mapFloor_8() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___mapFloor_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mapFloor_8() const { return ___mapFloor_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mapFloor_8() { return &___mapFloor_8; }
	inline void set_mapFloor_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mapFloor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapFloor_8), (void*)value);
	}

	inline static int32_t get_offset_of_navmeshFloor_9() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___navmeshFloor_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_navmeshFloor_9() const { return ___navmeshFloor_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_navmeshFloor_9() { return &___navmeshFloor_9; }
	inline void set_navmeshFloor_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___navmeshFloor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navmeshFloor_9), (void*)value);
	}

	inline static int32_t get_offset_of_navmeshMaskPrefab_10() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___navmeshMaskPrefab_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_navmeshMaskPrefab_10() const { return ___navmeshMaskPrefab_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_navmeshMaskPrefab_10() { return &___navmeshMaskPrefab_10; }
	inline void set_navmeshMaskPrefab_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___navmeshMaskPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navmeshMaskPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_maxMapSize_11() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___maxMapSize_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maxMapSize_11() const { return ___maxMapSize_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maxMapSize_11() { return &___maxMapSize_11; }
	inline void set_maxMapSize_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maxMapSize_11 = value;
	}

	inline static int32_t get_offset_of_outlinePercent_12() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___outlinePercent_12)); }
	inline float get_outlinePercent_12() const { return ___outlinePercent_12; }
	inline float* get_address_of_outlinePercent_12() { return &___outlinePercent_12; }
	inline void set_outlinePercent_12(float value)
	{
		___outlinePercent_12 = value;
	}

	inline static int32_t get_offset_of_tileSize_13() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___tileSize_13)); }
	inline float get_tileSize_13() const { return ___tileSize_13; }
	inline float* get_address_of_tileSize_13() { return &___tileSize_13; }
	inline void set_tileSize_13(float value)
	{
		___tileSize_13 = value;
	}

	inline static int32_t get_offset_of_allTileCoords_14() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___allTileCoords_14)); }
	inline List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * get_allTileCoords_14() const { return ___allTileCoords_14; }
	inline List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC ** get_address_of_allTileCoords_14() { return &___allTileCoords_14; }
	inline void set_allTileCoords_14(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * value)
	{
		___allTileCoords_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allTileCoords_14), (void*)value);
	}

	inline static int32_t get_offset_of_shuffledTileCoords_15() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___shuffledTileCoords_15)); }
	inline Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * get_shuffledTileCoords_15() const { return ___shuffledTileCoords_15; }
	inline Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 ** get_address_of_shuffledTileCoords_15() { return &___shuffledTileCoords_15; }
	inline void set_shuffledTileCoords_15(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * value)
	{
		___shuffledTileCoords_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shuffledTileCoords_15), (void*)value);
	}

	inline static int32_t get_offset_of_shuffledOpenTileCoords_16() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___shuffledOpenTileCoords_16)); }
	inline Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * get_shuffledOpenTileCoords_16() const { return ___shuffledOpenTileCoords_16; }
	inline Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 ** get_address_of_shuffledOpenTileCoords_16() { return &___shuffledOpenTileCoords_16; }
	inline void set_shuffledOpenTileCoords_16(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * value)
	{
		___shuffledOpenTileCoords_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shuffledOpenTileCoords_16), (void*)value);
	}

	inline static int32_t get_offset_of_tileMap_17() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___tileMap_17)); }
	inline TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* get_tileMap_17() const { return ___tileMap_17; }
	inline TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14** get_address_of_tileMap_17() { return &___tileMap_17; }
	inline void set_tileMap_17(TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* value)
	{
		___tileMap_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tileMap_17), (void*)value);
	}

	inline static int32_t get_offset_of_currentMap_18() { return static_cast<int32_t>(offsetof(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C, ___currentMap_18)); }
	inline Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * get_currentMap_18() const { return ___currentMap_18; }
	inline Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 ** get_address_of_currentMap_18() { return &___currentMap_18; }
	inline void set_currentMap_18(Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * value)
	{
		___currentMap_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMap_18), (void*)value);
	}
};


// MuzzleFlash
struct MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MuzzleFlash::flashHolder
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___flashHolder_4;
	// UnityEngine.Sprite[] MuzzleFlash::flashSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___flashSprites_5;
	// UnityEngine.SpriteRenderer[] MuzzleFlash::spriteRenderers
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* ___spriteRenderers_6;
	// System.Single MuzzleFlash::flashTime
	float ___flashTime_7;

public:
	inline static int32_t get_offset_of_flashHolder_4() { return static_cast<int32_t>(offsetof(MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498, ___flashHolder_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_flashHolder_4() const { return ___flashHolder_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_flashHolder_4() { return &___flashHolder_4; }
	inline void set_flashHolder_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___flashHolder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flashHolder_4), (void*)value);
	}

	inline static int32_t get_offset_of_flashSprites_5() { return static_cast<int32_t>(offsetof(MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498, ___flashSprites_5)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_flashSprites_5() const { return ___flashSprites_5; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_flashSprites_5() { return &___flashSprites_5; }
	inline void set_flashSprites_5(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___flashSprites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flashSprites_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderers_6() { return static_cast<int32_t>(offsetof(MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498, ___spriteRenderers_6)); }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* get_spriteRenderers_6() const { return ___spriteRenderers_6; }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF** get_address_of_spriteRenderers_6() { return &___spriteRenderers_6; }
	inline void set_spriteRenderers_6(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* value)
	{
		___spriteRenderers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderers_6), (void*)value);
	}

	inline static int32_t get_offset_of_flashTime_7() { return static_cast<int32_t>(offsetof(MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498, ___flashTime_7)); }
	inline float get_flashTime_7() const { return ___flashTime_7; }
	inline float* get_address_of_flashTime_7() { return &___flashTime_7; }
	inline void set_flashTime_7(float value)
	{
		___flashTime_7 = value;
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 PlayerController::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_4;
	// UnityEngine.Rigidbody PlayerController::myRigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___myRigidbody_5;

public:
	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_4() const { return ___velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___myRigidbody_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_myRigidbody_5() const { return ___myRigidbody_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_myRigidbody_5() { return &___myRigidbody_5; }
	inline void set_myRigidbody_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___myRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRigidbody_5), (void*)value);
	}
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LayerMask Projectile::collisionMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___collisionMask_4;
	// UnityEngine.Color Projectile::trailColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___trailColour_5;
	// System.Single Projectile::speed
	float ___speed_6;
	// System.Single Projectile::damage
	float ___damage_7;
	// System.Single Projectile::lifetime
	float ___lifetime_8;
	// System.Single Projectile::skinWidth
	float ___skinWidth_9;

public:
	inline static int32_t get_offset_of_collisionMask_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___collisionMask_4)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_collisionMask_4() const { return ___collisionMask_4; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_collisionMask_4() { return &___collisionMask_4; }
	inline void set_collisionMask_4(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___collisionMask_4 = value;
	}

	inline static int32_t get_offset_of_trailColour_5() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___trailColour_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_trailColour_5() const { return ___trailColour_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_trailColour_5() { return &___trailColour_5; }
	inline void set_trailColour_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___trailColour_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_damage_7() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___damage_7)); }
	inline float get_damage_7() const { return ___damage_7; }
	inline float* get_address_of_damage_7() { return &___damage_7; }
	inline void set_damage_7(float value)
	{
		___damage_7 = value;
	}

	inline static int32_t get_offset_of_lifetime_8() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___lifetime_8)); }
	inline float get_lifetime_8() const { return ___lifetime_8; }
	inline float* get_address_of_lifetime_8() { return &___lifetime_8; }
	inline void set_lifetime_8(float value)
	{
		___lifetime_8 = value;
	}

	inline static int32_t get_offset_of_skinWidth_9() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___skinWidth_9)); }
	inline float get_skinWidth_9() const { return ___skinWidth_9; }
	inline float* get_address_of_skinWidth_9() { return &___skinWidth_9; }
	inline void set_skinWidth_9(float value)
	{
		___skinWidth_9 = value;
	}
};


// Shell
struct Shell_tBB91054C9493DE994824A479BF37CAF307029629  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody Shell::myRigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___myRigidbody_4;
	// System.Single Shell::forceMin
	float ___forceMin_5;
	// System.Single Shell::forceMax
	float ___forceMax_6;
	// System.Single Shell::lifetime
	float ___lifetime_7;
	// System.Single Shell::fadetime
	float ___fadetime_8;

public:
	inline static int32_t get_offset_of_myRigidbody_4() { return static_cast<int32_t>(offsetof(Shell_tBB91054C9493DE994824A479BF37CAF307029629, ___myRigidbody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_myRigidbody_4() const { return ___myRigidbody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_myRigidbody_4() { return &___myRigidbody_4; }
	inline void set_myRigidbody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___myRigidbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRigidbody_4), (void*)value);
	}

	inline static int32_t get_offset_of_forceMin_5() { return static_cast<int32_t>(offsetof(Shell_tBB91054C9493DE994824A479BF37CAF307029629, ___forceMin_5)); }
	inline float get_forceMin_5() const { return ___forceMin_5; }
	inline float* get_address_of_forceMin_5() { return &___forceMin_5; }
	inline void set_forceMin_5(float value)
	{
		___forceMin_5 = value;
	}

	inline static int32_t get_offset_of_forceMax_6() { return static_cast<int32_t>(offsetof(Shell_tBB91054C9493DE994824A479BF37CAF307029629, ___forceMax_6)); }
	inline float get_forceMax_6() const { return ___forceMax_6; }
	inline float* get_address_of_forceMax_6() { return &___forceMax_6; }
	inline void set_forceMax_6(float value)
	{
		___forceMax_6 = value;
	}

	inline static int32_t get_offset_of_lifetime_7() { return static_cast<int32_t>(offsetof(Shell_tBB91054C9493DE994824A479BF37CAF307029629, ___lifetime_7)); }
	inline float get_lifetime_7() const { return ___lifetime_7; }
	inline float* get_address_of_lifetime_7() { return &___lifetime_7; }
	inline void set_lifetime_7(float value)
	{
		___lifetime_7 = value;
	}

	inline static int32_t get_offset_of_fadetime_8() { return static_cast<int32_t>(offsetof(Shell_tBB91054C9493DE994824A479BF37CAF307029629, ___fadetime_8)); }
	inline float get_fadetime_8() const { return ___fadetime_8; }
	inline float* get_address_of_fadetime_8() { return &___fadetime_8; }
	inline void set_fadetime_8(float value)
	{
		___fadetime_8 = value;
	}
};


// Spawner
struct Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Spawner::devMode
	bool ___devMode_4;
	// Spawner/Wave[] Spawner::waves
	WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* ___waves_5;
	// Enemy Spawner::enemy
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy_6;
	// LivingEntity Spawner::playerEntity
	LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * ___playerEntity_7;
	// UnityEngine.Transform Spawner::playerT
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerT_8;
	// Spawner/Wave Spawner::currentWave
	Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * ___currentWave_9;
	// System.Int32 Spawner::currentWaveNumber
	int32_t ___currentWaveNumber_10;
	// System.Int32 Spawner::enemiesRemainingToSpawn
	int32_t ___enemiesRemainingToSpawn_11;
	// System.Int32 Spawner::enemiesRemainingAlive
	int32_t ___enemiesRemainingAlive_12;
	// System.Single Spawner::nextSpawnTime
	float ___nextSpawnTime_13;
	// MapGenerator Spawner::map
	MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * ___map_14;
	// System.Single Spawner::timeBetweenCampingChecks
	float ___timeBetweenCampingChecks_15;
	// System.Single Spawner::campThresholdDistance
	float ___campThresholdDistance_16;
	// System.Single Spawner::nextCampCheckTime
	float ___nextCampCheckTime_17;
	// UnityEngine.Vector3 Spawner::campPositionOld
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___campPositionOld_18;
	// System.Boolean Spawner::isCamping
	bool ___isCamping_19;
	// System.Action`1<System.Int32> Spawner::OnNewWave
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnNewWave_20;
	// System.Boolean Spawner::isDisabled
	bool ___isDisabled_21;

public:
	inline static int32_t get_offset_of_devMode_4() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___devMode_4)); }
	inline bool get_devMode_4() const { return ___devMode_4; }
	inline bool* get_address_of_devMode_4() { return &___devMode_4; }
	inline void set_devMode_4(bool value)
	{
		___devMode_4 = value;
	}

	inline static int32_t get_offset_of_waves_5() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___waves_5)); }
	inline WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* get_waves_5() const { return ___waves_5; }
	inline WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120** get_address_of_waves_5() { return &___waves_5; }
	inline void set_waves_5(WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* value)
	{
		___waves_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waves_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_6() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___enemy_6)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_enemy_6() const { return ___enemy_6; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_enemy_6() { return &___enemy_6; }
	inline void set_enemy_6(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___enemy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerEntity_7() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___playerEntity_7)); }
	inline LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * get_playerEntity_7() const { return ___playerEntity_7; }
	inline LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 ** get_address_of_playerEntity_7() { return &___playerEntity_7; }
	inline void set_playerEntity_7(LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * value)
	{
		___playerEntity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerEntity_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerT_8() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___playerT_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerT_8() const { return ___playerT_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerT_8() { return &___playerT_8; }
	inline void set_playerT_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerT_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerT_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentWave_9() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___currentWave_9)); }
	inline Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * get_currentWave_9() const { return ___currentWave_9; }
	inline Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 ** get_address_of_currentWave_9() { return &___currentWave_9; }
	inline void set_currentWave_9(Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * value)
	{
		___currentWave_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentWave_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentWaveNumber_10() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___currentWaveNumber_10)); }
	inline int32_t get_currentWaveNumber_10() const { return ___currentWaveNumber_10; }
	inline int32_t* get_address_of_currentWaveNumber_10() { return &___currentWaveNumber_10; }
	inline void set_currentWaveNumber_10(int32_t value)
	{
		___currentWaveNumber_10 = value;
	}

	inline static int32_t get_offset_of_enemiesRemainingToSpawn_11() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___enemiesRemainingToSpawn_11)); }
	inline int32_t get_enemiesRemainingToSpawn_11() const { return ___enemiesRemainingToSpawn_11; }
	inline int32_t* get_address_of_enemiesRemainingToSpawn_11() { return &___enemiesRemainingToSpawn_11; }
	inline void set_enemiesRemainingToSpawn_11(int32_t value)
	{
		___enemiesRemainingToSpawn_11 = value;
	}

	inline static int32_t get_offset_of_enemiesRemainingAlive_12() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___enemiesRemainingAlive_12)); }
	inline int32_t get_enemiesRemainingAlive_12() const { return ___enemiesRemainingAlive_12; }
	inline int32_t* get_address_of_enemiesRemainingAlive_12() { return &___enemiesRemainingAlive_12; }
	inline void set_enemiesRemainingAlive_12(int32_t value)
	{
		___enemiesRemainingAlive_12 = value;
	}

	inline static int32_t get_offset_of_nextSpawnTime_13() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___nextSpawnTime_13)); }
	inline float get_nextSpawnTime_13() const { return ___nextSpawnTime_13; }
	inline float* get_address_of_nextSpawnTime_13() { return &___nextSpawnTime_13; }
	inline void set_nextSpawnTime_13(float value)
	{
		___nextSpawnTime_13 = value;
	}

	inline static int32_t get_offset_of_map_14() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___map_14)); }
	inline MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * get_map_14() const { return ___map_14; }
	inline MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C ** get_address_of_map_14() { return &___map_14; }
	inline void set_map_14(MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * value)
	{
		___map_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_14), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenCampingChecks_15() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___timeBetweenCampingChecks_15)); }
	inline float get_timeBetweenCampingChecks_15() const { return ___timeBetweenCampingChecks_15; }
	inline float* get_address_of_timeBetweenCampingChecks_15() { return &___timeBetweenCampingChecks_15; }
	inline void set_timeBetweenCampingChecks_15(float value)
	{
		___timeBetweenCampingChecks_15 = value;
	}

	inline static int32_t get_offset_of_campThresholdDistance_16() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___campThresholdDistance_16)); }
	inline float get_campThresholdDistance_16() const { return ___campThresholdDistance_16; }
	inline float* get_address_of_campThresholdDistance_16() { return &___campThresholdDistance_16; }
	inline void set_campThresholdDistance_16(float value)
	{
		___campThresholdDistance_16 = value;
	}

	inline static int32_t get_offset_of_nextCampCheckTime_17() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___nextCampCheckTime_17)); }
	inline float get_nextCampCheckTime_17() const { return ___nextCampCheckTime_17; }
	inline float* get_address_of_nextCampCheckTime_17() { return &___nextCampCheckTime_17; }
	inline void set_nextCampCheckTime_17(float value)
	{
		___nextCampCheckTime_17 = value;
	}

	inline static int32_t get_offset_of_campPositionOld_18() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___campPositionOld_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_campPositionOld_18() const { return ___campPositionOld_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_campPositionOld_18() { return &___campPositionOld_18; }
	inline void set_campPositionOld_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___campPositionOld_18 = value;
	}

	inline static int32_t get_offset_of_isCamping_19() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___isCamping_19)); }
	inline bool get_isCamping_19() const { return ___isCamping_19; }
	inline bool* get_address_of_isCamping_19() { return &___isCamping_19; }
	inline void set_isCamping_19(bool value)
	{
		___isCamping_19 = value;
	}

	inline static int32_t get_offset_of_OnNewWave_20() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___OnNewWave_20)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnNewWave_20() const { return ___OnNewWave_20; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnNewWave_20() { return &___OnNewWave_20; }
	inline void set_OnNewWave_20(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnNewWave_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNewWave_20), (void*)value);
	}

	inline static int32_t get_offset_of_isDisabled_21() { return static_cast<int32_t>(offsetof(Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87, ___isDisabled_21)); }
	inline bool get_isDisabled_21() const { return ___isDisabled_21; }
	inline bool* get_address_of_isDisabled_21() { return &___isDisabled_21; }
	inline void set_isDisabled_21(bool value)
	{
		___isDisabled_21 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66
{
public:
	// Enemy/State Enemy::currentState
	int32_t ___currentState_8;
	// UnityEngine.ParticleSystem Enemy::deathEffect
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___deathEffect_9;
	// UnityEngine.Transform Enemy::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_10;
	// UnityEngine.AI.NavMeshAgent Enemy::pathfinder
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___pathfinder_11;
	// LivingEntity Enemy::targetEntity
	LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * ___targetEntity_12;
	// UnityEngine.Material Enemy::skinMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___skinMaterial_13;
	// UnityEngine.Color Enemy::originalColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___originalColour_14;
	// System.Single Enemy::damage
	float ___damage_15;
	// System.Single Enemy::attackDistanceThreshold
	float ___attackDistanceThreshold_16;
	// System.Single Enemy::timeBetweenAttacks
	float ___timeBetweenAttacks_17;
	// System.Single Enemy::nextAttackTime
	float ___nextAttackTime_18;
	// System.Single Enemy::myCollisionRadius
	float ___myCollisionRadius_19;
	// System.Single Enemy::targetCollisionRadius
	float ___targetCollisionRadius_20;
	// System.Boolean Enemy::hasTarget
	bool ___hasTarget_21;

public:
	inline static int32_t get_offset_of_currentState_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___currentState_8)); }
	inline int32_t get_currentState_8() const { return ___currentState_8; }
	inline int32_t* get_address_of_currentState_8() { return &___currentState_8; }
	inline void set_currentState_8(int32_t value)
	{
		___currentState_8 = value;
	}

	inline static int32_t get_offset_of_deathEffect_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___deathEffect_9)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_deathEffect_9() const { return ___deathEffect_9; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_deathEffect_9() { return &___deathEffect_9; }
	inline void set_deathEffect_9(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___deathEffect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_9), (void*)value);
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___target_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_10() const { return ___target_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_pathfinder_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___pathfinder_11)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_pathfinder_11() const { return ___pathfinder_11; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_pathfinder_11() { return &___pathfinder_11; }
	inline void set_pathfinder_11(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___pathfinder_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathfinder_11), (void*)value);
	}

	inline static int32_t get_offset_of_targetEntity_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___targetEntity_12)); }
	inline LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * get_targetEntity_12() const { return ___targetEntity_12; }
	inline LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 ** get_address_of_targetEntity_12() { return &___targetEntity_12; }
	inline void set_targetEntity_12(LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * value)
	{
		___targetEntity_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetEntity_12), (void*)value);
	}

	inline static int32_t get_offset_of_skinMaterial_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___skinMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_skinMaterial_13() const { return ___skinMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_skinMaterial_13() { return &___skinMaterial_13; }
	inline void set_skinMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___skinMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skinMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalColour_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___originalColour_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_originalColour_14() const { return ___originalColour_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_originalColour_14() { return &___originalColour_14; }
	inline void set_originalColour_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___originalColour_14 = value;
	}

	inline static int32_t get_offset_of_damage_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___damage_15)); }
	inline float get_damage_15() const { return ___damage_15; }
	inline float* get_address_of_damage_15() { return &___damage_15; }
	inline void set_damage_15(float value)
	{
		___damage_15 = value;
	}

	inline static int32_t get_offset_of_attackDistanceThreshold_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attackDistanceThreshold_16)); }
	inline float get_attackDistanceThreshold_16() const { return ___attackDistanceThreshold_16; }
	inline float* get_address_of_attackDistanceThreshold_16() { return &___attackDistanceThreshold_16; }
	inline void set_attackDistanceThreshold_16(float value)
	{
		___attackDistanceThreshold_16 = value;
	}

	inline static int32_t get_offset_of_timeBetweenAttacks_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___timeBetweenAttacks_17)); }
	inline float get_timeBetweenAttacks_17() const { return ___timeBetweenAttacks_17; }
	inline float* get_address_of_timeBetweenAttacks_17() { return &___timeBetweenAttacks_17; }
	inline void set_timeBetweenAttacks_17(float value)
	{
		___timeBetweenAttacks_17 = value;
	}

	inline static int32_t get_offset_of_nextAttackTime_18() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___nextAttackTime_18)); }
	inline float get_nextAttackTime_18() const { return ___nextAttackTime_18; }
	inline float* get_address_of_nextAttackTime_18() { return &___nextAttackTime_18; }
	inline void set_nextAttackTime_18(float value)
	{
		___nextAttackTime_18 = value;
	}

	inline static int32_t get_offset_of_myCollisionRadius_19() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___myCollisionRadius_19)); }
	inline float get_myCollisionRadius_19() const { return ___myCollisionRadius_19; }
	inline float* get_address_of_myCollisionRadius_19() { return &___myCollisionRadius_19; }
	inline void set_myCollisionRadius_19(float value)
	{
		___myCollisionRadius_19 = value;
	}

	inline static int32_t get_offset_of_targetCollisionRadius_20() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___targetCollisionRadius_20)); }
	inline float get_targetCollisionRadius_20() const { return ___targetCollisionRadius_20; }
	inline float* get_address_of_targetCollisionRadius_20() { return &___targetCollisionRadius_20; }
	inline void set_targetCollisionRadius_20(float value)
	{
		___targetCollisionRadius_20 = value;
	}

	inline static int32_t get_offset_of_hasTarget_21() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___hasTarget_21)); }
	inline bool get_hasTarget_21() const { return ___hasTarget_21; }
	inline bool* get_address_of_hasTarget_21() { return &___hasTarget_21; }
	inline void set_hasTarget_21(bool value)
	{
		___hasTarget_21 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66
{
public:
	// System.Single Player::moveSpeed
	float ___moveSpeed_8;
	// Crosshairs Player::crosshairs
	Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * ___crosshairs_9;
	// UnityEngine.Camera Player::viewCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___viewCamera_10;
	// PlayerController Player::controller
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___controller_11;
	// GunController Player::gunController
	GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * ___gunController_12;

public:
	inline static int32_t get_offset_of_moveSpeed_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSpeed_8)); }
	inline float get_moveSpeed_8() const { return ___moveSpeed_8; }
	inline float* get_address_of_moveSpeed_8() { return &___moveSpeed_8; }
	inline void set_moveSpeed_8(float value)
	{
		___moveSpeed_8 = value;
	}

	inline static int32_t get_offset_of_crosshairs_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___crosshairs_9)); }
	inline Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * get_crosshairs_9() const { return ___crosshairs_9; }
	inline Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A ** get_address_of_crosshairs_9() { return &___crosshairs_9; }
	inline void set_crosshairs_9(Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * value)
	{
		___crosshairs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crosshairs_9), (void*)value);
	}

	inline static int32_t get_offset_of_viewCamera_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___viewCamera_10)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_viewCamera_10() const { return ___viewCamera_10; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_viewCamera_10() { return &___viewCamera_10; }
	inline void set_viewCamera_10(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___viewCamera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewCamera_10), (void*)value);
	}

	inline static int32_t get_offset_of_controller_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___controller_11)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_controller_11() const { return ___controller_11; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_controller_11() { return &___controller_11; }
	inline void set_controller_11(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___controller_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_11), (void*)value);
	}

	inline static int32_t get_offset_of_gunController_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gunController_12)); }
	inline GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * get_gunController_12() const { return ___gunController_12; }
	inline GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 ** get_address_of_gunController_12() { return &___gunController_12; }
	inline void set_gunController_12(GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * value)
	{
		___gunController_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gunController_12), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spawner/Wave[]
struct WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * m_Items[1];

public:
	inline Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Gun[]
struct GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * m_Items[1];

public:
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[0...,0...]
struct BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
	inline bool GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// MapGenerator/Map[]
struct MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * m_Items[1];

public:
	inline Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[0...,0...]
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MapGenerator/Coord[]
struct CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Coord_tFC7948A515859998E0BB210D9F19E635E768E711  m_Items[1];

public:
	inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * m_Items[1];

public:
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * m_Items[1];

public:
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapGenerator/Coord>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594_gshared (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapGenerator/Coord>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF_gshared (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<MapGenerator/Coord>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794_gshared (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, const RuntimeMethod* method);
// T[] Utility::ShuffleArray<MapGenerator/Coord>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486_gshared (CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* ___array0, int32_t ___seed1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<MapGenerator/Coord>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44_gshared (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapGenerator/Coord>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4_gshared (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<MapGenerator/Coord>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD_gshared (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<MapGenerator/Coord>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B_gshared (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<MapGenerator/Coord>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_gshared (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<MapGenerator/Coord>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coord_tFC7948A515859998E0BB210D9F19E635E768E711  Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_gshared (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<MapGenerator/Coord>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_gshared_inline (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);

// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mFDC4B8E7979495E3C22D0E3CEA4BCAB271EEC25A (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void LivingEntity::TakeHit(System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_TakeHit_mFF4473A85B5C2391D9613CE5F9179804A7F25ACD (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, float ___damage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPoint1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitDirection2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<LivingEntity>()
inline LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * Component_GetComponent_TisLivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66_m4609E8D141F1C0048811A088398539AB378259ED (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void LivingEntity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_Start_m4D03E0D68AF8621DEA4FBC9C01A61346E27EBC27 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LivingEntity::add_OnDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_add_OnDeath_mF5E016E644ED786A161EFAF3658433586AD614A9 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::UpdatePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_UpdatePath_m145699FE29486E5A5339F27E3CC313E44CE9C51B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Attack_m10EAFAE25B015EF0CB8A75EDC10847B47B761CB1 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy/<Attack>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__21__ctor_mB0B6C86F44B06AF65C5A4831A957FBA1E0C77990 (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Enemy/<UpdatePath>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ed__22__ctor_m17AE6D5F30BFBF74201193AE1EA93B5E1BCE2A99 (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LivingEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity__ctor_m084033632DA6C4AEB9E4D4ABBEC174ED97657D80 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Spawner>()
inline Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7 (const RuntimeMethod* method)
{
	return ((  Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Spawner::add_OnNewWave(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_add_OnNewWave_mFF0EB133E316D529BB27242875992928BCCAD346 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void GameUI/<AnimateNewWaveBanner>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateNewWaveBannerU3Ed__8__ctor_m8D644FA99126465AA20226708CAE00EB8E31B596 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491 (const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Collections.IEnumerator GameUI::Fade(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameUI_Fade_m87777467863D619FB227866BD130F51513774183 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___from0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to1, float ___time2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameUI/<Fade>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__11__ctor_m662E9684AD2E23B2812479684B238AAF46AE1D80 (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MuzzleFlash>()
inline MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * Component_GetComponent_TisMuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498_mF73C1EC9F143BEF52A848346AD8466ED7ADF015B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Gun::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Reload_m85A78900B11CE3924DCB5168E15E22B5AEEFA6AE (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Projectile>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * Object_Instantiate_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_m4FB7934BC3821DBC3CD8E6804CDB54B86CF9F925 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * (*) (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Projectile::SetSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Projectile_SetSpeed_m5994AB7838F9D5D58FF8174D095923FD769E609C_inline (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, float ___newSpeed0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void MuzzleFlash::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuzzleFlash_Activate_mD5EDBEB21C7D7D600D18D3C832C67D5A9AB3A6D8 (MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Collections.IEnumerator Gun::AnimateReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gun_AnimateReload_m606E13363A3BE7635098774D96C5368B71892EF5 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method);
// System.Void Gun/<AnimateReload>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateReloadU3Ed__28__ctor_m05EAECDB2B6D98B919C621D9ED6C661E6A25978B (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Gun::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Shoot_mBF898A288AE753B55835CACBDA1977CC28C3C5B0 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Gun>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * Object_Instantiate_TisGun_tDD43AC55F07276B834B8A3A792545BD8A456066C_m4E93DC6D955D674D937C3AE0FA384A1176285BCD (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * (*) (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void GunController::EquipGun(Gun)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_EquipGun_mBD37A04510FDEB186EF59746A654F98933EF888C (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * ___gunToEquip0, const RuntimeMethod* method);
// System.Void Gun::OnTriggerHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_OnTriggerHold_m8FDEA28F39F1CB90CB58D068B0CEB1687E3E05FB (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method);
// System.Void Gun::OnTriggerRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_OnTriggerRelease_m8C7506FFEB8274F56F5E0345803B794A6050FB60 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method);
// System.Void Gun::Aim(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Aim_mA6E653CCDBE540D451AB6C158E1D48BDABEB8C02 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___aimPoint0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void LivingEntity::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_Die_mAC2B4B2833D7999A8D6FB7246DE4172AA725D7CF (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, const RuntimeMethod* method);
// System.Void MapGenerator::GenerateMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_GenerateMap_m877A2DB92064271806C79B5DCDBF2AFCE2F6B28C (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapGenerator/Coord>::.ctor()
inline void List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594 (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *, const RuntimeMethod*))List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594_gshared)(__this, method);
}
// System.Void MapGenerator/Coord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53 (Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * __this, int32_t ____x0, int32_t ____y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapGenerator/Coord>::Add(!0)
inline void List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *, Coord_tFC7948A515859998E0BB210D9F19E635E768E711 , const RuntimeMethod*))List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<MapGenerator/Coord>::ToArray()
inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794 (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, const RuntimeMethod* method)
{
	return ((  CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* (*) (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *, const RuntimeMethod*))List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794_gshared)(__this, method);
}
// T[] Utility::ShuffleArray<MapGenerator/Coord>(T[],System.Int32)
inline CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486 (CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* ___array0, int32_t ___seed1, const RuntimeMethod* method)
{
	return ((  CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* (*) (CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584*, int32_t, const RuntimeMethod*))Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486_gshared)(___array0, ___seed1, method);
}
// System.Void System.Collections.Generic.Queue`1<MapGenerator/Coord>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44 (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *, RuntimeObject*, const RuntimeMethod*))Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44_gshared)(__this, ___collection0, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 MapGenerator::CoordToPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MapGenerator_CoordToPosition_mA867EA2640CB3C7FB368655608F36E451E6909CF (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MapGenerator/Coord>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4 (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4_gshared)(__this, ___collection0, method);
}
// MapGenerator/Coord MapGenerator::GetRandomCoord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coord_tFC7948A515859998E0BB210D9F19E635E768E711  MapGenerator_GetRandomCoord_mA5A31B226F1BDCE38179068D204E0C3770986BD7 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method);
// MapGenerator/Coord MapGenerator/Map::get_mapCentre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coord_tFC7948A515859998E0BB210D9F19E635E768E711  Map_get_mapCentre_m92FEC0846F67CED7363759E792D00C0F0A5078F8 (Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * __this, const RuntimeMethod* method);
// System.Boolean MapGenerator/Coord::op_Inequality(MapGenerator/Coord,MapGenerator/Coord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Coord_op_Inequality_mAD830EE8F693C21EEDBB8D4CE9A2439106F806D4 (Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c10, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c21, const RuntimeMethod* method);
// System.Boolean MapGenerator::MapIsFullyAccessible(System.Boolean[0...,0...],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapGenerator_MapIsFullyAccessible_m621BB67DAFCBF151C8DC6360CAFB4A89D5362E2C (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* ___obstacleMap0, int32_t ___currentObstacleCount1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<MapGenerator/Coord>::Remove(!0)
inline bool List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * __this, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *, Coord_tFC7948A515859998E0BB210D9F19E635E768E711 , const RuntimeMethod*))List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<MapGenerator/Coord>::.ctor()
inline void Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *, const RuntimeMethod*))Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<MapGenerator/Coord>::Enqueue(!0)
inline void Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *, Coord_tFC7948A515859998E0BB210D9F19E635E768E711 , const RuntimeMethod*))Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<MapGenerator/Coord>::Dequeue()
inline Coord_tFC7948A515859998E0BB210D9F19E635E768E711  Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method)
{
	return ((  Coord_tFC7948A515859998E0BB210D9F19E635E768E711  (*) (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *, const RuntimeMethod*))Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<MapGenerator/Coord>::get_Count()
inline int32_t Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_inline (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *, const RuntimeMethod*))Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void MuzzleFlash::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuzzleFlash_Deactivate_m9994E69A423E910358F7354399CF2D98BED84945 (MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<GunController>()
inline GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * Component_GetComponent_TisGunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81_m5B89132790F23A87059325654CB6F4186502E9D5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void GunController::EquipGun(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_EquipGun_m98EFDA4917E482EEFC03ABEB97D25FB900D386F4 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, int32_t ___weaponIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void PlayerController::Move(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_Move_m1CF1D2E5EF61742DF4404C036ABB6DF1FC4C70F4_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Single GunController::get_GunHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunController_get_GunHeight_m76E2D7FE0C5B93EBF3E4ACA392AE09D5F5770D43 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// System.Void PlayerController::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LookAt_mE8220FD720FE8F0CE21CF79532D1EBAD737C7558 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookPoint0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Crosshairs::DetectTargets(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshairs_DetectTargets_mF9816658888D96613BF409A3FE2F732D3AF67480 (Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void GunController::Aim(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Aim_mEC28F199CE03484ED4B68F9C5B4A2ECED2259910 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___aimPoint0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void GunController::OnTriggerHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_OnTriggerHold_m97FF77F36E718340FE9E098CB3CB9AAFAE313D7A (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void GunController::OnTriggerRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_OnTriggerRelease_m86293B37C733CA8D683A15957B74739F5E9C0DF5 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void GunController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Reload_m9A649AEC1CCCCDFF75B8EFA8F93176C316563347 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Physics_OverlapSphere_mE1FC40C646B1468905057516601DB49DD41E0223 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Void Projectile::OnHitObject(UnityEngine.Collider,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnHitObject_m625BD108891728523C9CF3E98E88FC15C6E9160E (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___c0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPoint1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * Component_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m3BF8F0D99AB14A2C6D2C3DCC33AC2AFAC49B29D1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void Projectile::CheckCollisions(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_CheckCollisions_mD0A49D2FB638DDB7E09857F7A2391D34F99C1247 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, float ___moveDistance0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCA3F2DD1DC08199AAD8466BB857318CD454AC774 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<IDamageable>()
inline RuntimeObject* Component_GetComponent_TisIDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_m2438F0F607566C20DFD97B6E1DBAF0376A2DBC6E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_mAEB5758FA773B1A0ECDD328934BB3A7202D21EB3 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___torque0, const RuntimeMethod* method);
// System.Collections.IEnumerator Shell::Fade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shell_Fade_m7587AFCC6B66D531A6A57FC2F9906684CED7658A (Shell_tBB91054C9493DE994824A479BF37CAF307029629 * __this, const RuntimeMethod* method);
// System.Void Shell/<Fade>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__6__ctor_mAA1CF1B77E112E810AEC9E3D3E89BE1C2A5CCAC2 (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<MapGenerator>()
inline MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * Object_FindObjectOfType_TisMapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C_mCBCBC266E9569BA1EB51AC89A17F24A9361F48D3 (const RuntimeMethod* method)
{
	return ((  MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void Spawner::NextWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_NextWave_m01AE1E23400D7214A0149243B773B5750434DD32 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Enemy>()
inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B (const RuntimeMethod* method)
{
	return ((  EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void Spawner/<SpawnEnemy>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__23__ctor_m3423BCB15990F9FA2A11D337931D57E71CB17F15 (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Transform MapGenerator::GetTileFromPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MapGenerator_GetTileFromPosition_m741CB6BFC9BEFA6591295B22C27B20E6EBDF8540 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void Spawner::ResetPlayerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_ResetPlayerPosition_m887F95E399D9788C231A9CA5B3A645BAFBFF7406 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean MapGenerator/Coord::op_Equality(MapGenerator/Coord,MapGenerator/Coord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Coord_op_Equality_mAFBA494B0193357778E240030ECEE366AD006B15 (Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c10, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c21, const RuntimeMethod* method);
// UnityEngine.Transform MapGenerator::GetRandomOpenTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MapGenerator_GetRandomOpenTile_mDA9F0D743427557C894A51A2598CBFF6385B1F14 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1 (float ___t0, float ___length1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Enemy>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * Object_Instantiate_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mF69210EDB2FD882E3C1595F85212BE3E09EF549B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Enemy::SetCharacteristics(System.Single,System.Int32,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetCharacteristics_mCEF8DE2982574EA50C56057739AB8C3ECF9C8DAE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, float ___moveSpeed0, int32_t ___hitsToKillPlayer1, float ___enemyHealth2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___skinColour3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Crosshairs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshairs_Start_mE78AD1FC6C2F35E653AAA87A03C9F2E8C46D465D (Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * __this, const RuntimeMethod* method)
{
	{
		// Cursor.visible = false;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
		// originalDotColour = dot.color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_dot_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		__this->set_originalDotColour_7(L_1);
		// }
		return;
	}
}
// System.Void Crosshairs::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshairs_Update_mC7D9260A1AF40DF8876D72CBEA068B7362017F61 (Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.forward * -40 * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, (-40.0f), /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Crosshairs::DetectTargets(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshairs_DetectTargets_mF9816658888D96613BF409A3FE2F732D3AF67480 (Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, const RuntimeMethod* method)
{
	{
		// if (Physics.Raycast(ray, 100, targetMask))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = ___ray0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1 = __this->get_targetMask_4();
		int32_t L_2;
		L_2 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Physics_Raycast_mFDC4B8E7979495E3C22D0E3CEA4BCAB271EEC25A(L_0, (100.0f), L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// dot.color = dotHighlightColour;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_dot_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_dotHighlightColour_6();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002a:
	{
		// dot.color = originalDotColour;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_dot_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = __this->get_originalDotColour_7();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Crosshairs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshairs__ctor_mD919348CCC5574F8CEC27D268DC0731273CA664C (Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::TakeHit(System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TakeHit_mA3AF116A99257E098CEF0D604A7F98049D9D9173 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, float ___damage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPoint1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitDirection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (damage >= health)
		float L_0 = ___damage0;
		float L_1 = ((LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 *)__this)->get_health_4();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		// Destroy(Instantiate(deathEffect.gameObject, hitPoint, Quaternion.FromToRotation(Vector3.forward, hitDirection)) as GameObject,2f);//Multiplier
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = __this->get_deathEffect_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___hitPoint1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___hitDirection2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_4, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_8, (2.0f), /*hidden argument*/NULL);
	}

IL_002f:
	{
		// base.TakeHit(damage, hitPoint, hitDirection);
		float L_9 = ___damage0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___hitPoint1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___hitDirection2;
		LivingEntity_TakeHit_mFF4473A85B5C2391D9613CE5F9179804A7F25ACD(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66_m4609E8D141F1C0048811A088398539AB378259ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pathfinder = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_pathfinder_11(L_0);
		// if (GameObject.FindGameObjectWithTag("Player") != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		// hasTarget = true;
		__this->set_hasTarget_21((bool)1);
		// target = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		__this->set_target_10(L_4);
		// targetEntity = target.GetComponent<LivingEntity>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_target_10();
		LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * L_6;
		L_6 = Component_GetComponent_TisLivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66_m4609E8D141F1C0048811A088398539AB378259ED(L_5, /*hidden argument*/Component_GetComponent_TisLivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66_m4609E8D141F1C0048811A088398539AB378259ED_RuntimeMethod_var);
		__this->set_targetEntity_12(L_6);
		// myCollisionRadius = GetComponent<CapsuleCollider>().radius;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_7;
		L_7 = Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		float L_8;
		L_8 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_7, /*hidden argument*/NULL);
		__this->set_myCollisionRadius_19(L_8);
		// targetCollisionRadius = target.GetComponent<CapsuleCollider>().radius;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_target_10();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_10;
		L_10 = Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9(L_9, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		float L_11;
		L_11 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_10, /*hidden argument*/NULL);
		__this->set_targetCollisionRadius_20(L_11);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Enemy::SetCharacteristics(System.Single,System.Int32,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetCharacteristics_mCEF8DE2982574EA50C56057739AB8C3ECF9C8DAE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, float ___moveSpeed0, int32_t ___hitsToKillPlayer1, float ___enemyHealth2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___skinColour3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pathfinder.speed = moveSpeed;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_pathfinder_11();
		float L_1 = ___moveSpeed0;
		NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14(L_0, L_1, /*hidden argument*/NULL);
		// if (hasTarget)
		bool L_2 = __this->get_hasTarget_21();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// damage = Mathf.Ceil(targetEntity.startingHealth / hitsToKillPlayer);
		LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * L_3 = __this->get_targetEntity_12();
		float L_4 = L_3->get_startingHealth_6();
		int32_t L_5 = ___hitsToKillPlayer1;
		float L_6;
		L_6 = ceilf(((float)((float)L_4/(float)((float)((float)L_5)))));
		__this->set_damage_15(L_6);
	}

IL_002d:
	{
		// startingHealth = enemyHealth;
		float L_7 = ___enemyHealth2;
		((LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 *)__this)->set_startingHealth_6(L_7);
		// skinMaterial = GetComponent<Renderer>().sharedMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8;
		L_8 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_8, /*hidden argument*/NULL);
		__this->set_skinMaterial_13(L_9);
		// skinMaterial.color = skinColour;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_skinMaterial_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = ___skinColour3;
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_10, L_11, /*hidden argument*/NULL);
		// originalColour = skinMaterial.color;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_skinMaterial_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_12, /*hidden argument*/NULL);
		__this->set_originalColour_14(L_13);
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_OnTargetDeath_m37657266571AE56E3B74E02C1702324785D2BFDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		LivingEntity_Start_m4D03E0D68AF8621DEA4FBC9C01A61346E27EBC27(__this, /*hidden argument*/NULL);
		// if (hasTarget){
		bool L_0 = __this->get_hasTarget_21();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// currentState = State.Chasing;
		__this->set_currentState_8(1);
		// targetEntity.OnDeath += OnTargetDeath;
		LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * L_1 = __this->get_targetEntity_12();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)Enemy_OnTargetDeath_m37657266571AE56E3B74E02C1702324785D2BFDC_RuntimeMethod_var), /*hidden argument*/NULL);
		LivingEntity_add_OnDeath_mF5E016E644ED786A161EFAF3658433586AD614A9(L_1, L_2, /*hidden argument*/NULL);
		// StartCoroutine(UpdatePath());
		RuntimeObject* L_3;
		L_3 = Enemy_UpdatePath_m145699FE29486E5A5339F27E3CC313E44CE9C51B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnTargetDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTargetDeath_m37657266571AE56E3B74E02C1702324785D2BFDC (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// hasTarget = false;
		__this->set_hasTarget_21((bool)0);
		// currentState = State.Idle;
		__this->set_currentState_8(0);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (hasTarget) {
		bool L_0 = __this->get_hasTarget_21();
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		// if (Time.time > nextAttackTime)
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_nextAttackTime_18();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0077;
		}
	}
	{
		// float sqrDstToTarget = (target.position - transform.position).sqrMagnitude;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// if (sqrDstToTarget < Mathf.Pow(attackDistanceThreshold + myCollisionRadius + targetCollisionRadius, 2))
		float L_9 = __this->get_attackDistanceThreshold_16();
		float L_10 = __this->get_myCollisionRadius_19();
		float L_11 = __this->get_targetCollisionRadius_20();
		float L_12;
		L_12 = powf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_9, (float)L_10)), (float)L_11)), (2.0f));
		if ((!(((float)L_8) < ((float)L_12))))
		{
			goto IL_0077;
		}
	}
	{
		// nextAttackTime = Time.time + timeBetweenAttacks;
		float L_13;
		L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_14 = __this->get_timeBetweenAttacks_17();
		__this->set_nextAttackTime_18(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
		// StartCoroutine(Attack());
		RuntimeObject* L_15;
		L_15 = Enemy_Attack_m10EAFAE25B015EF0CB8A75EDC10847B47B761CB1(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_15, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Attack_m10EAFAE25B015EF0CB8A75EDC10847B47B761CB1 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * L_0 = (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 *)il2cpp_codegen_object_new(U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__21__ctor_mB0B6C86F44B06AF65C5A4831A957FBA1E0C77990(L_0, 0, /*hidden argument*/NULL);
		U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Enemy::UpdatePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_UpdatePath_m145699FE29486E5A5339F27E3CC313E44CE9C51B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * L_0 = (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E *)il2cpp_codegen_object_new(U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E_il2cpp_TypeInfo_var);
		U3CUpdatePathU3Ed__22__ctor_m17AE6D5F30BFBF74201193AE1EA93B5E1BCE2A99(L_0, 0, /*hidden argument*/NULL);
		U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// float damage = 1;
		__this->set_damage_15((1.0f));
		// float attackDistanceThreshold = .5f;   //                               ������λ
		__this->set_attackDistanceThreshold_16((0.5f));
		// float timeBetweenAttacks = 1;
		__this->set_timeBetweenAttacks_17((1.0f));
		LivingEntity__ctor_m084033632DA6C4AEB9E4D4ABBEC174ED97657D80(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Awake_mC9A68873F0E0B676110FEC2DB24C672C17EDCCB9 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_OnNewWave_mE2137A0F0635C77DA267FA1878F19FE7464A44A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawner = FindObjectOfType<Spawner>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7(/*hidden argument*/Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var);
		__this->set_spawner_9(L_0);
		// spawner.OnNewWave += OnNewWave;
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_1 = __this->get_spawner_9();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_2, __this, (intptr_t)((intptr_t)GameUI_OnNewWave_mE2137A0F0635C77DA267FA1878F19FE7464A44A1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Spawner_add_OnNewWave_mFF0EB133E316D529BB27242875992928BCCAD346(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::OnNewWave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_OnNewWave_mE2137A0F0635C77DA267FA1878F19FE7464A44A1 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, int32_t ___WaveNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E884DFBA63AABDD517EEF233A9BBB88E5427F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E95CBE0DF6BC8C85E9DEF17DB8CFF854861CAEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D47CB1F151C1F15C93693525397036478D69EC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93959F7E2EBF7DE9EE8EBDEFBC42CA5CCC0C18EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36439DD386C8E43E56442B1F20A32122A311A31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD32BB518070BFAB836D87E2CD15A4A9851EEA472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36070345E1BBE825940C76A43B5AD5F33F3FC62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC628212BD80D34BFD277B0B6DB3976FA45F497A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCE7C0A1AC714A9BFAB4654B551DE9898E58182B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAF3A19F572FBE73CBA5AEFA111615C03BE560A3);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// string[] numbers = { "һ", "��", "��", "��", "��" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral4E95CBE0DF6BC8C85E9DEF17DB8CFF854861CAEB);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4E95CBE0DF6BC8C85E9DEF17DB8CFF854861CAEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralFAF3A19F572FBE73CBA5AEFA111615C03BE560A3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFAF3A19F572FBE73CBA5AEFA111615C03BE560A3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteralDCE7C0A1AC714A9BFAB4654B551DE9898E58182B);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDCE7C0A1AC714A9BFAB4654B551DE9898E58182B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteralC36439DD386C8E43E56442B1F20A32122A311A31);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC36439DD386C8E43E56442B1F20A32122A311A31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteralD32BB518070BFAB836D87E2CD15A4A9851EEA472);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD32BB518070BFAB836D87E2CD15A4A9851EEA472);
		V_0 = L_5;
		// newWaveTitle.text = "�� " + numbers[WaveNumber - 1] + " ��������";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_newWaveTitle_7();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		int32_t L_8 = ___WaveNumber0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD36070345E1BBE825940C76A43B5AD5F33F3FC62, L_10, _stringLiteral93959F7E2EBF7DE9EE8EBDEFBC42CA5CCC0C18EE, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// string enemyCountString = ((spawner.waves[WaveNumber - 1].infinite) ? "Infinite" : spawner.waves[WaveNumber - 1].enemyCount+"");
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_12 = __this->get_spawner_9();
		WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* L_13 = L_12->get_waves_5();
		int32_t L_14 = ___WaveNumber0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		bool L_17 = L_16->get_infinite_0();
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_18 = __this->get_spawner_9();
		WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* L_19 = L_18->get_waves_5();
		int32_t L_20 = ___WaveNumber0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t* L_23 = L_22->get_address_of_enemyCount_1();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		String_t* L_25 = L_24;
		G_B2_0 = L_25;
		if (L_25)
		{
			G_B4_0 = L_25;
			goto IL_008d;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_008d;
	}

IL_0088:
	{
		G_B4_0 = _stringLiteralDC628212BD80D34BFD277B0B6DB3976FA45F497A;
	}

IL_008d:
	{
		V_1 = G_B4_0;
		// newWaveEnemyCount.text = "��������" + enemyCountString;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_newWaveEnemyCount_8();
		String_t* L_27 = V_1;
		String_t* L_28;
		L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5D47CB1F151C1F15C93693525397036478D69EC1, L_27, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_28);
		// StopCoroutine("AnimateNewWaveBanner");
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(__this, _stringLiteral22E884DFBA63AABDD517EEF233A9BBB88E5427F0, /*hidden argument*/NULL);
		// StartCoroutine("AnimateNewWaveBanner");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_29;
		L_29 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral22E884DFBA63AABDD517EEF233A9BBB88E5427F0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameUI::AnimateNewWaveBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameUI_AnimateNewWaveBanner_mD16AB28F76B3409847991D2584D48BDCACA86FFF (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * L_0 = (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 *)il2cpp_codegen_object_new(U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3_il2cpp_TypeInfo_var);
		U3CAnimateNewWaveBannerU3Ed__8__ctor_m8D644FA99126465AA20226708CAE00EB8E31B596(L_0, 0, /*hidden argument*/NULL);
		U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Start_m1CA9A7CB68A0628D1644C61551CDA8280104C4C4 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_OnGameOver_m6688D0FC79C8DEBA072E964163DDCFC7CCF18193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Player>().OnDeath += OnGameOver;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0;
		L_0 = Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)GameUI_OnGameOver_m6688D0FC79C8DEBA072E964163DDCFC7CCF18193_RuntimeMethod_var), /*hidden argument*/NULL);
		LivingEntity_add_OnDeath_mF5E016E644ED786A161EFAF3658433586AD614A9(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::OnGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_OnGameOver_m6688D0FC79C8DEBA072E964163DDCFC7CCF18193 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Fade(Color.clear, Color.black, 1));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = GameUI_Fade_m87777467863D619FB227866BD130F51513774183(__this, L_0, L_1, (1.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// gameOverUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_gameOverUI_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameUI::Fade(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameUI_Fade_m87777467863D619FB227866BD130F51513774183 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___from0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to1, float ___time2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * L_0 = (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 *)il2cpp_codegen_object_new(U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6_il2cpp_TypeInfo_var);
		U3CFadeU3Ed__11__ctor_m662E9684AD2E23B2812479684B238AAF46AE1D80(L_0, 0, /*hidden argument*/NULL);
		U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * L_2 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___from0;
		L_2->set_from_4(L_3);
		U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * L_4 = L_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___to1;
		L_4->set_to_5(L_5);
		U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * L_6 = L_4;
		float L_7 = ___time2;
		L_6->set_time_2(L_7);
		return L_6;
	}
}
// System.Void GameUI::StartNewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_StartNewGame_m4457F672788651636D3A7F0710FA81BD157B0B27 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Game");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI__ctor_mFD9EAD5759CDB73EA862B118656581AB9EEF3F38 (GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gun::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Start_m194FBAA8CBD166403436D16B94E8182F6A2414CC (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498_mF73C1EC9F143BEF52A848346AD8466ED7ADF015B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// muzzleFlash = GetComponent<MuzzleFlash>();
		MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * L_0;
		L_0 = Component_GetComponent_TisMuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498_mF73C1EC9F143BEF52A848346AD8466ED7ADF015B(__this, /*hidden argument*/Component_GetComponent_TisMuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498_mF73C1EC9F143BEF52A848346AD8466ED7ADF015B_RuntimeMethod_var);
		__this->set_muzzleFlash_18(L_0);
		// shotsRemainingInBurst = burstCount;
		int32_t L_1 = __this->get_burstCount_9();
		__this->set_shotsRemainingInBurst_21(L_1);
		// projectilesRemainingInMag = projectilesPerMag;
		int32_t L_2 = __this->get_projectilesPerMag_10();
		__this->set_projectilesRemainingInMag_22(L_2);
		// }
		return;
	}
}
// System.Void Gun::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_LateUpdate_mEB6CC76C2D1B3DFDAFDBF16E8417795A41091275 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = Vector3.SmoothDamp(transform.localPosition, Vector3.zero, ref recoilSmoothDampVelocity, recoilMoveSettleTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_recoilSmoothDampVelocity_24();
		float L_5 = __this->get_recoilMoveSettleTime_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_2, L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4, L_5, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_6, /*hidden argument*/NULL);
		// recoilAngle = Mathf.SmoothDamp(recoilAngle, 0, ref recoilRotmoothDampVelocity, recoilRotationSettleTime);
		float L_7 = __this->get_recoilAngle_26();
		float* L_8 = __this->get_address_of_recoilRotmoothDampVelocity_25();
		float L_9 = __this->get_recoilRotationSettleTime_15();
		float L_10;
		L_10 = Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652(L_7, (0.0f), (float*)L_8, L_9, /*hidden argument*/NULL);
		__this->set_recoilAngle_26(L_10);
		// transform.localEulerAngles = transform.localEulerAngles + Vector3.left * recoilAngle;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_15 = __this->get_recoilAngle_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_16, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_11, L_17, /*hidden argument*/NULL);
		// if (!isReloading && projectilesRemainingInMag == 0)
		bool L_18 = __this->get_isReloading_23();
		if (L_18)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_19 = __this->get_projectilesRemainingInMag_22();
		if (L_19)
		{
			goto IL_008f;
		}
	}
	{
		// Reload();
		Gun_Reload_m85A78900B11CE3924DCB5168E15E22B5AEEFA6AE(__this, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Gun::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Shoot_mBF898A288AE753B55835CACBDA1977CC28C3C5B0 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_m4FB7934BC3821DBC3CD8E6804CDB54B86CF9F925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!isReloading&&Time.time > nextShotTime&&projectilesRemainingInMag>0)
		bool L_0 = __this->get_isReloading_23();
		if (L_0)
		{
			goto IL_0177;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_nextShotTime_19();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_3 = __this->get_projectilesRemainingInMag_22();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0177;
		}
	}
	{
		// if (fireMode == FireMode.Burst)
		int32_t L_4 = __this->get_fireMode_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// if (shotsRemainingInBurst == 0) return;
		int32_t L_5 = __this->get_shotsRemainingInBurst_21();
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		// if (shotsRemainingInBurst == 0) return;
		return;
	}

IL_0039:
	{
		// shotsRemainingInBurst--;
		int32_t L_6 = __this->get_shotsRemainingInBurst_21();
		__this->set_shotsRemainingInBurst_21(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		// }
		goto IL_005b;
	}

IL_0049:
	{
		// else if (fireMode == FireMode.Single)
		int32_t L_7 = __this->get_fireMode_4();
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		// if (!triggerReleaseSinceLastShot) return;
		bool L_8 = __this->get_triggerReleaseSinceLastShot_20();
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		// if (!triggerReleaseSinceLastShot) return;
		return;
	}

IL_005b:
	{
		// for (int i = 0; i < projectileSpawn.Length; i++)
		V_0 = 0;
		goto IL_00c1;
	}

IL_005f:
	{
		// if (projectilesRemainingInMag == 0) break;
		int32_t L_9 = __this->get_projectilesRemainingInMag_22();
		if (!L_9)
		{
			goto IL_00cc;
		}
	}
	{
		// projectilesRemainingInMag--;
		int32_t L_10 = __this->get_projectilesRemainingInMag_22();
		__this->set_projectilesRemainingInMag_22(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		// nextShotTime = Time.time + msBetweenShots / 1000;
		float L_11;
		L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_12 = __this->get_msBetweenShots_7();
		__this->set_nextShotTime_19(((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)L_12/(float)(1000.0f))))));
		// Projectile newProjectile = Instantiate(projectile, projectileSpawn[i].position, projectileSpawn[i].rotation) as Projectile;
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_13 = __this->get_projectile_6();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_14 = __this->get_projectileSpawn_5();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_19 = __this->get_projectileSpawn_5();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_24;
		L_24 = Object_Instantiate_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_m4FB7934BC3821DBC3CD8E6804CDB54B86CF9F925(L_13, L_18, L_23, /*hidden argument*/Object_Instantiate_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_m4FB7934BC3821DBC3CD8E6804CDB54B86CF9F925_RuntimeMethod_var);
		// newProjectile.SetSpeed(muzzleVelocity);
		float L_25 = __this->get_muzzleVelocity_8();
		Projectile_SetSpeed_m5994AB7838F9D5D58FF8174D095923FD769E609C_inline(L_24, L_25, /*hidden argument*/NULL);
		// for (int i = 0; i < projectileSpawn.Length; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00c1:
	{
		// for (int i = 0; i < projectileSpawn.Length; i++)
		int32_t L_27 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_28 = __this->get_projectileSpawn_5();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_005f;
		}
	}

IL_00cc:
	{
		// Instantiate(shell, shellEjetion.position, shellEjetion.rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_shell_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_shellEjetion_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_shellEjetion_17();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_29, L_31, L_33, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// muzzleFlash.Activate();
		MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * L_35 = __this->get_muzzleFlash_18();
		MuzzleFlash_Activate_mD5EDBEB21C7D7D600D18D3C832C67D5A9AB3A6D8(L_35, /*hidden argument*/NULL);
		// transform.localPosition -= Vector3.forward * Random.Range(kickMinMax.x,kickMinMax.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = L_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_kickMinMax_12();
		float L_41 = L_40->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_kickMinMax_12();
		float L_43 = L_42->get_y_1();
		float L_44;
		L_44 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_41, L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_39, L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_38, L_45, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_37, L_46, /*hidden argument*/NULL);
		// recoilAngle += Random.Range(recoilAngleMinMax.x, recoilAngleMinMax.y);
		float L_47 = __this->get_recoilAngle_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_48 = __this->get_address_of_recoilAngleMinMax_13();
		float L_49 = L_48->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_50 = __this->get_address_of_recoilAngleMinMax_13();
		float L_51 = L_50->get_y_1();
		float L_52;
		L_52 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_49, L_51, /*hidden argument*/NULL);
		__this->set_recoilAngle_26(((float)il2cpp_codegen_add((float)L_47, (float)L_52)));
		// recoilAngle = Mathf.Clamp(recoilAngle, 0, 30);
		float L_53 = __this->get_recoilAngle_26();
		float L_54;
		L_54 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_53, (0.0f), (30.0f), /*hidden argument*/NULL);
		__this->set_recoilAngle_26(L_54);
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void Gun::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Reload_m85A78900B11CE3924DCB5168E15E22B5AEEFA6AE (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	{
		// if (!isReloading&&projectilesRemainingInMag!=projectilesPerMag) { StartCoroutine(AnimateReload());
		bool L_0 = __this->get_isReloading_23();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = __this->get_projectilesRemainingInMag_22();
		int32_t L_2 = __this->get_projectilesPerMag_10();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// if (!isReloading&&projectilesRemainingInMag!=projectilesPerMag) { StartCoroutine(AnimateReload());
		RuntimeObject* L_3;
		L_3 = Gun_AnimateReload_m606E13363A3BE7635098774D96C5368B71892EF5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Gun::AnimateReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gun_AnimateReload_m606E13363A3BE7635098774D96C5368B71892EF5 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * L_0 = (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D *)il2cpp_codegen_object_new(U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D_il2cpp_TypeInfo_var);
		U3CAnimateReloadU3Ed__28__ctor_m05EAECDB2B6D98B919C621D9ED6C661E6A25978B(L_0, 0, /*hidden argument*/NULL);
		U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Gun::OnTriggerHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_OnTriggerHold_m8FDEA28F39F1CB90CB58D068B0CEB1687E3E05FB (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	{
		// Shoot();
		Gun_Shoot_mBF898A288AE753B55835CACBDA1977CC28C3C5B0(__this, /*hidden argument*/NULL);
		// triggerReleaseSinceLastShot = false;
		__this->set_triggerReleaseSinceLastShot_20((bool)0);
		// }
		return;
	}
}
// System.Void Gun::OnTriggerRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_OnTriggerRelease_m8C7506FFEB8274F56F5E0345803B794A6050FB60 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	{
		// triggerReleaseSinceLastShot = true;
		__this->set_triggerReleaseSinceLastShot_20((bool)1);
		// shotsRemainingInBurst = burstCount;
		int32_t L_0 = __this->get_burstCount_9();
		__this->set_shotsRemainingInBurst_21(L_0);
		// }
		return;
	}
}
// System.Void Gun::Aim(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Aim_mA6E653CCDBE540D451AB6C158E1D48BDABEB8C02 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___aimPoint0, const RuntimeMethod* method)
{
	{
		// if(!isReloading)
		bool L_0 = __this->get_isReloading_23();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// transform.LookAt(aimPoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___aimPoint0;
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Gun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__ctor_mAB78FE575637ED35491FD9880E4B35EB48689718 (Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * __this, const RuntimeMethod* method)
{
	{
		// public float msBetweenShots = 100;
		__this->set_msBetweenShots_7((100.0f));
		// public float muzzleVelocity = 35;
		__this->set_muzzleVelocity_8((35.0f));
		// public float reloadTime = .3f;
		__this->set_reloadTime_11((0.300000012f));
		// public Vector2 kickMinMax=new Vector2(.05f,.2f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0500000007f), (0.200000003f), /*hidden argument*/NULL);
		__this->set_kickMinMax_12(L_0);
		// public Vector2 recoilAngleMinMax=new Vector2(3,5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (3.0f), (5.0f), /*hidden argument*/NULL);
		__this->set_recoilAngleMinMax_13(L_1);
		// public float recoilMoveSettleTime = .1f;
		__this->set_recoilMoveSettleTime_14((0.100000001f));
		// public float recoilRotationSettleTime=.1f;
		__this->set_recoilRotationSettleTime_15((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GunController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Start_mD91D9DC2711F090F2C648DC752BB37FE42CD767F (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GunController::EquipGun(Gun)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_EquipGun_mBD37A04510FDEB186EF59746A654F98933EF888C (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * ___gunToEquip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGun_tDD43AC55F07276B834B8A3A792545BD8A456066C_m4E93DC6D955D674D937C3AE0FA384A1176285BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (equippedGun != null)
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_0 = __this->get_equippedGun_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(equippedGun.gameObject);
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_2 = __this->get_equippedGun_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// equippedGun = Instantiate(gunToEquip, weaponHold.position, weaponHold.rotation) as Gun;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_4 = ___gunToEquip0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_weaponHold_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_weaponHold_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_9;
		L_9 = Object_Instantiate_TisGun_tDD43AC55F07276B834B8A3A792545BD8A456066C_m4E93DC6D955D674D937C3AE0FA384A1176285BCD(L_4, L_6, L_8, /*hidden argument*/Object_Instantiate_TisGun_tDD43AC55F07276B834B8A3A792545BD8A456066C_m4E93DC6D955D674D937C3AE0FA384A1176285BCD_RuntimeMethod_var);
		__this->set_equippedGun_6(L_9);
		// equippedGun.transform.parent = weaponHold;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_10 = __this->get_equippedGun_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_weaponHold_4();
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GunController::EquipGun(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_EquipGun_m98EFDA4917E482EEFC03ABEB97D25FB900D386F4 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, int32_t ___weaponIndex0, const RuntimeMethod* method)
{
	{
		// EquipGun(allGuns[weaponIndex]);
		GunU5BU5D_t2FF36F310317DAAEEC3FBC09D90CEBDC97BEB9AE* L_0 = __this->get_allGuns_5();
		int32_t L_1 = ___weaponIndex0;
		int32_t L_2 = L_1;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GunController_EquipGun_mBD37A04510FDEB186EF59746A654F98933EF888C(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GunController::OnTriggerHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_OnTriggerHold_m97FF77F36E718340FE9E098CB3CB9AAFAE313D7A (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (equippedGun != null)
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_0 = __this->get_equippedGun_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// equippedGun.OnTriggerHold();
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_2 = __this->get_equippedGun_6();
		Gun_OnTriggerHold_m8FDEA28F39F1CB90CB58D068B0CEB1687E3E05FB(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GunController::OnTriggerRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_OnTriggerRelease_m86293B37C733CA8D683A15957B74739F5E9C0DF5 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (equippedGun != null)
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_0 = __this->get_equippedGun_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// equippedGun.OnTriggerRelease();
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_2 = __this->get_equippedGun_6();
		Gun_OnTriggerRelease_m8C7506FFEB8274F56F5E0345803B794A6050FB60(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Single GunController::get_GunHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunController_get_GunHeight_m76E2D7FE0C5B93EBF3E4ACA392AE09D5F5770D43 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method)
{
	{
		// return weaponHold.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_weaponHold_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		return L_2;
	}
}
// System.Void GunController::Aim(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Aim_mEC28F199CE03484ED4B68F9C5B4A2ECED2259910 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___aimPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (equippedGun != null)
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_0 = __this->get_equippedGun_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// equippedGun.Aim(aimPoint);
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_2 = __this->get_equippedGun_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___aimPoint0;
		Gun_Aim_mA6E653CCDBE540D451AB6C158E1D48BDABEB8C02(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GunController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Reload_m9A649AEC1CCCCDFF75B8EFA8F93176C316563347 (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (equippedGun != null)
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_0 = __this->get_equippedGun_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// equippedGun.Reload();
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_2 = __this->get_equippedGun_6();
		Gun_Reload_m85A78900B11CE3924DCB5168E15E22B5AEEFA6AE(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GunController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController__ctor_m29B425A6EFCBC504432FBB4A2094DD8880E9C14A (GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LivingEntity::add_OnDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_add_OnDeath_mF5E016E644ED786A161EFAF3658433586AD614A9 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnDeath_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnDeath_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LivingEntity::remove_OnDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_remove_OnDeath_mF813080AD8A0D38555D6BA9C68655E4C24137170 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnDeath_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnDeath_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LivingEntity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_Start_m4D03E0D68AF8621DEA4FBC9C01A61346E27EBC27 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, const RuntimeMethod* method)
{
	{
		// health = startingHealth;
		float L_0 = __this->get_startingHealth_6();
		__this->set_health_4(L_0);
		// }
		return;
	}
}
// System.Void LivingEntity::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_Die_mAC2B4B2833D7999A8D6FB7246DE4172AA725D7CF (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dead = true;
		__this->set_dead_5((bool)1);
		// if (OnDeath != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnDeath_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// OnDeath();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnDeath_7();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// GameObject.Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LivingEntity::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_TakeDamage_mA382B45C6FFCC1C9B02BC2CCE213386EF4826537 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, float ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		float L_0 = __this->get_health_4();
		float L_1 = ___damage0;
		__this->set_health_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (health <= 0 && !dead)
		float L_2 = __this->get_health_4();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = __this->get_dead_5();
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Die();
		LivingEntity_Die_mAC2B4B2833D7999A8D6FB7246DE4172AA725D7CF(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void LivingEntity::TakeHit(System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity_TakeHit_mFF4473A85B5C2391D9613CE5F9179804A7F25ACD (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, float ___damage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPoint1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitDirection2, const RuntimeMethod* method)
{
	{
		// TakeDamage(damage);
		float L_0 = ___damage0;
		VirtActionInvoker1< float >::Invoke(7 /* System.Void LivingEntity::TakeDamage(System.Single) */, __this, L_0);
		// }
		return;
	}
}
// System.Void LivingEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivingEntity__ctor_m084033632DA6C4AEB9E4D4ABBEC174ED97657D80 (LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapGenerator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_Awake_m3FFBCFCBA88DF5C4CAF0C655CBA8AAABC49440D6 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGenerator_OnNewWave_mFB0BFE0B318B22A3CCB0B24522EFAA6C3F1FE0FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<Spawner>().OnNewWave += OnNewWave;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_0;
		L_0 = Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7(/*hidden argument*/Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_1, __this, (intptr_t)((intptr_t)MapGenerator_OnNewWave_mFB0BFE0B318B22A3CCB0B24522EFAA6C3F1FE0FC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Spawner_add_OnNewWave_mFF0EB133E316D529BB27242875992928BCCAD346(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::OnNewWave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_OnNewWave_mFB0BFE0B318B22A3CCB0B24522EFAA6C3F1FE0FC (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, int32_t ___waveNumber0, const RuntimeMethod* method)
{
	{
		// mapIndex = waveNumber - 1;
		int32_t L_0 = ___waveNumber0;
		__this->set_mapIndex_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// GenerateMap();
		MapGenerator_GenerateMap_m877A2DB92064271806C79B5DCDBF2AFCE2F6B28C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapGenerator::GenerateMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator_GenerateMap_m877A2DB92064271806C79B5DCDBF2AFCE2F6B28C (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725D5C07A55A26A7CAA126742EB48326B8FB30A7);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	String_t* V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_12 = NULL;
	int32_t V_13 = 0;
	Coord_tFC7948A515859998E0BB210D9F19E635E768E711  V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_17 = NULL;
	float V_18 = 0.0f;
	{
		// currentMap = maps[mapIndex];
		MapU5BU5D_tFC706DCEB2634975771F8E8B119537B76BA2A744* L_0 = __this->get_maps_4();
		int32_t L_1 = __this->get_mapIndex_5();
		int32_t L_2 = L_1;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_currentMap_18(L_3);
		// tileMap = new Transform[currentMap.mapSize.x, currentMap.mapSize.y];
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_4 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_5 = L_4->get_address_of_mapSize_0();
		int32_t L_6 = L_5->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_7 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_8 = L_7->get_address_of_mapSize_0();
		int32_t L_9 = L_8->get_y_1();
		il2cpp_array_size_t L_11[] = { (il2cpp_array_size_t)L_6, (il2cpp_array_size_t)L_9 };
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_10 = (TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14*)GenArrayNew(TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var, L_11);
		__this->set_tileMap_17(L_10);
		// System.Random prng = new System.Random(currentMap.seed);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_12 = __this->get_currentMap_18();
		int32_t L_13 = L_12->get_seed_2();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_14 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_14, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// allTileCoords = new List<Coord>();
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_15 = (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *)il2cpp_codegen_object_new(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC_il2cpp_TypeInfo_var);
		List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594(L_15, /*hidden argument*/List_1__ctor_m14E1EF3309E6CA920592E5FC7C6664152BB6C594_RuntimeMethod_var);
		__this->set_allTileCoords_14(L_15);
		// for (int x = 0; x < currentMap.mapSize.x; x++)
		V_7 = 0;
		goto IL_0098;
	}

IL_005f:
	{
		// for (int y = 0; y < currentMap.mapSize.y; y++)
		V_8 = 0;
		goto IL_007e;
	}

IL_0064:
	{
		// allTileCoords.Add(new Coord(x, y));
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_16 = __this->get_allTileCoords_14();
		int32_t L_17 = V_7;
		int32_t L_18 = V_8;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53((&L_19), L_17, L_18, /*hidden argument*/NULL);
		List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF(L_16, L_19, /*hidden argument*/List_1_Add_mAE222E5EE3BC5A9E9502E221EB25816386E8EBDF_RuntimeMethod_var);
		// for (int y = 0; y < currentMap.mapSize.y; y++)
		int32_t L_20 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007e:
	{
		// for (int y = 0; y < currentMap.mapSize.y; y++)
		int32_t L_21 = V_8;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_22 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_23 = L_22->get_address_of_mapSize_0();
		int32_t L_24 = L_23->get_y_1();
		if ((((int32_t)L_21) < ((int32_t)L_24)))
		{
			goto IL_0064;
		}
	}
	{
		// for (int x = 0; x < currentMap.mapSize.x; x++)
		int32_t L_25 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0098:
	{
		// for (int x = 0; x < currentMap.mapSize.x; x++)
		int32_t L_26 = V_7;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_27 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_28 = L_27->get_address_of_mapSize_0();
		int32_t L_29 = L_28->get_x_0();
		if ((((int32_t)L_26) < ((int32_t)L_29)))
		{
			goto IL_005f;
		}
	}
	{
		// shuffledTileCoords = new Queue<Coord>(Utility.ShuffleArray(allTileCoords.ToArray(), currentMap.seed));
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_30 = __this->get_allTileCoords_14();
		CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* L_31;
		L_31 = List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794(L_30, /*hidden argument*/List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794_RuntimeMethod_var);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_32 = __this->get_currentMap_18();
		int32_t L_33 = L_32->get_seed_2();
		CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* L_34;
		L_34 = Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486(L_31, L_33, /*hidden argument*/Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486_RuntimeMethod_var);
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_35 = (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *)il2cpp_codegen_object_new(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16_il2cpp_TypeInfo_var);
		Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44(L_35, (RuntimeObject*)(RuntimeObject*)L_34, /*hidden argument*/Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44_RuntimeMethod_var);
		__this->set_shuffledTileCoords_15(L_35);
		// string holderName = "Generated Map";
		V_1 = _stringLiteral725D5C07A55A26A7CAA126742EB48326B8FB30A7;
		// if (transform.Find(holderName))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		String_t* L_37 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_36, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		// DestroyImmediate(transform.Find(holderName).gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		String_t* L_41 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_40, L_41, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_43, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// Transform mapHolder = new GameObject(holderName).transform;
		String_t* L_44 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_45, L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		V_2 = L_46;
		// mapHolder.parent = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_47, L_48, /*hidden argument*/NULL);
		// for (int x = 0; x < currentMap.mapSize.x; x++)
		V_9 = 0;
		goto IL_01b9;
	}

IL_0121:
	{
		// for (int y = 0; y < currentMap.mapSize.y; y++)
		V_10 = 0;
		goto IL_019c;
	}

IL_0126:
	{
		// Vector3 tilePosition = CoordToPosition(x, y);
		int32_t L_49 = V_9;
		int32_t L_50 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = MapGenerator_CoordToPosition_mA867EA2640CB3C7FB368655608F36E451E6909CF(__this, L_49, L_50, /*hidden argument*/NULL);
		V_11 = L_51;
		// Transform newTile = Instantiate(tilePrefab, tilePosition, Quaternion.Euler(Vector3.right * 90)) as Transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = __this->get_tilePrefab_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_54, (90.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_52, L_53, L_56, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		V_12 = L_57;
		// newTile.localScale = Vector3.one * (1 - outlinePercent) * tileSize;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_60 = __this->get_outlinePercent_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_59, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_60)), /*hidden argument*/NULL);
		float L_62 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_61, L_62, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_58, L_63, /*hidden argument*/NULL);
		// newTile.parent = mapHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64 = V_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65 = V_2;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_64, L_65, /*hidden argument*/NULL);
		// tileMap[x, y] = newTile;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_66 = __this->get_tileMap_17();
		int32_t L_67 = V_9;
		int32_t L_68 = V_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69 = V_12;
		(L_66)->SetAtUnchecked(L_67, L_68, L_69);
		// for (int y = 0; y < currentMap.mapSize.y; y++)
		int32_t L_70 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_019c:
	{
		// for (int y = 0; y < currentMap.mapSize.y; y++)
		int32_t L_71 = V_10;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_72 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_73 = L_72->get_address_of_mapSize_0();
		int32_t L_74 = L_73->get_y_1();
		if ((((int32_t)L_71) < ((int32_t)L_74)))
		{
			goto IL_0126;
		}
	}
	{
		// for (int x = 0; x < currentMap.mapSize.x; x++)
		int32_t L_75 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01b9:
	{
		// for (int x = 0; x < currentMap.mapSize.x; x++)
		int32_t L_76 = V_9;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_77 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_78 = L_77->get_address_of_mapSize_0();
		int32_t L_79 = L_78->get_x_0();
		if ((((int32_t)L_76) < ((int32_t)L_79)))
		{
			goto IL_0121;
		}
	}
	{
		// bool[,] obstacleMap = new bool[(int)currentMap.mapSize.x, (int)currentMap.mapSize.y];
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_80 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_81 = L_80->get_address_of_mapSize_0();
		int32_t L_82 = L_81->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_83 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_84 = L_83->get_address_of_mapSize_0();
		int32_t L_85 = L_84->get_y_1();
		il2cpp_array_size_t L_87[] = { (il2cpp_array_size_t)L_82, (il2cpp_array_size_t)L_85 };
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_86 = (BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4*)GenArrayNew(BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var, L_87);
		V_3 = L_86;
		// int obstacleCount = (int)(currentMap.mapSize.x * currentMap.mapSize.y * currentMap.obstaclePercent);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_88 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_89 = L_88->get_address_of_mapSize_0();
		int32_t L_90 = L_89->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_91 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_92 = L_91->get_address_of_mapSize_0();
		int32_t L_93 = L_92->get_y_1();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_94 = __this->get_currentMap_18();
		float L_95 = L_94->get_obstaclePercent_1();
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_90, (int32_t)L_93)))), (float)L_95)));
		// int currentObstacleCount = 0;
		V_5 = 0;
		// List<Coord> allOpenCoords = new List<Coord>(allTileCoords);
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_96 = __this->get_allTileCoords_14();
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_97 = (List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC *)il2cpp_codegen_object_new(List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC_il2cpp_TypeInfo_var);
		List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4(L_97, L_96, /*hidden argument*/List_1__ctor_mEDE316C7C96DA1970311EEC090E6676353464BA4_RuntimeMethod_var);
		V_6 = L_97;
		// for (int i = 0; i < obstacleCount; i++)
		V_13 = 0;
		goto IL_03ae;
	}

IL_023f:
	{
		// Coord randomCoord = GetRandomCoord();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_98;
		L_98 = MapGenerator_GetRandomCoord_mA5A31B226F1BDCE38179068D204E0C3770986BD7(__this, /*hidden argument*/NULL);
		V_14 = L_98;
		// obstacleMap[randomCoord.x, randomCoord.y] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_99 = V_3;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_100 = V_14;
		int32_t L_101 = L_100.get_x_0();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_102 = V_14;
		int32_t L_103 = L_102.get_y_1();
		(L_99)->SetAtUnchecked(L_101, L_103, (bool)1);
		// currentObstacleCount++;
		int32_t L_104 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		// if (randomCoord != currentMap.mapCentre && MapIsFullyAccessible(obstacleMap, currentObstacleCount))
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_105 = V_14;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_106 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_107;
		L_107 = Map_get_mapCentre_m92FEC0846F67CED7363759E792D00C0F0A5078F8(L_106, /*hidden argument*/NULL);
		bool L_108;
		L_108 = Coord_op_Inequality_mAD830EE8F693C21EEDBB8D4CE9A2439106F806D4(L_105, L_107, /*hidden argument*/NULL);
		if (!L_108)
		{
			goto IL_038d;
		}
	}
	{
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_109 = V_3;
		int32_t L_110 = V_5;
		bool L_111;
		L_111 = MapGenerator_MapIsFullyAccessible_m621BB67DAFCBF151C8DC6360CAFB4A89D5362E2C(__this, L_109, L_110, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_038d;
		}
	}
	{
		// float obstacleHeight = Mathf.Lerp(currentMap.minObstacleHeight, currentMap.maxObstacleHeight, (float)prng.NextDouble());
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_112 = __this->get_currentMap_18();
		float L_113 = L_112->get_minObstacleHeight_3();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_114 = __this->get_currentMap_18();
		float L_115 = L_114->get_maxObstacleHeight_4();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_116 = V_0;
		double L_117;
		L_117 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_116);
		float L_118;
		L_118 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_113, L_115, ((float)((float)L_117)), /*hidden argument*/NULL);
		V_15 = L_118;
		// Vector3 obstaclePosition = CoordToPosition(randomCoord.x, randomCoord.y);
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_119 = V_14;
		int32_t L_120 = L_119.get_x_0();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_121 = V_14;
		int32_t L_122 = L_121.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = MapGenerator_CoordToPosition_mA867EA2640CB3C7FB368655608F36E451E6909CF(__this, L_120, L_122, /*hidden argument*/NULL);
		V_16 = L_123;
		// Transform newObstacle = Instantiate(obstaclePrefab, obstaclePosition + Vector3.up * obstacleHeight / 2, Quaternion.identity) as Transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124 = __this->get_obstaclePrefab_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = V_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126;
		L_126 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_127 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		L_128 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_126, L_127, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		L_129 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_128, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130;
		L_130 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_125, L_129, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_131;
		L_131 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_132;
		L_132 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_124, L_130, L_131, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// newObstacle.parent = mapHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_133 = L_132;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_134 = V_2;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_133, L_134, /*hidden argument*/NULL);
		// newObstacle.localScale = new Vector3((1 - outlinePercent) * tileSize, obstacleHeight, (1 - outlinePercent) * tileSize);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_135 = L_133;
		float L_136 = __this->get_outlinePercent_12();
		float L_137 = __this->get_tileSize_13();
		float L_138 = V_15;
		float L_139 = __this->get_outlinePercent_12();
		float L_140 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_141), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_136)), (float)L_137)), L_138, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_139)), (float)L_140)), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_135, L_141, /*hidden argument*/NULL);
		// Renderer obstacleRenderer = newObstacle.GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_142;
		L_142 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_135, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		// Material obstacleMaterial = new Material(obstacleRenderer.sharedMaterial);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_143 = L_142;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_144;
		L_144 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_143, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_145 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_145, L_144, /*hidden argument*/NULL);
		V_17 = L_145;
		// float colourPercent = randomCoord.y / (float)currentMap.mapSize.y;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_146 = V_14;
		int32_t L_147 = L_146.get_y_1();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_148 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_149 = L_148->get_address_of_mapSize_0();
		int32_t L_150 = L_149->get_y_1();
		V_18 = ((float)((float)((float)((float)L_147))/(float)((float)((float)L_150))));
		// obstacleMaterial.color = Color.Lerp(currentMap.foregroundColour, currentMap.backgroundColour, colourPercent);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_151 = V_17;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_152 = __this->get_currentMap_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_153 = L_152->get_foregroundColour_5();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_154 = __this->get_currentMap_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_155 = L_154->get_backgroundColour_6();
		float L_156 = V_18;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_157;
		L_157 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_153, L_155, L_156, /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_151, L_157, /*hidden argument*/NULL);
		// obstacleRenderer.sharedMaterial = obstacleMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_158 = V_17;
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_143, L_158, /*hidden argument*/NULL);
		// allOpenCoords.Remove(randomCoord);
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_159 = V_6;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_160 = V_14;
		bool L_161;
		L_161 = List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD(L_159, L_160, /*hidden argument*/List_1_Remove_mA5711745B4ED257F8B45247322F28B07E33699FD_RuntimeMethod_var);
		// }
		goto IL_03a8;
	}

IL_038d:
	{
		// obstacleMap[randomCoord.x, randomCoord.y] = false;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_162 = V_3;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_163 = V_14;
		int32_t L_164 = L_163.get_x_0();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_165 = V_14;
		int32_t L_166 = L_165.get_y_1();
		(L_162)->SetAtUnchecked(L_164, L_166, (bool)0);
		// currentObstacleCount--;
		int32_t L_167 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)1));
	}

IL_03a8:
	{
		// for (int i = 0; i < obstacleCount; i++)
		int32_t L_168 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1));
	}

IL_03ae:
	{
		// for (int i = 0; i < obstacleCount; i++)
		int32_t L_169 = V_13;
		int32_t L_170 = V_4;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_023f;
		}
	}
	{
		// shuffledOpenTileCoords = new Queue<Coord>(Utility.ShuffleArray(allOpenCoords.ToArray(), currentMap.seed));
		List_1_t3D6579FFDE348C9894E12E9C143F729A91A965DC * L_171 = V_6;
		CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* L_172;
		L_172 = List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794(L_171, /*hidden argument*/List_1_ToArray_m7D686F56CA6B585A8CCB62DBF98A7A1CAE950794_RuntimeMethod_var);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_173 = __this->get_currentMap_18();
		int32_t L_174 = L_173->get_seed_2();
		CoordU5BU5D_t80F00DDE1067C22E4DF2B06D91BCD2E9A3082584* L_175;
		L_175 = Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486(L_172, L_174, /*hidden argument*/Utility_ShuffleArray_TisCoord_tFC7948A515859998E0BB210D9F19E635E768E711_mCDF5C84E86110C791B7823EE7CB0983155E39486_RuntimeMethod_var);
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_176 = (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *)il2cpp_codegen_object_new(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16_il2cpp_TypeInfo_var);
		Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44(L_176, (RuntimeObject*)(RuntimeObject*)L_175, /*hidden argument*/Queue_1__ctor_m93101AE8E3FB9E1EBAB35920814C93B3ED466B44_RuntimeMethod_var);
		__this->set_shuffledOpenTileCoords_16(L_176);
		// Transform maskLeft = Instantiate(navmeshMaskPrefab, Vector3.left * (currentMap.mapSize.x + maxMapSize.x) / 4f * tileSize, Quaternion.identity) as Transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_177 = __this->get_navmeshMaskPrefab_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_178;
		L_178 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_179 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_180 = L_179->get_address_of_mapSize_0();
		int32_t L_181 = L_180->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_182 = __this->get_address_of_maxMapSize_11();
		float L_183 = L_182->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_184;
		L_184 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_178, ((float)il2cpp_codegen_add((float)((float)((float)L_181)), (float)L_183)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		L_185 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_184, (4.0f), /*hidden argument*/NULL);
		float L_186 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187;
		L_187 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_185, L_186, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_188;
		L_188 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_189;
		L_189 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_177, L_187, L_188, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// maskLeft.parent = mapHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_190 = L_189;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_191 = V_2;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_190, L_191, /*hidden argument*/NULL);
		// maskLeft.localScale = new Vector3((maxMapSize.x - currentMap.mapSize.x) / 2f, 1, currentMap.mapSize.y) * tileSize;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_192 = __this->get_address_of_maxMapSize_11();
		float L_193 = L_192->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_194 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_195 = L_194->get_address_of_mapSize_0();
		int32_t L_196 = L_195->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_197 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_198 = L_197->get_address_of_mapSize_0();
		int32_t L_199 = L_198->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200;
		memset((&L_200), 0, sizeof(L_200));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_200), ((float)((float)((float)il2cpp_codegen_subtract((float)L_193, (float)((float)((float)L_196))))/(float)(2.0f))), (1.0f), ((float)((float)L_199)), /*hidden argument*/NULL);
		float L_201 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202;
		L_202 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_200, L_201, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_190, L_202, /*hidden argument*/NULL);
		// Transform maskRight = Instantiate(navmeshMaskPrefab, Vector3.right * (currentMap.mapSize.x + maxMapSize.x) / 4f * tileSize, Quaternion.identity) as Transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_203 = __this->get_navmeshMaskPrefab_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204;
		L_204 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_205 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_206 = L_205->get_address_of_mapSize_0();
		int32_t L_207 = L_206->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_208 = __this->get_address_of_maxMapSize_11();
		float L_209 = L_208->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_210;
		L_210 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_204, ((float)il2cpp_codegen_add((float)((float)((float)L_207)), (float)L_209)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_211;
		L_211 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_210, (4.0f), /*hidden argument*/NULL);
		float L_212 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_213;
		L_213 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_211, L_212, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_214;
		L_214 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_215;
		L_215 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_203, L_213, L_214, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// maskRight.parent = mapHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_216 = L_215;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_217 = V_2;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_216, L_217, /*hidden argument*/NULL);
		// maskRight.localScale = new Vector3((maxMapSize.x - currentMap.mapSize.x) / 2f, 1, currentMap.mapSize.y) * tileSize;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_218 = __this->get_address_of_maxMapSize_11();
		float L_219 = L_218->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_220 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_221 = L_220->get_address_of_mapSize_0();
		int32_t L_222 = L_221->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_223 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_224 = L_223->get_address_of_mapSize_0();
		int32_t L_225 = L_224->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_226;
		memset((&L_226), 0, sizeof(L_226));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_226), ((float)((float)((float)il2cpp_codegen_subtract((float)L_219, (float)((float)((float)L_222))))/(float)(2.0f))), (1.0f), ((float)((float)L_225)), /*hidden argument*/NULL);
		float L_227 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_228;
		L_228 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_226, L_227, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_216, L_228, /*hidden argument*/NULL);
		// Transform maskTop = Instantiate(navmeshMaskPrefab, Vector3.forward * (currentMap.mapSize.y + maxMapSize.y) / 4f * tileSize, Quaternion.identity) as Transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_229 = __this->get_navmeshMaskPrefab_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_230;
		L_230 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_231 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_232 = L_231->get_address_of_mapSize_0();
		int32_t L_233 = L_232->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_234 = __this->get_address_of_maxMapSize_11();
		float L_235 = L_234->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_236;
		L_236 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_230, ((float)il2cpp_codegen_add((float)((float)((float)L_233)), (float)L_235)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_237;
		L_237 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_236, (4.0f), /*hidden argument*/NULL);
		float L_238 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_239;
		L_239 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_237, L_238, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_240;
		L_240 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_241;
		L_241 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_229, L_239, L_240, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// maskTop.parent = mapHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_242 = L_241;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_243 = V_2;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_242, L_243, /*hidden argument*/NULL);
		// maskTop.localScale = new Vector3(maxMapSize.x, 1, (maxMapSize.y - currentMap.mapSize.y) / 2f) * tileSize;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_244 = __this->get_address_of_maxMapSize_11();
		float L_245 = L_244->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_246 = __this->get_address_of_maxMapSize_11();
		float L_247 = L_246->get_y_1();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_248 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_249 = L_248->get_address_of_mapSize_0();
		int32_t L_250 = L_249->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_251;
		memset((&L_251), 0, sizeof(L_251));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_251), L_245, (1.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)L_247, (float)((float)((float)L_250))))/(float)(2.0f))), /*hidden argument*/NULL);
		float L_252 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_253;
		L_253 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_251, L_252, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_242, L_253, /*hidden argument*/NULL);
		// Transform maskBottom = Instantiate(navmeshMaskPrefab, Vector3.back * (currentMap.mapSize.y + maxMapSize.y) / 4f * tileSize, Quaternion.identity) as Transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_254 = __this->get_navmeshMaskPrefab_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_255;
		L_255 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_256 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_257 = L_256->get_address_of_mapSize_0();
		int32_t L_258 = L_257->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_259 = __this->get_address_of_maxMapSize_11();
		float L_260 = L_259->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_261;
		L_261 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_255, ((float)il2cpp_codegen_add((float)((float)((float)L_258)), (float)L_260)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_262;
		L_262 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_261, (4.0f), /*hidden argument*/NULL);
		float L_263 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_264;
		L_264 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_262, L_263, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_265;
		L_265 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_266;
		L_266 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_254, L_264, L_265, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// maskBottom.parent = mapHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_267 = L_266;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_268 = V_2;
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_267, L_268, /*hidden argument*/NULL);
		// maskBottom.localScale = new Vector3(maxMapSize.x, 1, (maxMapSize.y - currentMap.mapSize.y) / 2f) * tileSize;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_269 = __this->get_address_of_maxMapSize_11();
		float L_270 = L_269->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_271 = __this->get_address_of_maxMapSize_11();
		float L_272 = L_271->get_y_1();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_273 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_274 = L_273->get_address_of_mapSize_0();
		int32_t L_275 = L_274->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_276;
		memset((&L_276), 0, sizeof(L_276));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_276), L_270, (1.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)L_272, (float)((float)((float)L_275))))/(float)(2.0f))), /*hidden argument*/NULL);
		float L_277 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_278;
		L_278 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_276, L_277, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_267, L_278, /*hidden argument*/NULL);
		// navmeshFloor.localScale = new Vector3(maxMapSize.x, maxMapSize.y) * tileSize;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_279 = __this->get_navmeshFloor_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_280 = __this->get_address_of_maxMapSize_11();
		float L_281 = L_280->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_282 = __this->get_address_of_maxMapSize_11();
		float L_283 = L_282->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_284;
		memset((&L_284), 0, sizeof(L_284));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_284), L_281, L_283, /*hidden argument*/NULL);
		float L_285 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_286;
		L_286 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_284, L_285, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_279, L_286, /*hidden argument*/NULL);
		// mapFloor.localScale = new Vector3(currentMap.mapSize.x * tileSize, currentMap.mapSize.y * tileSize);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_287 = __this->get_mapFloor_8();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_288 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_289 = L_288->get_address_of_mapSize_0();
		int32_t L_290 = L_289->get_x_0();
		float L_291 = __this->get_tileSize_13();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_292 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_293 = L_292->get_address_of_mapSize_0();
		int32_t L_294 = L_293->get_y_1();
		float L_295 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_296;
		memset((&L_296), 0, sizeof(L_296));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_296), ((float)il2cpp_codegen_multiply((float)((float)((float)L_290)), (float)L_291)), ((float)il2cpp_codegen_multiply((float)((float)((float)L_294)), (float)L_295)), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_287, L_296, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean MapGenerator::MapIsFullyAccessible(System.Boolean[0...,0...],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapGenerator_MapIsFullyAccessible_m621BB67DAFCBF151C8DC6360CAFB4A89D5362E2C (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* ___obstacleMap0, int32_t ___currentObstacleCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* V_0 = NULL;
	Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * V_1 = NULL;
	int32_t V_2 = 0;
	Coord_tFC7948A515859998E0BB210D9F19E635E768E711  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// bool[,] mapFlags = new bool[obstacleMap.GetLength(0), obstacleMap.GetLength(1)];
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_0 = ___obstacleMap0;
		int32_t L_1;
		L_1 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_2 = ___obstacleMap0;
		int32_t L_3;
		L_3 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_3 };
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_4 = (BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4*)GenArrayNew(BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4_il2cpp_TypeInfo_var, L_5);
		V_0 = L_4;
		// Queue<Coord> queue = new Queue<Coord>();
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_6 = (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 *)il2cpp_codegen_object_new(Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16_il2cpp_TypeInfo_var);
		Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B(L_6, /*hidden argument*/Queue_1__ctor_mA0A487EF6FC001408233AFB16F47486127D8A71B_RuntimeMethod_var);
		V_1 = L_6;
		// queue.Enqueue(currentMap.mapCentre);
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_7 = V_1;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_8 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_9;
		L_9 = Map_get_mapCentre_m92FEC0846F67CED7363759E792D00C0F0A5078F8(L_8, /*hidden argument*/NULL);
		Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E(L_7, L_9, /*hidden argument*/Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		// mapFlags[currentMap.mapCentre.x, currentMap.mapCentre.y] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_10 = V_0;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_11 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_12;
		L_12 = Map_get_mapCentre_m92FEC0846F67CED7363759E792D00C0F0A5078F8(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12.get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_14 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_15;
		L_15 = Map_get_mapCentre_m92FEC0846F67CED7363759E792D00C0F0A5078F8(L_14, /*hidden argument*/NULL);
		int32_t L_16 = L_15.get_y_1();
		(L_10)->SetAtUnchecked(L_13, L_16, (bool)1);
		// int accessibleTileCount = 1;
		V_2 = 1;
		goto IL_00fa;
	}

IL_0059:
	{
		// Coord tile = queue.Dequeue();
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_17 = V_1;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_18;
		L_18 = Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED(L_17, /*hidden argument*/Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var);
		V_3 = L_18;
		// for (int x = -1; x <= 1; x++)
		V_4 = (-1);
		goto IL_00f2;
	}

IL_0068:
	{
		// for (int y = -1; y <= 1; y++)
		V_5 = (-1);
		goto IL_00e7;
	}

IL_006d:
	{
		// int neighbourX = tile.x + x;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_19 = V_3;
		int32_t L_20 = L_19.get_x_0();
		int32_t L_21 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21));
		// int neighbourY = tile.y + y;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_22 = V_3;
		int32_t L_23 = L_22.get_y_1();
		int32_t L_24 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		// if (x == 0 || y == 0)
		int32_t L_25 = V_4;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_26 = V_5;
		if (L_26)
		{
			goto IL_00e1;
		}
	}

IL_008b:
	{
		// if (neighbourX >= 0 && neighbourX < obstacleMap.GetLength(0) && neighbourY >= 0 && neighbourY < obstacleMap.GetLength(1))
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_28 = V_6;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_29 = ___obstacleMap0;
		int32_t L_30;
		L_30 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_29, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_28) >= ((int32_t)L_30)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_31 = V_7;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_32 = V_7;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_33 = ___obstacleMap0;
		int32_t L_34;
		L_34 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_33, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_32) >= ((int32_t)L_34)))
		{
			goto IL_00e1;
		}
	}
	{
		// if (!mapFlags[neighbourX, neighbourY] && !obstacleMap[neighbourX, neighbourY])
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_7;
		bool L_38;
		L_38 = (L_35)->GetAtUnchecked(L_36, L_37);
		if (L_38)
		{
			goto IL_00e1;
		}
	}
	{
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_39 = ___obstacleMap0;
		int32_t L_40 = V_6;
		int32_t L_41 = V_7;
		bool L_42;
		L_42 = (L_39)->GetAtUnchecked(L_40, L_41);
		if (L_42)
		{
			goto IL_00e1;
		}
	}
	{
		// mapFlags[neighbourX, neighbourY] = true;
		BooleanU5BU2CU5D_t75EC6BD827E1CC43B9F2D7F7BC761DF072D990C4* L_43 = V_0;
		int32_t L_44 = V_6;
		int32_t L_45 = V_7;
		(L_43)->SetAtUnchecked(L_44, L_45, (bool)1);
		// queue.Enqueue(new Coord(neighbourX, neighbourY));
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_46 = V_1;
		int32_t L_47 = V_6;
		int32_t L_48 = V_7;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53((&L_49), L_47, L_48, /*hidden argument*/NULL);
		Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E(L_46, L_49, /*hidden argument*/Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		// accessibleTileCount++;
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00e1:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e7:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) <= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00f2:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_54 = V_4;
		if ((((int32_t)L_54) <= ((int32_t)1)))
		{
			goto IL_0068;
		}
	}

IL_00fa:
	{
		// while (queue.Count > 0)
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_55 = V_1;
		int32_t L_56;
		L_56 = Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_inline(L_55, /*hidden argument*/Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_RuntimeMethod_var);
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// int targetAccessibleTileCount = (int)(currentMap.mapSize.x * currentMap.mapSize.y - currentObstacleCount);
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_57 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_58 = L_57->get_address_of_mapSize_0();
		int32_t L_59 = L_58->get_x_0();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_60 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_61 = L_60->get_address_of_mapSize_0();
		int32_t L_62 = L_61->get_y_1();
		int32_t L_63 = ___currentObstacleCount1;
		// return targetAccessibleTileCount == accessibleTileCount;
		int32_t L_64 = V_2;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)L_62)), (int32_t)L_63))) == ((int32_t)L_64))? 1 : 0);
	}
}
// UnityEngine.Vector3 MapGenerator::CoordToPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MapGenerator_CoordToPosition_mA867EA2640CB3C7FB368655608F36E451E6909CF (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// return new Vector3(-currentMap.mapSize.x / 2f + 0.5f + x, 0, -currentMap.mapSize.y / 2f + 0.5f + y) * tileSize;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_0 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_1 = L_0->get_address_of_mapSize_0();
		int32_t L_2 = L_1->get_x_0();
		int32_t L_3 = ___x0;
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_4 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_5 = L_4->get_address_of_mapSize_0();
		int32_t L_6 = L_5->get_y_1();
		int32_t L_7 = ___y1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)((float)((float)((float)((-L_2))))/(float)(2.0f))), (float)(0.5f))), (float)((float)((float)L_3)))), (0.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)((float)((float)((float)((-L_6))))/(float)(2.0f))), (float)(0.5f))), (float)((float)((float)L_7)))), /*hidden argument*/NULL);
		float L_9 = __this->get_tileSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Transform MapGenerator::GetTileFromPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MapGenerator_GetTileFromPosition_m741CB6BFC9BEFA6591295B22C27B20E6EBDF8540 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int x = Mathf.RoundToInt(position.x / tileSize + (currentMap.mapSize.x - 1) / 2f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		float L_1 = L_0.get_x_2();
		float L_2 = __this->get_tileSize_13();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_3 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_4 = L_3->get_address_of_mapSize_0();
		int32_t L_5 = L_4->get_x_0();
		int32_t L_6;
		L_6 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_add((float)((float)((float)L_1/(float)L_2)), (float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))/(float)(2.0f))))), /*hidden argument*/NULL);
		V_0 = L_6;
		// int y = Mathf.RoundToInt(position.z / tileSize + (currentMap.mapSize.y - 1) / 2f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___position0;
		float L_8 = L_7.get_z_4();
		float L_9 = __this->get_tileSize_13();
		Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * L_10 = __this->get_currentMap_18();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_11 = L_10->get_address_of_mapSize_0();
		int32_t L_12 = L_11->get_y_1();
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_add((float)((float)((float)L_8/(float)L_9)), (float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))))/(float)(2.0f))))), /*hidden argument*/NULL);
		V_1 = L_13;
		// x = Mathf.Clamp(x, 0, tileMap.GetLength(0) - 1);
		int32_t L_14 = V_0;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_15 = __this->get_tileMap_17();
		int32_t L_16;
		L_16 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_15, 0, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_14, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_17;
		// y = Mathf.Clamp(y, 0, tileMap.GetLength(1) - 1);
		int32_t L_18 = V_1;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_19 = __this->get_tileMap_17();
		int32_t L_20;
		L_20 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_19, 1, /*hidden argument*/NULL);
		int32_t L_21;
		L_21 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_18, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_21;
		// return tileMap[x, y];
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_22 = __this->get_tileMap_17();
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = (L_22)->GetAtUnchecked(L_23, L_24);
		return L_25;
	}
}
// MapGenerator/Coord MapGenerator::GetRandomCoord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coord_tFC7948A515859998E0BB210D9F19E635E768E711  MapGenerator_GetRandomCoord_mA5A31B226F1BDCE38179068D204E0C3770986BD7 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Coord_tFC7948A515859998E0BB210D9F19E635E768E711  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Coord randomCoord = shuffledTileCoords.Dequeue();
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_0 = __this->get_shuffledTileCoords_15();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_1;
		L_1 = Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED(L_0, /*hidden argument*/Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var);
		V_0 = L_1;
		// shuffledTileCoords.Enqueue(randomCoord);
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_2 = __this->get_shuffledTileCoords_15();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_3 = V_0;
		Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		// return randomCoord;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Transform MapGenerator::GetRandomOpenTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MapGenerator_GetRandomOpenTile_mDA9F0D743427557C894A51A2598CBFF6385B1F14 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Coord_tFC7948A515859998E0BB210D9F19E635E768E711  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Coord randomCoord = shuffledOpenTileCoords.Dequeue();
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_0 = __this->get_shuffledOpenTileCoords_16();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_1;
		L_1 = Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED(L_0, /*hidden argument*/Queue_1_Dequeue_m28B16DD2C08D87AD6960BBEDAFDB104CE21D13ED_RuntimeMethod_var);
		V_0 = L_1;
		// shuffledOpenTileCoords.Enqueue(randomCoord);
		Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * L_2 = __this->get_shuffledOpenTileCoords_16();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_3 = V_0;
		Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m891B4D2D60F5AB4BD3CBFC29840D7A34CE2B2C7E_RuntimeMethod_var);
		// return tileMap[randomCoord.x, randomCoord.y];
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_4 = __this->get_tileMap_17();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_5 = V_0;
		int32_t L_6 = L_5.get_x_0();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_7 = V_0;
		int32_t L_8 = L_7.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = (L_4)->GetAtUnchecked(L_6, L_8);
		return L_9;
	}
}
// System.Void MapGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGenerator__ctor_mB9C58913280E7537C3EB6A1DACEDE418B41DFE01 (MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MuzzleFlash::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuzzleFlash_Start_mB35DEB222F5FBA49D7EC3387F6D65FAFB2187A6C (MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * __this, const RuntimeMethod* method)
{
	{
		// Deactivate();
		MuzzleFlash_Deactivate_m9994E69A423E910358F7354399CF2D98BED84945(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MuzzleFlash::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuzzleFlash_Activate_mD5EDBEB21C7D7D600D18D3C832C67D5A9AB3A6D8 (MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// flashHolder.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_flashHolder_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// int flashSpriteIndex = Random.Range(0, flashSprites.Length);
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = __this->get_flashSprites_5();
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = 0; i < spriteRenderers.Length ; i++)
		V_1 = 0;
		goto IL_0038;
	}

IL_001f:
	{
		// spriteRenderers[i].sprite = flashSprites[flashSpriteIndex];
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_3 = __this->get_spriteRenderers_6();
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_7 = __this->get_flashSprites_5();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < spriteRenderers.Length ; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < spriteRenderers.Length ; i++)
		int32_t L_12 = V_1;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_13 = __this->get_spriteRenderers_6();
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		// Invoke("Deactivate", flashTime);
		float L_14 = __this->get_flashTime_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral607C6077E36406D8A8A0E09E6751FDB0C5DEE673, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MuzzleFlash::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuzzleFlash_Deactivate_m9994E69A423E910358F7354399CF2D98BED84945 (MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * __this, const RuntimeMethod* method)
{
	{
		// flashHolder.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_flashHolder_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MuzzleFlash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MuzzleFlash__ctor_m6E798D041DF14CE05BCA11D78E2E7A0195168604 (MuzzleFlash_tA43EE949DB148ACED2795A3045AEA823B03F9498 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		LivingEntity_Start_m4D03E0D68AF8621DEA4FBC9C01A61346E27EBC27(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81_m5B89132790F23A87059325654CB6F4186502E9D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_OnNewWave_m950250E871D4D369787B52B5947E8AA1D7B8087C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<PlayerController>();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424(__this, /*hidden argument*/Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		__this->set_controller_11(L_0);
		// gunController = GetComponent<GunController>();
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_1;
		L_1 = Component_GetComponent_TisGunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81_m5B89132790F23A87059325654CB6F4186502E9D5(__this, /*hidden argument*/Component_GetComponent_TisGunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81_m5B89132790F23A87059325654CB6F4186502E9D5_RuntimeMethod_var);
		__this->set_gunController_12(L_1);
		// viewCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_viewCamera_10(L_2);
		// FindObjectOfType<Spawner>().OnNewWave += OnNewWave;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_3;
		L_3 = Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7(/*hidden argument*/Object_FindObjectOfType_TisSpawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_mA0D2B537815744CE2C1C0A21C6BD2D361060C8D7_RuntimeMethod_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_4 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_4, __this, (intptr_t)((intptr_t)Player_OnNewWave_m950250E871D4D369787B52B5947E8AA1D7B8087C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Spawner_add_OnNewWave_mFF0EB133E316D529BB27242875992928BCCAD346(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnNewWave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnNewWave_m950250E871D4D369787B52B5947E8AA1D7B8087C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___waveNumber0, const RuntimeMethod* method)
{
	{
		// health = startingHealth;
		float L_0 = ((LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 *)__this)->get_startingHealth_6();
		((LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 *)__this)->set_health_4(L_0);
		// gunController.EquipGun(waveNumber - 1);
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_1 = __this->get_gunController_12();
		int32_t L_2 = ___waveNumber0;
		GunController_EquipGun_m98EFDA4917E482EEFC03ABEB97D25FB900D386F4(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 moveInput = new Vector3(Input.GetAxisRaw("Horizontal"), 0, Input.GetAxisRaw("Vertical"));
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		// Vector3 moveVelocity = moveInput.normalized * moveSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_3 = __this->get_moveSpeed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// controller.Move(moveVelocity);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_5 = __this->get_controller_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_1;
		PlayerController_Move_m1CF1D2E5EF61742DF4404C036ABB6DF1FC4C70F4_inline(L_5, L_6, /*hidden argument*/NULL);
		// Ray ray = viewCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_viewCamera_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_9;
		L_9 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// Plane groundPlane = new Plane(Vector3.up, Vector3.up * gunController.GunHeight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_12 = __this->get_gunController_12();
		float L_13;
		L_13 = GunController_get_GunHeight_m76E2D7FE0C5B93EBF3E4ACA392AE09D5F5770D43(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_13, /*hidden argument*/NULL);
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_3), L_10, L_14, /*hidden argument*/NULL);
		// if (groundPlane.Raycast(ray, out rayDistance))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_15 = V_2;
		bool L_16;
		L_16 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_3), L_15, (float*)(&V_4), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0110;
		}
	}
	{
		// Vector3 point = ray.GetPoint(rayDistance);
		float L_17 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		// controller.LookAt(point);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_19 = __this->get_controller_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_5;
		PlayerController_LookAt_mE8220FD720FE8F0CE21CF79532D1EBAD737C7558(L_19, L_20, /*hidden argument*/NULL);
		// crosshairs.transform. position = point;
		Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * L_21 = __this->get_crosshairs_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_5;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_23, /*hidden argument*/NULL);
		// crosshairs.DetectTargets(ray);
		Crosshairs_t4C1B4F8DC561FF2D379674EACCC66B2A8BEDC03A * L_24 = __this->get_crosshairs_9();
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_25 = V_2;
		Crosshairs_DetectTargets_mF9816658888D96613BF409A3FE2F732D3AF67480(L_24, L_25, /*hidden argument*/NULL);
		// if((new Vector2(point.x, point.z) - new Vector2(transform.position.x, transform.position.z)).sqrMagnitude > 1.5f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_5;
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_5;
		float L_29 = L_28.get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), L_27, L_29, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_37), L_33, L_36, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_30, L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		float L_39;
		L_39 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_6), /*hidden argument*/NULL);
		if ((!(((float)L_39) > ((float)(1.5f)))))
		{
			goto IL_0110;
		}
	}
	{
		// gunController.Aim(point);
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_40 = __this->get_gunController_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_5;
		GunController_Aim_mEC28F199CE03484ED4B68F9C5B4A2ECED2259910(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0110:
	{
		// if (Input.GetMouseButton(0))
		bool L_42;
		L_42 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0123;
		}
	}
	{
		// gunController.OnTriggerHold();
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_43 = __this->get_gunController_12();
		GunController_OnTriggerHold_m97FF77F36E718340FE9E098CB3CB9AAFAE313D7A(L_43, /*hidden argument*/NULL);
	}

IL_0123:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_44;
		L_44 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0136;
		}
	}
	{
		// gunController.OnTriggerRelease();
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_45 = __this->get_gunController_12();
		GunController_OnTriggerRelease_m86293B37C733CA8D683A15957B74739F5E9C0DF5(L_45, /*hidden argument*/NULL);
	}

IL_0136:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_46;
		L_46 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_014a;
		}
	}
	{
		// gunController.Reload();
		GunController_tF6B092D858EB021CF4E42ED4111B944817BA4A81 * L_47 = __this->get_gunController_12();
		GunController_Reload_m9A649AEC1CCCCDFF75B8EFA8F93176C316563347(L_47, /*hidden argument*/NULL);
	}

IL_014a:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed = 5;
		__this->set_moveSpeed_8((5.0f));
		LivingEntity__ctor_m084033632DA6C4AEB9E4D4ABBEC174ED97657D80(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myRigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_myRigidbody_5(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m1CF1D2E5EF61742DF4404C036ABB6DF1FC4C70F4 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity0, const RuntimeMethod* method)
{
	{
		// velocity = _velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ____velocity0;
		__this->set_velocity_4(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LookAt_mE8220FD720FE8F0CE21CF79532D1EBAD737C7558 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookPoint0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 heightCorrectedPoint = new Vector3(lookPoint.x, transform.position.y, lookPoint.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lookPoint0;
		float L_1 = L_0.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___lookPoint0;
		float L_6 = L_5.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_1, L_4, L_6, /*hidden argument*/NULL);
		// transform.LookAt(heightCorrectedPoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m54EE3ADAA7597303B1F69849B233D1A68D880B14 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// myRigidbody.MovePosition(myRigidbody.position + velocity * Time.fixedDeltaTime);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_myRigidbody_5();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_myRigidbody_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_velocity_4();
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_5, /*hidden argument*/NULL);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Projectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Start_m065C53350564E17D5A0A0322FF064F8C9697DAB6 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m3BF8F0D99AB14A2C6D2C3DCC33AC2AFAC49B29D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_0 = NULL;
	{
		// Destroy(gameObject, lifetime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_lifetime_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_1, /*hidden argument*/NULL);
		// Collider[] initialCollisions = Physics.OverlapSphere(transform.position, .1f, collisionMask);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_collisionMask_4();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_6;
		L_6 = Physics_OverlapSphere_mE1FC40C646B1468905057516601DB49DD41E0223(L_3, (0.100000001f), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (initialCollisions.Length > 0)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_7 = V_0;
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_004a;
		}
	}
	{
		// OnHitObject(initialCollisions[0], transform.position);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_8 = V_0;
		int32_t L_9 = 0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Projectile_OnHitObject_m625BD108891728523C9CF3E98E88FC15C6E9160E(__this, L_10, L_12, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// GetComponent<TrailRenderer>().material.SetColor("_TintColor", trailColour);
		TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * L_13;
		L_13 = Component_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m3BF8F0D99AB14A2C6D2C3DCC33AC2AFAC49B29D1(__this, /*hidden argument*/Component_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m3BF8F0D99AB14A2C6D2C3DCC33AC2AFAC49B29D1_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14;
		L_14 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_13, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = __this->get_trailColour_5();
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_14, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::SetSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_SetSpeed_m5994AB7838F9D5D58FF8174D095923FD769E609C (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, float ___newSpeed0, const RuntimeMethod* method)
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->set_speed_6(L_0);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float moveDistance = speed * Time.deltaTime;
		float L_0 = __this->get_speed_6();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// CheckCollisions(moveDistance);
		float L_2 = V_0;
		Projectile_CheckCollisions_mD0A49D2FB638DDB7E09857F7A2391D34F99C1247(__this, L_2, /*hidden argument*/NULL);
		// transform.Translate(Vector3.forward * moveDistance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::CheckCollisions(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_CheckCollisions_mD0A49D2FB638DDB7E09857F7A2391D34F99C1247 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, float ___moveDistance0, const RuntimeMethod* method)
{
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray = new Ray(transform.position, transform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_4), L_1, L_3, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit, moveDistance + skinWidth, collisionMask, QueryTriggerInteraction.Collide))
		float L_5 = ___moveDistance0;
		float L_6 = __this->get_skinWidth_9();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_7 = __this->get_collisionMask_4();
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Physics_Raycast_mCA3F2DD1DC08199AAD8466BB857318CD454AC774(L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), L_8, 2, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// OnHitObject(hit.collider, hit.point);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10;
		L_10 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Projectile_OnHitObject_m625BD108891728523C9CF3E98E88FC15C6E9160E(__this, L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Projectile::OnHitObject(UnityEngine.Collider,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnHitObject_m625BD108891728523C9CF3E98E88FC15C6E9160E (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___c0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_m2438F0F607566C20DFD97B6E1DBAF0376A2DBC6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDamageable damageableObject = c.GetComponent<IDamageable>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___c0;
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisIDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_m2438F0F607566C20DFD97B6E1DBAF0376A2DBC6E(L_0, /*hidden argument*/Component_GetComponent_TisIDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_m2438F0F607566C20DFD97B6E1DBAF0376A2DBC6E_RuntimeMethod_var);
		V_0 = L_1;
		// if (damageableObject != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// damageableObject.TakeHit(damage, hitPoint, transform.forward);
		RuntimeObject* L_3 = V_0;
		float L_4 = __this->get_damage_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___hitPoint1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_6, /*hidden argument*/NULL);
		InterfaceActionInvoker3< float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* System.Void IDamageable::TakeHit(System.Single,UnityEngine.Vector3,UnityEngine.Vector3) */, IDamageable_t5BAF51BFFD0CAAAFE5F6128E56C398BC6232C75B_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_7);
	}

IL_0022:
	{
		// GameObject.Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// float speed = 10;
		__this->set_speed_6((10.0f));
		// float damage = 1;
		__this->set_damage_7((1.0f));
		// float lifetime = 3;
		__this->set_lifetime_8((3.0f));
		// float skinWidth = .1f;
		__this->set_skinWidth_9((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Shell::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shell_Start_m493DB147936C20249BEBF94E4842A50697841D5C (Shell_tBB91054C9493DE994824A479BF37CAF307029629 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float force = Random.Range(forceMin, forceMax);
		float L_0 = __this->get_forceMin_5();
		float L_1 = __this->get_forceMax_6();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// myRigidbody.AddForce(transform.right * force);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_myRigidbody_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_3, L_7, /*hidden argument*/NULL);
		// myRigidbody.AddTorque(Random.insideUnitSphere * force);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_myRigidbody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		float L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Rigidbody_AddTorque_mAEB5758FA773B1A0ECDD328934BB3A7202D21EB3(L_8, L_11, /*hidden argument*/NULL);
		// StartCoroutine(Fade());
		RuntimeObject* L_12;
		L_12 = Shell_Fade_m7587AFCC6B66D531A6A57FC2F9906684CED7658A(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Shell::Fade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shell_Fade_m7587AFCC6B66D531A6A57FC2F9906684CED7658A (Shell_tBB91054C9493DE994824A479BF37CAF307029629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * L_0 = (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 *)il2cpp_codegen_object_new(U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1_il2cpp_TypeInfo_var);
		U3CFadeU3Ed__6__ctor_mAA1CF1B77E112E810AEC9E3D3E89BE1C2A5CCAC2(L_0, 0, /*hidden argument*/NULL);
		U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Shell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shell__ctor_mD26565662921B65F38DC3EA86C3E7EC8F9ACEC85 (Shell_tBB91054C9493DE994824A479BF37CAF307029629 * __this, const RuntimeMethod* method)
{
	{
		// float lifetime = 4;
		__this->set_lifetime_7((4.0f));
		// float fadetime = 2;
		__this->set_fadetime_8((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spawner::add_OnNewWave(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_add_OnNewWave_mFF0EB133E316D529BB27242875992928BCCAD346 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnNewWave_20();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** L_5 = __this->get_address_of_OnNewWave_20();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Spawner::remove_OnNewWave(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_remove_OnNewWave_mB0C24997748287999B0FF573E5AB933B091EB199 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnNewWave_20();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** L_5 = __this->get_address_of_OnNewWave_20();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Spawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Start_m61D97BD980BD1B1877634A1E7626E47418D5D6D8 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C_mCBCBC266E9569BA1EB51AC89A17F24A9361F48D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_OnPlayerDeath_m4FC658E89317C5929B019CA3E613D69EA554938D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerEntity = FindObjectOfType<Player>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0;
		L_0 = Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		__this->set_playerEntity_7(L_0);
		// playerT = playerEntity.transform;
		LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * L_1 = __this->get_playerEntity_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		__this->set_playerT_8(L_2);
		// nextCampCheckTime = timeBetweenCampingChecks + Time.time;
		float L_3 = __this->get_timeBetweenCampingChecks_15();
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_nextCampCheckTime_17(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// campPositionOld = playerT.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_playerT_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_campPositionOld_18(L_6);
		// playerEntity.OnDeath += OnPlayerDeath;
		LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * L_7 = __this->get_playerEntity_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)Spawner_OnPlayerDeath_m4FC658E89317C5929B019CA3E613D69EA554938D_RuntimeMethod_var), /*hidden argument*/NULL);
		LivingEntity_add_OnDeath_mF5E016E644ED786A161EFAF3658433586AD614A9(L_7, L_8, /*hidden argument*/NULL);
		// map = FindObjectOfType<MapGenerator>();
		MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * L_9;
		L_9 = Object_FindObjectOfType_TisMapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C_mCBCBC266E9569BA1EB51AC89A17F24A9361F48D3(/*hidden argument*/Object_FindObjectOfType_TisMapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C_mCBCBC266E9569BA1EB51AC89A17F24A9361F48D3_RuntimeMethod_var);
		__this->set_map_14(L_9);
		// NextWave();
		Spawner_NextWave_m01AE1E23400D7214A0149243B773B5750434DD32(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spawner::OnPlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnPlayerDeath_m4FC658E89317C5929B019CA3E613D69EA554938D (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	{
		// isDisabled = true;
		__this->set_isDisabled_21((bool)1);
		// }
		return;
	}
}
// System.Void Spawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Update_m8E44DB2210E6C1692B202D38D0867961E9720AA9 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94F6AE308541ADA690833204EE6F56F88581DD15);
		s_Il2CppMethodInitialized = true;
	}
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!isDisabled) {
		bool L_0 = __this->get_isDisabled_21();
		if (L_0)
		{
			goto IL_00b3;
		}
	}
	{
		// if (Time.time > nextCampCheckTime)
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_nextCampCheckTime_17();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_005f;
		}
	}
	{
		// nextCampCheckTime = Time.time + timeBetweenCampingChecks;
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_4 = __this->get_timeBetweenCampingChecks_15();
		__this->set_nextCampCheckTime_17(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// isCamping = (Vector3.Distance(playerT.position, campPositionOld) < campThresholdDistance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_playerT_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_campPositionOld_18();
		float L_8;
		L_8 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_6, L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_campThresholdDistance_16();
		__this->set_isCamping_19((bool)((((float)L_8) < ((float)L_9))? 1 : 0));
		// campPositionOld = playerT.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_playerT_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		__this->set_campPositionOld_18(L_11);
	}

IL_005f:
	{
		// if ((enemiesRemainingToSpawn > 0||currentWave.infinite) && Time.time > nextSpawnTime)
		int32_t L_12 = __this->get_enemiesRemainingToSpawn_11();
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_13 = __this->get_currentWave_9();
		bool L_14 = L_13->get_infinite_0();
		if (!L_14)
		{
			goto IL_00b3;
		}
	}

IL_0075:
	{
		float L_15;
		L_15 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_16 = __this->get_nextSpawnTime_13();
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_00b3;
		}
	}
	{
		// enemiesRemainingToSpawn--;
		int32_t L_17 = __this->get_enemiesRemainingToSpawn_11();
		__this->set_enemiesRemainingToSpawn_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		// nextSpawnTime = Time.time + currentWave.timeBetweenSpawns;
		float L_18;
		L_18 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_19 = __this->get_currentWave_9();
		float L_20 = L_19->get_timeBetweenSpawns_2();
		__this->set_nextSpawnTime_13(((float)il2cpp_codegen_add((float)L_18, (float)L_20)));
		// StartCoroutine("SpawnEnemy");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// if (devMode)
		bool L_22 = __this->get_devMode_4();
		if (!L_22)
		{
			goto IL_00f6;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Return)){
		bool L_23;
		L_23 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)13), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00f6;
		}
	}
	{
		// StopCoroutine("spawnEnemy");
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(__this, _stringLiteral94F6AE308541ADA690833204EE6F56F88581DD15, /*hidden argument*/NULL);
		// foreach(Enemy enemy in FindObjectsOfType<Enemy>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_24;
		L_24 = Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B(/*hidden argument*/Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var);
		V_0 = L_24;
		V_1 = 0;
		goto IL_00ea;
	}

IL_00d9:
	{
		// foreach(Enemy enemy in FindObjectsOfType<Enemy>())
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		// GameObject.Destroy(enemy.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00ea:
	{
		// foreach(Enemy enemy in FindObjectsOfType<Enemy>())
		int32_t L_31 = V_1;
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		// NextWave();
		Spawner_NextWave_m01AE1E23400D7214A0149243B773B5750434DD32(__this, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Spawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner_SpawnEnemy_mECA9B7F574984085A56BDCD7DB2C8EE807FA7012 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * L_0 = (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 *)il2cpp_codegen_object_new(U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4_il2cpp_TypeInfo_var);
		U3CSpawnEnemyU3Ed__23__ctor_m3423BCB15990F9FA2A11D337931D57E71CB17F15(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Spawner::OnEnemyDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnEnemyDeath_m8F2FC6BCFF80B80A3C7A2275ADB74A66E0691481 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	{
		// enemiesRemainingAlive--;
		int32_t L_0 = __this->get_enemiesRemainingAlive_12();
		__this->set_enemiesRemainingAlive_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (enemiesRemainingAlive == 0)
		int32_t L_1 = __this->get_enemiesRemainingAlive_12();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// NextWave();
		Spawner_NextWave_m01AE1E23400D7214A0149243B773B5750434DD32(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Spawner::ResetPlayerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_ResetPlayerPosition_m887F95E399D9788C231A9CA5B3A645BAFBFF7406 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	{
		// playerT.position = map.GetTileFromPosition(Vector3.zero).position + Vector3.up * 3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_playerT_8();
		MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * L_1 = __this->get_map_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = MapGenerator_GetTileFromPosition_m741CB6BFC9BEFA6591295B22C27B20E6EBDF8540(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_6, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spawner::NextWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_NextWave_m01AE1E23400D7214A0149243B773B5750434DD32 (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentWaveNumber++;
		int32_t L_0 = __this->get_currentWaveNumber_10();
		__this->set_currentWaveNumber_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (currentWaveNumber - 1 < waves.Length)
		int32_t L_1 = __this->get_currentWaveNumber_10();
		WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* L_2 = __this->get_waves_5();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		// currentWave = waves[currentWaveNumber - 1];
		WaveU5BU5D_t91F7FD664A791D3276DDA4EBEA7BC73B835B4120* L_3 = __this->get_waves_5();
		int32_t L_4 = __this->get_currentWaveNumber_10();
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_currentWave_9(L_6);
		// enemiesRemainingToSpawn = currentWave.enemyCount;
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_7 = __this->get_currentWave_9();
		int32_t L_8 = L_7->get_enemyCount_1();
		__this->set_enemiesRemainingToSpawn_11(L_8);
		// enemiesRemainingAlive = enemiesRemainingToSpawn;
		int32_t L_9 = __this->get_enemiesRemainingToSpawn_11();
		__this->set_enemiesRemainingAlive_12(L_9);
		// if (OnNewWave != null)
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = __this->get_OnNewWave_20();
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		// OnNewWave(currentWaveNumber);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_11 = __this->get_OnNewWave_20();
		int32_t L_12 = __this->get_currentWaveNumber_10();
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(L_11, L_12, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_006b:
	{
		// ResetPlayerPosition();
		Spawner_ResetPlayerPosition_m887F95E399D9788C231A9CA5B3A645BAFBFF7406(__this, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_m08E8D40AAA40F4329D8A95EEE2B2B6BE842CEB9C (Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * __this, const RuntimeMethod* method)
{
	{
		// float timeBetweenCampingChecks = 2;
		__this->set_timeBetweenCampingChecks_15((2.0f));
		// float campThresholdDistance = 1.5f;
		__this->set_campThresholdDistance_16((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__ctor_m1833EEB11DE1A5892A5668B7B237302065D44721 (Utility_t01179311E92FA84213BB8ED036BE87C91851ACCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy/<Attack>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__21__ctor_mB0B6C86F44B06AF65C5A4831A957FBA1E0C77990 (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Attack>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__21_System_IDisposable_Dispose_mF3004A71DFBF400A5E68A84A71DB4A58E9C5B57A (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Attack>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__21_MoveNext_m15DA6C06A2C94DBC118EAE7721B379CC77922693 (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0151;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// currentState = State.Attacking;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = V_1;
		L_4->set_currentState_8(2);
		// pathfinder.enabled = false;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_5 = V_1;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_6 = L_5->get_pathfinder_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// Vector3 originalPositon = transform.position;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_7 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		__this->set_U3CoriginalPositonU3E5__2_3(L_9);
		// Vector3 dirToTarget = (target.position - transform.position).normalized;//��ɵ�λ��������ʾ��������
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_10 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_target_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_13 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_2 = L_17;
		// Vector3 attackPosition = target.position - dirToTarget * (myCollisionRadius);//
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_18 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = L_18->get_target_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_22 = V_1;
		float L_23 = L_22->get_myCollisionRadius_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_20, L_24, /*hidden argument*/NULL);
		__this->set_U3CattackPositionU3E5__3_4(L_25);
		// float attackSpeed = 3;
		__this->set_U3CattackSpeedU3E5__4_5((3.0f));
		// float percent = 0;
		__this->set_U3CpercentU3E5__5_6((0.0f));
		// skinMaterial.color = Color.red;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_26 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = L_26->get_skinMaterial_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_27, L_28, /*hidden argument*/NULL);
		// bool hasAppliedDamage = false;
		__this->set_U3ChasAppliedDamageU3E5__6_7((bool)0);
		goto IL_0158;
	}

IL_00bd:
	{
		// if (percent >= .5f && !hasAppliedDamage)
		float L_29 = __this->get_U3CpercentU3E5__5_6();
		if ((!(((float)L_29) >= ((float)(0.5f)))))
		{
			goto IL_00ea;
		}
	}
	{
		bool L_30 = __this->get_U3ChasAppliedDamageU3E5__6_7();
		if (L_30)
		{
			goto IL_00ea;
		}
	}
	{
		// hasAppliedDamage = true;
		__this->set_U3ChasAppliedDamageU3E5__6_7((bool)1);
		// targetEntity.TakeDamage(damage);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_31 = V_1;
		LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 * L_32 = L_31->get_targetEntity_12();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_33 = V_1;
		float L_34 = L_33->get_damage_15();
		VirtActionInvoker1< float >::Invoke(7 /* System.Void LivingEntity::TakeDamage(System.Single) */, L_32, L_34);
	}

IL_00ea:
	{
		// percent += Time.deltaTime* attackSpeed;
		float L_35 = __this->get_U3CpercentU3E5__5_6();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_37 = __this->get_U3CattackSpeedU3E5__4_5();
		__this->set_U3CpercentU3E5__5_6(((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)))));
		// float interpolation = (-Mathf.Pow(percent, 2) + percent) * 4;
		float L_38 = __this->get_U3CpercentU3E5__5_6();
		float L_39;
		L_39 = powf(L_38, (2.0f));
		float L_40 = __this->get_U3CpercentU3E5__5_6();
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((-L_39)), (float)L_40)), (float)(4.0f)));
		// transform.position = Vector3.Lerp(originalPositon, attackPosition, interpolation);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_41 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_U3CoriginalPositonU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = __this->get_U3CattackPositionU3E5__3_4();
		float L_45 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_43, L_44, L_45, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_46, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0151:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0158:
	{
		// while (percent <=1)
		float L_47 = __this->get_U3CpercentU3E5__5_6();
		if ((((float)L_47) <= ((float)(1.0f))))
		{
			goto IL_00bd;
		}
	}
	{
		// skinMaterial.color = originalColour;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_48 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_49 = L_48->get_skinMaterial_13();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_50 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = L_50->get_originalColour_14();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_49, L_51, /*hidden argument*/NULL);
		// currentState = State.Chasing;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_52 = V_1;
		L_52->set_currentState_8(1);
		// pathfinder.enabled = true;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_53 = V_1;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_54 = L_53->get_pathfinder_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_54, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<Attack>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED82B7E4287D6C104BEC6B517B25C5E6CFFA63CA (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Attack>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__21_System_Collections_IEnumerator_Reset_m94963641AE06AE8C6AB3F9134841C8B0E0F758E8 (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__21_System_Collections_IEnumerator_Reset_m94963641AE06AE8C6AB3F9134841C8B0E0F758E8_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Attack>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__21_System_Collections_IEnumerator_get_Current_m3A6BDA608195070208E9108E1F9F58644D755762 (U3CAttackU3Ed__21_tC5D391F92D3146D1C476349D71BFFFDA19FFD025 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy/<UpdatePath>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ed__22__ctor_m17AE6D5F30BFBF74201193AE1EA93B5E1BCE2A99 (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<UpdatePath>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ed__22_System_IDisposable_Dispose_mFC8A1682CD3F042009C94AC77457FDAD066BE60C (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<UpdatePath>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePathU3Ed__22_MoveNext_m75B08FB77AC1F69DE602AC0CBA9E7983A1F543BE (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float refreshRate = .25f;
		__this->set_U3CrefreshRateU3E5__2_3((0.25f));
		goto IL_00c6;
	}

IL_0031:
	{
		// if (currentState == State.Chasing) {
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = V_1;
		int32_t L_5 = L_4->get_currentState_8();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_00a5;
		}
	}
	{
		// Vector3 dirToTarget = (target.position - transform.position).normalized;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_6 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6->get_target_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_9 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_2 = L_13;
		// Vector3 targetPosition = target.position - dirToTarget * (myCollisionRadius + targetCollisionRadius + attackDistanceThreshold / 2);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_14 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = L_14->get_target_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_18 = V_1;
		float L_19 = L_18->get_myCollisionRadius_19();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_20 = V_1;
		float L_21 = L_20->get_targetCollisionRadius_20();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_22 = V_1;
		float L_23 = L_22->get_attackDistanceThreshold_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_19, (float)L_21)), (float)((float)((float)L_23/(float)(2.0f))))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// if (!dead) pathfinder.SetDestination(targetPosition);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_26 = V_1;
		bool L_27 = ((LivingEntity_tD8D653BBB03629A3DBF8A3F484E6674D9AA14B66 *)L_26)->get_dead_5();
		if (L_27)
		{
			goto IL_00a5;
		}
	}
	{
		// if (!dead) pathfinder.SetDestination(targetPosition);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_28 = V_1;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_29 = L_28->get_pathfinder_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_3;
		bool L_31;
		L_31 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_29, L_30, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// yield return new WaitForSeconds(refreshRate);
		float L_32 = __this->get_U3CrefreshRateU3E5__2_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, L_32, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bf:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c6:
	{
		// while (hasTarget)
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_34 = V_1;
		bool L_35 = L_34->get_hasTarget_21();
		if (L_35)
		{
			goto IL_0031;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<UpdatePath>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdatePathU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD54FEB55D0CC51AFE60C3CEC86A97944189A0B94 (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<UpdatePath>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePathU3Ed__22_System_Collections_IEnumerator_Reset_mB3024392326341D511F67ABCABE72427E1E33C97 (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePathU3Ed__22_System_Collections_IEnumerator_Reset_mB3024392326341D511F67ABCABE72427E1E33C97_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<UpdatePath>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdatePathU3Ed__22_System_Collections_IEnumerator_get_Current_mA0458F6CA91F69831C7C2A9C6032868DA032EF3F (U3CUpdatePathU3Ed__22_t6B7B64D1FFFDC15509D5C7FF35537BFE7864515E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameUI/<AnimateNewWaveBanner>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateNewWaveBannerU3Ed__8__ctor_m8D644FA99126465AA20226708CAE00EB8E31B596 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameUI/<AnimateNewWaveBanner>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateNewWaveBannerU3Ed__8_System_IDisposable_Dispose_m7C7FCBDA8D837DF0D8C367414A00F563FC1F8E46 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameUI/<AnimateNewWaveBanner>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateNewWaveBannerU3Ed__8_MoveNext_m9B99097BD3CBA5906FFE796EE50854C44C566E10 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ea;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float delayTime = 1.5f;
		V_2 = (1.5f);
		// float speed = 3f;
		__this->set_U3CspeedU3E5__2_3((3.0f));
		// float animatePercent = 0;
		__this->set_U3CanimatePercentU3E5__3_4((0.0f));
		// int dir = 1;
		__this->set_U3CdirU3E5__4_5(1);
		// float endDelayTime = Time.time + 1 / speed + delayTime;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get_U3CspeedU3E5__2_3();
		float L_6 = V_2;
		__this->set_U3CendDelayTimeU3E5__5_6(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_4, (float)((float)((float)(1.0f)/(float)L_5)))), (float)L_6)));
		goto IL_00f1;
	}

IL_0063:
	{
		// animatePercent += Time.deltaTime * speed * dir;
		float L_7 = __this->get_U3CanimatePercentU3E5__3_4();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_9 = __this->get_U3CspeedU3E5__2_3();
		int32_t L_10 = __this->get_U3CdirU3E5__4_5();
		__this->set_U3CanimatePercentU3E5__3_4(((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)((float)L_10)))))));
		// if (animatePercent >= 1)
		float L_11 = __this->get_U3CanimatePercentU3E5__3_4();
		if ((!(((float)L_11) >= ((float)(1.0f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// animatePercent = 1;
		__this->set_U3CanimatePercentU3E5__3_4((1.0f));
		// if (Time.time > endDelayTime)
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_13 = __this->get_U3CendDelayTimeU3E5__5_6();
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_00b0;
		}
	}
	{
		// dir = -1;
		__this->set_U3CdirU3E5__4_5((-1));
	}

IL_00b0:
	{
		// newWaveBanner.anchoredPosition = Vector2.up * Mathf.Lerp(-200, 25, animatePercent);
		GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * L_14 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = L_14->get_newWaveBanner_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_17 = __this->get_U3CanimatePercentU3E5__3_4();
		float L_18;
		L_18 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((-200.0f), (25.0f), L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_16, L_18, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_15, L_19, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ea:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00f1:
	{
		// while (animatePercent >= 0)
		float L_20 = __this->get_U3CanimatePercentU3E5__3_4();
		if ((((float)L_20) >= ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameUI/<AnimateNewWaveBanner>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateNewWaveBannerU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEBEBDC483BFCE755EBF17A5D654E172D15322CF2 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameUI/<AnimateNewWaveBanner>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateNewWaveBannerU3Ed__8_System_Collections_IEnumerator_Reset_m4A9C603041FF5D0B4A7DB14780BBF8A9EDEE35F9 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateNewWaveBannerU3Ed__8_System_Collections_IEnumerator_Reset_m4A9C603041FF5D0B4A7DB14780BBF8A9EDEE35F9_RuntimeMethod_var)));
	}
}
// System.Object GameUI/<AnimateNewWaveBanner>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateNewWaveBannerU3Ed__8_System_Collections_IEnumerator_get_Current_m341855273E4178854A87A0256C7B6DB8AB54E8F2 (U3CAnimateNewWaveBannerU3Ed__8_tC67E5AF2921457051490FA1673EFDD4353DB90C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameUI/<Fade>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__11__ctor_m662E9684AD2E23B2812479684B238AAF46AE1D80 (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameUI/<Fade>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__11_System_IDisposable_Dispose_m957348C88A0F8E1A78469B2BFB5D2C0890FC193E (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameUI/<Fade>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__11_MoveNext_mAFAC7641C2304F867EBE1605561074502D0FD941 (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float speed = 1 / time;
		float L_4 = __this->get_time_2();
		__this->set_U3CspeedU3E5__2_6(((float)((float)(1.0f)/(float)L_4)));
		// float percent = 0;
		__this->set_U3CpercentU3E5__3_7((0.0f));
		goto IL_008f;
	}

IL_003d:
	{
		// percent += Time.deltaTime * speed;
		float L_5 = __this->get_U3CpercentU3E5__3_7();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_7 = __this->get_U3CspeedU3E5__2_6();
		__this->set_U3CpercentU3E5__3_7(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))));
		// fadePlane.color = Color.Lerp(from, to, percent);
		GameUI_tD102981D68009C11071C91810CF568EDC93ADAEF * L_8 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8->get_fadePlane_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = __this->get_from_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = __this->get_to_5();
		float L_12 = __this->get_U3CpercentU3E5__3_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_10, L_11, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_13);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0088:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008f:
	{
		// while (percent < 1)
		float L_14 = __this->get_U3CpercentU3E5__3_7();
		if ((((float)L_14) < ((float)(1.0f))))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameUI/<Fade>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m19EF6CE63FF6637CBE53E2F400A3231AB6B991F3 (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameUI/<Fade>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__11_System_Collections_IEnumerator_Reset_mA73BAD85B51FA5716E48B1A359FE6234820CB93C (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__11_System_Collections_IEnumerator_Reset_mA73BAD85B51FA5716E48B1A359FE6234820CB93C_RuntimeMethod_var)));
	}
}
// System.Object GameUI/<Fade>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__11_System_Collections_IEnumerator_get_Current_m83FE9ADDB751D42C3AD1D55088264E17AAED86CF (U3CFadeU3Ed__11_tFC1EF3F95B943CB63A53BE920C32660C4CE8B4C6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gun/<AnimateReload>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateReloadU3Ed__28__ctor_m05EAECDB2B6D98B919C621D9ED6C661E6A25978B (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gun/<AnimateReload>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateReloadU3Ed__28_System_IDisposable_Dispose_m65AF36D3EB13122B8E0A474C752C21A4F1F55CBD (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gun/<AnimateReload>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateReloadU3Ed__28_MoveNext_mFD8359F63572C0C2AFDD8279CF5CE85CC72458F3 (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0109;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isReloading = true;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_3 = V_1;
		L_3->set_isReloading_23((bool)1);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float reloadSpeed = 1f / reloadTime;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_5 = V_1;
		float L_6 = L_5->get_reloadTime_11();
		__this->set_U3CreloadSpeedU3E5__2_3(((float)((float)(1.0f)/(float)L_6)));
		// float percent = 0;
		__this->set_U3CpercentU3E5__3_4((0.0f));
		// float maxReloadAngle = 30;
		__this->set_U3CmaxReloadAngleU3E5__4_5((30.0f));
		// Vector3 initialRot = transform.localEulerAngles;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_7 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_8, /*hidden argument*/NULL);
		__this->set_U3CinitialRotU3E5__5_6(L_9);
		goto IL_0110;
	}

IL_008e:
	{
		// percent += reloadSpeed * Time.deltaTime;
		float L_10 = __this->get_U3CpercentU3E5__3_4();
		float L_11 = __this->get_U3CreloadSpeedU3E5__2_3();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CpercentU3E5__3_4(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)))));
		// float interpolation = (-Mathf.Pow(percent, 2) + percent) * 4;
		float L_13 = __this->get_U3CpercentU3E5__3_4();
		float L_14;
		L_14 = powf(L_13, (2.0f));
		float L_15 = __this->get_U3CpercentU3E5__3_4();
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((-L_14)), (float)L_15)), (float)(4.0f)));
		// float reloadAngle = Mathf.Lerp(0, maxReloadAngle, interpolation);
		float L_16 = __this->get_U3CmaxReloadAngleU3E5__4_5();
		float L_17 = V_2;
		float L_18;
		L_18 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// transform.localEulerAngles = initialRot + Vector3.left * reloadAngle;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_19 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_U3CinitialRotU3E5__5_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_23 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_24, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_20, L_25, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0109:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0110:
	{
		// while (percent < 1)
		float L_26 = __this->get_U3CpercentU3E5__3_4();
		if ((((float)L_26) < ((float)(1.0f))))
		{
			goto IL_008e;
		}
	}
	{
		// isReloading = false;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_27 = V_1;
		L_27->set_isReloading_23((bool)0);
		// projectilesRemainingInMag = projectilesPerMag;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_28 = V_1;
		Gun_tDD43AC55F07276B834B8A3A792545BD8A456066C * L_29 = V_1;
		int32_t L_30 = L_29->get_projectilesPerMag_10();
		L_28->set_projectilesRemainingInMag_22(L_30);
		// }
		return (bool)0;
	}
}
// System.Object Gun/<AnimateReload>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateReloadU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFFA66E1A0EE7FFE3865FC93EDB71642909970207 (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gun/<AnimateReload>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateReloadU3Ed__28_System_Collections_IEnumerator_Reset_mC6170F5468B8FC9DB333CC64A90E2C41CFBC7CFB (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateReloadU3Ed__28_System_Collections_IEnumerator_Reset_mC6170F5468B8FC9DB333CC64A90E2C41CFBC7CFB_RuntimeMethod_var)));
	}
}
// System.Object Gun/<AnimateReload>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateReloadU3Ed__28_System_Collections_IEnumerator_get_Current_m4EF055643D33F3766716FA8BC5C32AE17141333D (U3CAnimateReloadU3Ed__28_t70018B3146C062A3EBC7E0589B4274A4D81E2F7D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapGenerator/Coord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53 (Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * __this, int32_t ____x0, int32_t ____y1, const RuntimeMethod* method)
{
	{
		// x = _x;
		int32_t L_0 = ____x0;
		__this->set_x_0(L_0);
		// y = _y;
		int32_t L_1 = ____y1;
		__this->set_y_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53_AdjustorThunk (RuntimeObject * __this, int32_t ____x0, int32_t ____y1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * _thisAdjusted = reinterpret_cast<Coord_tFC7948A515859998E0BB210D9F19E635E768E711 *>(__this + _offset);
	Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53(_thisAdjusted, ____x0, ____y1, method);
}
// System.Boolean MapGenerator/Coord::op_Equality(MapGenerator/Coord,MapGenerator/Coord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Coord_op_Equality_mAFBA494B0193357778E240030ECEE366AD006B15 (Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c10, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c21, const RuntimeMethod* method)
{
	{
		// return c1.x == c2.x && c1.y == c2.y;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_0 = ___c10;
		int32_t L_1 = L_0.get_x_0();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_2 = ___c21;
		int32_t L_3 = L_2.get_x_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_4 = ___c10;
		int32_t L_5 = L_4.get_y_1();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_6 = ___c21;
		int32_t L_7 = L_6.get_y_1();
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean MapGenerator/Coord::op_Inequality(MapGenerator/Coord,MapGenerator/Coord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Coord_op_Inequality_mAD830EE8F693C21EEDBB8D4CE9A2439106F806D4 (Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c10, Coord_tFC7948A515859998E0BB210D9F19E635E768E711  ___c21, const RuntimeMethod* method)
{
	{
		// return !(c1 == c2);
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_0 = ___c10;
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_1 = ___c21;
		bool L_2;
		L_2 = Coord_op_Equality_mAFBA494B0193357778E240030ECEE366AD006B15(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MapGenerator/Coord MapGenerator/Map::get_mapCentre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coord_tFC7948A515859998E0BB210D9F19E635E768E711  Map_get_mapCentre_m92FEC0846F67CED7363759E792D00C0F0A5078F8 (Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * __this, const RuntimeMethod* method)
{
	{
		// return new Coord(mapSize.x / 2, mapSize.y / 2);
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_0 = __this->get_address_of_mapSize_0();
		int32_t L_1 = L_0->get_x_0();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711 * L_2 = __this->get_address_of_mapSize_0();
		int32_t L_3 = L_2->get_y_1();
		Coord_tFC7948A515859998E0BB210D9F19E635E768E711  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Coord__ctor_m98EC9318035D5329C01F69FA668262D80C018A53((&L_4), ((int32_t)((int32_t)L_1/(int32_t)2)), ((int32_t)((int32_t)L_3/(int32_t)2)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void MapGenerator/Map::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Map__ctor_m90D28133FC350B99B2E122F826FF7F96A8FF21B2 (Map_tC82EE12A81835B033B1708453B78D1DA8D689FA0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Shell/<Fade>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__6__ctor_mAA1CF1B77E112E810AEC9E3D3E89BE1C2A5CCAC2 (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Shell/<Fade>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__6_System_IDisposable_Dispose_m9EA3367D8F87CBB67ADD5A4D9AABFCC2E6CAC0EE (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Shell/<Fade>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__6_MoveNext_m71ADAD9FF7AF339657107AD717DEAB1C3F866D08 (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Shell_tBB91054C9493DE994824A479BF37CAF307029629 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Shell_tBB91054C9493DE994824A479BF37CAF307029629 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_00d5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(lifetime);
		Shell_tBB91054C9493DE994824A479BF37CAF307029629 * L_3 = V_1;
		float L_4 = L_3->get_lifetime_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float percent = 0;
		__this->set_U3CpercentU3E5__2_3((0.0f));
		// float fadeSpeed = 1 / fadetime;
		Shell_tBB91054C9493DE994824A479BF37CAF307029629 * L_6 = V_1;
		float L_7 = L_6->get_fadetime_8();
		__this->set_U3CfadeSpeedU3E5__3_4(((float)((float)(1.0f)/(float)L_7)));
		// Material mat = GetComponent<Renderer>().material;
		Shell_tBB91054C9493DE994824A479BF37CAF307029629 * L_8 = V_1;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9;
		L_9 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_8, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_9, /*hidden argument*/NULL);
		__this->set_U3CmatU3E5__4_5(L_10);
		// Color initialColour = mat.color;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_U3CmatU3E5__4_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_11, /*hidden argument*/NULL);
		__this->set_U3CinitialColourU3E5__5_6(L_12);
		goto IL_00dc;
	}

IL_008b:
	{
		// percent += fadeSpeed * Time.deltaTime;
		float L_13 = __this->get_U3CpercentU3E5__2_3();
		float L_14 = __this->get_U3CfadeSpeedU3E5__3_4();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CpercentU3E5__2_3(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))));
		// mat.color = Color.Lerp(initialColour, Color.clear, percent);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_U3CmatU3E5__4_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = __this->get_U3CinitialColourU3E5__5_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		float L_19 = __this->get_U3CpercentU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_17, L_18, L_19, /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_16, L_20, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00d5:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00dc:
	{
		// while (percent < 1)
		float L_21 = __this->get_U3CpercentU3E5__2_3();
		if ((((float)L_21) < ((float)(1.0f))))
		{
			goto IL_008b;
		}
	}
	{
		// Destroy(gameObject);
		Shell_tBB91054C9493DE994824A479BF37CAF307029629 * L_22 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Shell/<Fade>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC86F242B16AEC31521C2E5B372381A26AECB09B1 (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Shell/<Fade>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__6_System_Collections_IEnumerator_Reset_m041449E882012A18FDF20DC8B252805AFC623CF3 (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__6_System_Collections_IEnumerator_Reset_m041449E882012A18FDF20DC8B252805AFC623CF3_RuntimeMethod_var)));
	}
}
// System.Object Shell/<Fade>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__6_System_Collections_IEnumerator_get_Current_mD2957319EFD167B3912177A761125C322CCFAC81 (U3CFadeU3Ed__6_t2D8A3C2EADBC305DE77A6A4300FD78CC568929E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spawner/<SpawnEnemy>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__23__ctor_m3423BCB15990F9FA2A11D337931D57E71CB17F15 (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Spawner/<SpawnEnemy>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__23_System_IDisposable_Dispose_m2EEC5BC2B8B47B4B3FAA8CD69C90DEA318606D29 (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Spawner/<SpawnEnemy>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnEnemyU3Ed__23_MoveNext_mE2C73243DFE59D1964A452AB83BCAA66EB82731E (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mF69210EDB2FD882E3C1595F85212BE3E09EF549B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_OnEnemyDeath_m8F2FC6BCFF80B80A3C7A2275ADB74A66E0691481_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float spawnDelay = 1;
		__this->set_U3CspawnDelayU3E5__2_3((1.0f));
		// float tileFlashSpeed = 4;
		__this->set_U3CtileFlashSpeedU3E5__3_4((4.0f));
		// Transform spawnTile = map.GetRandomOpenTile();
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_4 = V_1;
		MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * L_5 = L_4->get_map_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = MapGenerator_GetRandomOpenTile_mDA9F0D743427557C894A51A2598CBFF6385B1F14(L_5, /*hidden argument*/NULL);
		__this->set_U3CspawnTileU3E5__4_5(L_6);
		// if (isCamping)
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_7 = V_1;
		bool L_8 = L_7->get_isCamping_19();
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		// spawnTile = map.GetTileFromPosition(playerT.position);
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_9 = V_1;
		MapGenerator_t648BE60AAA6C45AD74C0B4CD5A8A0A19D787669C * L_10 = L_9->get_map_14();
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_11 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11->get_playerT_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = MapGenerator_GetTileFromPosition_m741CB6BFC9BEFA6591295B22C27B20E6EBDF8540(L_10, L_13, /*hidden argument*/NULL);
		__this->set_U3CspawnTileU3E5__4_5(L_14);
	}

IL_006c:
	{
		// Material tileMat = spawnTile.GetComponent<Renderer>().material;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_U3CspawnTileU3E5__4_5();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_16;
		L_16 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_15, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17;
		L_17 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_16, /*hidden argument*/NULL);
		__this->set_U3CtileMatU3E5__5_6(L_17);
		// Color initialColour = tileMat.color;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_U3CtileMatU3E5__5_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_18, /*hidden argument*/NULL);
		__this->set_U3CinitialColourU3E5__6_7(L_19);
		// Color flashColour = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_U3CflashColourU3E5__7_8(L_20);
		// float spawnTimer = 0;
		__this->set_U3CspawnTimerU3E5__8_9((0.0f));
		goto IL_0107;
	}

IL_00ab:
	{
		// tileMat.color = Color.Lerp(initialColour, flashColour, Mathf.PingPong(spawnTimer * tileFlashSpeed, 1));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_U3CtileMatU3E5__5_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = __this->get_U3CinitialColourU3E5__6_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = __this->get_U3CflashColourU3E5__7_8();
		float L_24 = __this->get_U3CspawnTimerU3E5__8_9();
		float L_25 = __this->get_U3CtileFlashSpeedU3E5__3_4();
		float L_26;
		L_26 = Mathf_PingPong_m60A376FCA7185AA90B41A22379058923565193D1(((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (1.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_22, L_23, L_26, /*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_21, L_27, /*hidden argument*/NULL);
		// spawnTimer += Time.deltaTime;
		float L_28 = __this->get_U3CspawnTimerU3E5__8_9();
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CspawnTimerU3E5__8_9(((float)il2cpp_codegen_add((float)L_28, (float)L_29)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0100:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0107:
	{
		// while (spawnTimer < spawnDelay)
		float L_30 = __this->get_U3CspawnTimerU3E5__8_9();
		float L_31 = __this->get_U3CspawnDelayU3E5__2_3();
		if ((((float)L_30) < ((float)L_31)))
		{
			goto IL_00ab;
		}
	}
	{
		// Enemy spawnedEnemy = Instantiate(enemy, spawnTile.position + Vector3.up, Quaternion.identity) as Enemy;
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_32 = V_1;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_33 = L_32->get_enemy_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_U3CspawnTileU3E5__4_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_39;
		L_39 = Object_Instantiate_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mF69210EDB2FD882E3C1595F85212BE3E09EF549B(L_33, L_37, L_38, /*hidden argument*/Object_Instantiate_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mF69210EDB2FD882E3C1595F85212BE3E09EF549B_RuntimeMethod_var);
		// spawnedEnemy.OnDeath += OnEnemyDeath;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_40 = L_39;
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_41 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_42 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_42, L_41, (intptr_t)((intptr_t)Spawner_OnEnemyDeath_m8F2FC6BCFF80B80A3C7A2275ADB74A66E0691481_RuntimeMethod_var), /*hidden argument*/NULL);
		LivingEntity_add_OnDeath_mF5E016E644ED786A161EFAF3658433586AD614A9(L_40, L_42, /*hidden argument*/NULL);
		// spawnedEnemy.SetCharacteristics(currentWave.moveSpeed, currentWave.hitsToKillPlayer, currentWave.enemyHealth, currentWave.skinColour);
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_43 = V_1;
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_44 = L_43->get_currentWave_9();
		float L_45 = L_44->get_moveSpeed_3();
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_46 = V_1;
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_47 = L_46->get_currentWave_9();
		int32_t L_48 = L_47->get_hitsToKillPlayer_4();
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_49 = V_1;
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_50 = L_49->get_currentWave_9();
		float L_51 = L_50->get_enemyHealth_5();
		Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87 * L_52 = V_1;
		Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * L_53 = L_52->get_currentWave_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54 = L_53->get_skinColour_6();
		Enemy_SetCharacteristics_mCEF8DE2982574EA50C56057739AB8C3ECF9C8DAE(L_40, L_45, L_48, L_51, L_54, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Spawner/<SpawnEnemy>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnEnemyU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9FA9F413948488CA003F5BD73DC7ED04A3FD9EAD (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Spawner/<SpawnEnemy>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__23_System_Collections_IEnumerator_Reset_m7C4AC3D9398DF1FB28EB9275A24B0C243FE20848 (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnEnemyU3Ed__23_System_Collections_IEnumerator_Reset_m7C4AC3D9398DF1FB28EB9275A24B0C243FE20848_RuntimeMethod_var)));
	}
}
// System.Object Spawner/<SpawnEnemy>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnEnemyU3Ed__23_System_Collections_IEnumerator_get_Current_mAFCA10CA0B662EE1684B779886F56F049C1A4CFC (U3CSpawnEnemyU3Ed__23_tB1121A082C7E1526E63EF7A7A07B4862E355C9C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spawner/Wave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wave__ctor_m708E00244F486B93D559F7D688248DF050DD83A8 (Wave_t5A815120237CFB00CDFF306E1F3DEC7A86EF1924 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Projectile_SetSpeed_m5994AB7838F9D5D58FF8174D095923FD769E609C_inline (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, float ___newSpeed0, const RuntimeMethod* method)
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->set_speed_6(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_Move_m1CF1D2E5EF61742DF4404C036ABB6DF1FC4C70F4_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity0, const RuntimeMethod* method)
{
	{
		// velocity = _velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ____velocity0;
		__this->set_velocity_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m60E14E9A2A537DCEEA0BE8E009FB87B045AE4A4C_gshared_inline (Queue_1_tD603F39B4702EF7DD2C861615643A30DDE061D16 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
