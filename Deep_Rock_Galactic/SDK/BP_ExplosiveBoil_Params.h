#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.CopyGlobalWeakpointModSettings
	 */
	struct ABP_ExplosiveBoil_C_CopyGlobalWeakpointModSettings_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__FinishedFunc
	 */
	struct ABP_ExplosiveBoil_C_Grow__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__UpdateFunc
	 */
	struct ABP_ExplosiveBoil_C_Grow__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ReceiveBeginPlay
	 */
	struct ABP_ExplosiveBoil_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDestroyed_Event
	 */
	struct ABP_ExplosiveBoil_C_OnDestroyed_Event_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDeath_Event
	 */
	struct ABP_ExplosiveBoil_C_OnDeath_Event_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature
	 */
	struct ABP_ExplosiveBoil_C_BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	 */
	struct ABP_ExplosiveBoil_C_BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_47TL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       anyHealthLost;                                           // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ExecuteUbergraph_BP_ExplosiveBoil
	 */
	struct ABP_ExplosiveBoil_C_ExecuteUbergraph_BP_ExplosiveBoil_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
