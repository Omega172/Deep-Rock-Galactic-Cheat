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
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalClosedTimer
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_OnRep_GoalClosedTimer_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.HandlePopUp
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_HandlePopUp_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalsScored
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_OnRep_GoalsScored_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveBeginPlay
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveTick
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.SetGoalVisible
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_SetGoalVisible_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Throw
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_Throw_Params
	{
	public:
		struct FVector                                             force;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BKMM[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Countdown Completed
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_CountdownCompleted_Params
	{	};

	/**
	 * Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ExecuteUbergraph_BP_Spacerig_Spaceball_Goal
	 */
	struct ABP_Spacerig_Spaceball_Goal_C_ExecuteUbergraph_BP_Spacerig_Spaceball_Goal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2TGF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
