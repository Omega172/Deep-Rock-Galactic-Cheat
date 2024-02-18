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
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount
	 */
	struct AEVENT_DropPodDefense_Base_C_OnRep_DefendingPlayerCount_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount
	 */
	struct AEVENT_DropPodDefense_Base_C_UpdateDefenderCount_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus
	 */
	struct AEVENT_DropPodDefense_Base_C_GetDefenderBonus_Params
	{
	public:
		int32_t                                                    DefendingPlayers;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending
	 */
	struct AEVENT_DropPodDefense_Base_C_AnyPlayersDefending_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WY5M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress
	 */
	struct AEVENT_DropPodDefense_Base_C_OnRep_Progress_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript
	 */
	struct AEVENT_DropPodDefense_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay
	 */
	struct AEVENT_DropPodDefense_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick
	 */
	struct AEVENT_DropPodDefense_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1UAP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded
	 */
	struct AEVENT_DropPodDefense_Base_C_EventSucceded_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed
	 */
	struct AEVENT_DropPodDefense_Base_C_EventFailed_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base
	 */
	struct AEVENT_DropPodDefense_Base_C_ExecuteUbergraph_EVENT_DropPodDefense_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature
	 */
	struct AEVENT_DropPodDefense_Base_C_DefenderCountUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    DefenderCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature
	 */
	struct AEVENT_DropPodDefense_Base_C_ProgressUpdated__DelegateSignature_Params
	{
	public:
		float                                                      NewProgress;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature
	 */
	struct AEVENT_DropPodDefense_Base_C_DefendFailed__DelegateSignature_Params
	{	};

	/**
	 * Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature
	 */
	struct AEVENT_DropPodDefense_Base_C_DefendSucceded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
