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
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint
	 */
	struct ABP_ShieldRegenerator_Mover_C_FindTakeOffPoint_Params
	{
	public:
		struct FVector                                             TakeOffPoint;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator
	 */
	struct ABP_ShieldRegenerator_Mover_C_MoveToInstigator_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5N2Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc
	 */
	struct ABP_ShieldRegenerator_Mover_C_LiftOff__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc
	 */
	struct ABP_ShieldRegenerator_Mover_C_LiftOff__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay
	 */
	struct ABP_ShieldRegenerator_Mover_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff
	 */
	struct ABP_ShieldRegenerator_Mover_C_All_LiftOff_Params
	{
	public:
		struct FVector                                             InHoverPoint;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature
	 */
	struct ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature_Params
	{
	public:
		EDeepMovementState                                         State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects
	 */
	struct ABP_ShieldRegenerator_Mover_C_BeginLiftOffEffects_Params
	{	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor
	 */
	struct ABP_ShieldRegenerator_Mover_C_BeginMoveToActor_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned
	 */
	struct ABP_ShieldRegenerator_Mover_C_OnReturned_Params
	{	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature
	 */
	struct ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover
	 */
	struct ABP_ShieldRegenerator_Mover_C_ExecuteUbergraph_BP_ShieldRegenerator_Mover_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GRMV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
