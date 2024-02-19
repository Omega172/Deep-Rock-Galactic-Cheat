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
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetNeedsLegs
	 */
	struct ABP_MiniMule_Salvage_C_GetNeedsLegs_Params
	{
	public:
		bool                                                       OutNeedsLegs;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Set Detect Lost Legs
	 */
	struct ABP_MiniMule_Salvage_C_SetDetectLostLegs_Params
	{
	public:
		bool                                                       InDetect;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZEL1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.PlayDistressAudio
	 */
	struct ABP_MiniMule_Salvage_C_PlayDistressAudio_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent
	 */
	struct ABP_MiniMule_Salvage_C_TryDestroyComponent_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState
	 */
	struct ABP_MiniMule_Salvage_C_GetState_Params
	{
	public:
		EMiniMule_State                                            NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0LIK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState
	 */
	struct ABP_MiniMule_Salvage_C_SetState_Params
	{
	public:
		EMiniMule_State                                            EnumValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript
	 */
	struct ABP_MiniMule_Salvage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc
	 */
	struct ABP_MiniMule_Salvage_C_SphereTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc
	 */
	struct ABP_MiniMule_Salvage_C_SphereTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc
	 */
	struct ABP_MiniMule_Salvage_C_Intensity__FinishedFunc_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc
	 */
	struct ABP_MiniMule_Salvage_C_Intensity__UpdateFunc_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod
	 */
	struct ABP_MiniMule_Salvage_C_GotoDropPod_Params
	{
	public:
		class ABP_DropPod_Base_C*                                  DropPod;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer
	 */
	struct ABP_MiniMule_Salvage_C_Cheat_TeleportPlayer_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay
	 */
	struct ABP_MiniMule_Salvage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YMIS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon
	 */
	struct ABP_MiniMule_Salvage_C_StopBeacon_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair
	 */
	struct ABP_MiniMule_Salvage_C_Cheat_Repair_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature_Params
	{
	public:
		class URepairableComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature_Params
	{
	public:
		class URepairableComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature_Params
	{
	public:
		class URepairableComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI
	 */
	struct ABP_MiniMule_Salvage_C_OnMessageAI_Params
	{
	public:
		class FName                                                TriggerName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnFallToTerrainStateChanged
	 */
	struct ABP_MiniMule_Salvage_C_OnFallToTerrainStateChanged_Params
	{
	public:
		bool                                                       IsFalling;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnLegsSetVisible
	 */
	struct ABP_MiniMule_Salvage_C_OnLegsSetVisible_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.PingFX
	 */
	struct ABP_MiniMule_Salvage_C_PingFX_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J71V[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature
	 */
	struct ABP_MiniMule_Salvage_C_BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetControlledByDropShip
	 */
	struct ABP_MiniMule_Salvage_C_SetControlledByDropShip_Params
	{
	public:
		bool                                                       Control;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnRep_IsDown
	 */
	struct ABP_MiniMule_Salvage_C_OnRep_IsDown_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.CheatRepair
	 */
	struct ABP_MiniMule_Salvage_C_CheatRepair_Params
	{	};

	/**
	 * Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage
	 */
	struct ABP_MiniMule_Salvage_C_ExecuteUbergraph_BP_MiniMule_Salvage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
