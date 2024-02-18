#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.OnRep_Ready
	 */
	struct ABP_Zhukov_IceMines_C_OnRep_Ready_Params
	{	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.OnRep_Triggered
	 */
	struct ABP_Zhukov_IceMines_C_OnRep_Triggered_Params
	{	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.UserConstructionScript
	 */
	struct ABP_Zhukov_IceMines_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.TriggerExplosion
	 */
	struct ABP_Zhukov_IceMines_C_TriggerExplosion_Params
	{	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.GetArmed
	 */
	struct ABP_Zhukov_IceMines_C_GetArmed_Params
	{	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Zhukov_IceMines_C_BndEvt__AreaTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V2ZA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.ReceiveBeginPlay
	 */
	struct ABP_Zhukov_IceMines_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Zhukov_IceMines.BP_Zhukov_IceMines_C.ExecuteUbergraph_BP_Zhukov_IceMines
	 */
	struct ABP_Zhukov_IceMines_C_ExecuteUbergraph_BP_Zhukov_IceMines_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
