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
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.UpdateAmbienceAudioComponents
	 */
	struct ALVL_SpaceRig_C_UpdateAmbienceAudioComponents_Params
	{	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.OnRep_BarLightColor
	 */
	struct ALVL_SpaceRig_C_OnRep_BarLightColor_Params
	{	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.GetEventOrDefaultAmbiance
	 */
	struct ALVL_SpaceRig_C_GetEventOrDefaultAmbiance_Params
	{
	public:
		class USoundCue*                                           OutAmbiance;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.Set Beer Event Active
	 */
	struct ALVL_SpaceRig_C_SetBeerEventActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.OnLoaded_C80486AD4277C47F32FE05A37AB96333
	 */
	struct ALVL_SpaceRig_C_OnLoaded_C80486AD4277C47F32FE05A37AB96333_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.ReceiveBeginPlay
	 */
	struct ALVL_SpaceRig_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.OnLeaveSpacerig_Event_1
	 */
	struct ALVL_SpaceRig_C_OnLeaveSpacerig_Event_1_Params
	{	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature_Params
	{
	public:
		class AFSDPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature_Params
	{
	public:
		class AFSDPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature_Params
	{
	public:
		class AFSDPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature_Params
	{
	public:
		class AFSDPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.Play medbay banter
	 */
	struct ALVL_SpaceRig_C_Playmedbaybanter_Params
	{
	public:
		class AFSDPlayerController*                                Playercontroller;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.OnFreeBeerRewardChanged
	 */
	struct ALVL_SpaceRig_C_OnFreeBeerRewardChanged_Params
	{
	public:
		bool                                                       IsBeersFree;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.OnCountdownChanged_Event_1
	 */
	struct ALVL_SpaceRig_C_OnCountdownChanged_Event_1_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.StreamSubLevels
	 */
	struct ALVL_SpaceRig_C_StreamSubLevels_Params
	{	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__LVL_SpaceRig_TriggerBox_TrashCompactor_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature
	 */
	struct ALVL_SpaceRig_C_BndEvt__LVL_SpaceRig_TriggerBox_TrashCompactor_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.SpawnTrashCompactor
	 */
	struct ALVL_SpaceRig_C_SpawnTrashCompactor_Params
	{
	public:
		float                                                      Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.OnStreamerModeChanged
	 */
	struct ALVL_SpaceRig_C_OnStreamerModeChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.HandleEventSpecifics
	 */
	struct ALVL_SpaceRig_C_HandleEventSpecifics_Params
	{	};

	/**
	 * Function LVL_SpaceRig.LVL_SpaceRig_C.ExecuteUbergraph_LVL_SpaceRig
	 */
	struct ALVL_SpaceRig_C_ExecuteUbergraph_LVL_SpaceRig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E60C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
