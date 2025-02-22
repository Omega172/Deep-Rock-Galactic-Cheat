﻿#pragma once

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
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Ready
	 */
	struct ABP_BRT_Bomb_C_OnRep_Ready_Params
	{	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.OnRep_Triggered
	 */
	struct ABP_BRT_Bomb_C_OnRep_Triggered_Params
	{	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.UserConstructionScript
	 */
	struct ABP_BRT_Bomb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.TriggerExplosion
	 */
	struct ABP_BRT_Bomb_C_TriggerExplosion_Params
	{	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.GetArmed
	 */
	struct ABP_BRT_Bomb_C_GetArmed_Params
	{	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.BndEvt__Area Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BRT_Bomb_C_BndEvt__AreaTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IE1M[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.ReceiveBeginPlay
	 */
	struct ABP_BRT_Bomb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BRT_Bomb.BP_BRT_Bomb_C.ExecuteUbergraph_BP_BRT_Bomb
	 */
	struct ABP_BRT_Bomb_C_ExecuteUbergraph_BP_BRT_Bomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
