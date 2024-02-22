#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.OnRep_Triggered
	 */
	struct APRJ_MicroMissile_Mine_Head_C_OnRep_Triggered_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.UserConstructionScript
	 */
	struct APRJ_MicroMissile_Mine_Head_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.Timeline_1__FinishedFunc
	 */
	struct APRJ_MicroMissile_Mine_Head_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.Timeline_1__UpdateFunc
	 */
	struct APRJ_MicroMissile_Mine_Head_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	 */
	struct APRJ_MicroMissile_Mine_Head_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.OnInitialized
	 */
	struct APRJ_MicroMissile_Mine_Head_C_OnInitialized_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.DoTriggerAreaDisplay
	 */
	struct APRJ_MicroMissile_Mine_Head_C_DoTriggerAreaDisplay_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.OnImpacted
	 */
	struct APRJ_MicroMissile_Mine_Head_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AH9R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.TriggerExplosion
	 */
	struct APRJ_MicroMissile_Mine_Head_C_TriggerExplosion_Params
	{	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APRJ_MicroMissile_Mine_Head_C_BndEvt__Trigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LSK2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_MicroMissile_Mine_Head.PRJ_MicroMissile_Mine_Head_C.ExecuteUbergraph_PRJ_MicroMissile_Mine_Head
	 */
	struct APRJ_MicroMissile_Mine_Head_C_ExecuteUbergraph_PRJ_MicroMissile_Mine_Head_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
