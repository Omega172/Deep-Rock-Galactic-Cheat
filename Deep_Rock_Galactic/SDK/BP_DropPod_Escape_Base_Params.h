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
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.DisableDynamicElements
	 */
	struct ABP_DropPod_Escape_Base_C_DisableDynamicElements_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandlePhotosentitivity
	 */
	struct ABP_DropPod_Escape_Base_C_HandlePhotosentitivity_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation
	 */
	struct ABP_DropPod_Escape_Base_C_GetFrontLocation_Params
	{
	public:
		struct FVector                                             DoorLocation;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod
	 */
	struct ABP_DropPod_Escape_Base_C_IsAnyCharacterInEscapePod_Params
	{
	public:
		bool                                                       EscapePodPopulated;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5MJY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod
	 */
	struct ABP_DropPod_Escape_Base_C_LockCharactersInPod_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript
	 */
	struct ABP_DropPod_Escape_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact
	 */
	struct ABP_DropPod_Escape_Base_C_OnDroppodImpact_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JREU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted
	 */
	struct ABP_DropPod_Escape_Base_C_OnDrillingStarted_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay
	 */
	struct ABP_DropPod_Escape_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip
	 */
	struct ABP_DropPod_Escape_Base_C_OnDonkeyReachedDropShip_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting
	 */
	struct ABP_DropPod_Escape_Base_C_OnDeparting_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff
	 */
	struct ABP_DropPod_Escape_Base_C_OnPrepForTakeOff_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded
	 */
	struct ABP_DropPod_Escape_Base_C_OnMuleLoaded_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter
	 */
	struct ABP_DropPod_Escape_Base_C_OnCharacterEnter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit
	 */
	struct ABP_DropPod_Escape_Base_C_OnCharacterExit_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts
	 */
	struct ABP_DropPod_Escape_Base_C_HandleHurryShouts_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	 */
	struct ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	 */
	struct ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
	 */
	struct ABP_DropPod_Escape_Base_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnRepDoorState
	 */
	struct ABP_DropPod_Escape_Base_C_OnRepDoorState_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleBayOpenedDispatch_Event_2
	 */
	struct ABP_DropPod_Escape_Base_C_OnMuleBayOpenedDispatch_Event_2_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff
	 */
	struct ABP_DropPod_Escape_Base_C_ForceTakeoff_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning
	 */
	struct ABP_DropPod_Escape_Base_C_RecieveReturnTimerFifteenSecondWarning_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired
	 */
	struct ABP_DropPod_Escape_Base_C_RecieveReturnTimerExpired_Params
	{	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod
	 */
	struct ABP_DropPod_Escape_Base_C_OnAllDwavesInsidePod_Params
	{
	public:
		bool                                                       AllInside;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base
	 */
	struct ABP_DropPod_Escape_Base_C_ExecuteUbergraph_BP_DropPod_Escape_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XLED[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
