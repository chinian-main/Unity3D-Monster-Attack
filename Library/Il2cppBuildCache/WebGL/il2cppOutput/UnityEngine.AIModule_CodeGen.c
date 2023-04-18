#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern void NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (void);
// 0x00000002 System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
extern void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (void);
// 0x00000003 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
extern void NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A (void);
// 0x00000004 System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern void NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5 (void);
// 0x00000005 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern void OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4 (void);
// 0x00000006 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern void OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D (void);
// 0x00000007 System.IAsyncResult UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
extern void OnNavMeshPreUpdate_BeginInvoke_m8B7FF1B745E38190A2B744775602508E77B291FA (void);
// 0x00000008 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
extern void OnNavMeshPreUpdate_EndInvoke_mA263F64ADF01540E24327DDB24BD334539B1B4D2 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747,
	NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14,
	NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A,
	NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5,
	OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4,
	OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D,
	OnNavMeshPreUpdate_BeginInvoke_m8B7FF1B745E38190A2B744775602508E77B291FA,
	OnNavMeshPreUpdate_EndInvoke_mA263F64ADF01540E24327DDB24BD334539B1B4D2,
};
static const int32_t s_InvokerIndices[8] = 
{
	885,
	986,
	814,
	1916,
	630,
	1131,
	479,
	967,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AIModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule = 
{
	"UnityEngine.AIModule.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AIModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
