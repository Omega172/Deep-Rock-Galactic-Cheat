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
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription
	 */
	struct ABP_SentryGun_Moveable_C_GetStateDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer
	 */
	struct ABP_SentryGun_Moveable_C_SpawnAudioOnPlayer_Params
	{
	public:
		class USoundBase*                                          audio;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass
	 */
	struct ABP_SentryGun_Moveable_C_GetSentryGunClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner
	 */
	struct ABP_SentryGun_Moveable_C_GetSentryOwner_Params
	{
	public:
		class APlayerCharacter*                                    AsPlayerCharacter;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun
	 */
	struct ABP_SentryGun_Moveable_C_GetSentryGun_Params
	{
	public:
		class ASentryGun*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay
	 */
	struct ABP_SentryGun_Moveable_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested
	 */
	struct ABP_SentryGun_Moveable_C_OnMoveRequested_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event
	 */
	struct ABP_SentryGun_Moveable_C_OnStateChanged_Event_Params
	{
	public:
		class ARedeployableSentryGun*                              Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERedeployableSentryGunState                                NewState;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady
	 */
	struct ABP_SentryGun_Moveable_C_ReceiveOnSentryReady_Params
	{
	public:
		class ASentryGun*                                          SentryGun;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1
	 */
	struct ABP_SentryGun_Moveable_C_OnAmmoCountChanged_Event_1_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild
	 */
	struct ABP_SentryGun_Moveable_C_AudioReadyToBuild_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving
	 */
	struct ABP_SentryGun_Moveable_C_OnMoving_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished
	 */
	struct ABP_SentryGun_Moveable_C_OnMoveFinished_Params
	{
	public:
		bool                                                       returnedHome;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove
	 */
	struct ABP_SentryGun_Moveable_C_AudioBeginMove_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished
	 */
	struct ABP_SentryGun_Moveable_C_AudioMoveFinished_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome
	 */
	struct ABP_SentryGun_Moveable_C_AudioReturnedHome_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged
	 */
	struct ABP_SentryGun_Moveable_C_ReceiveOnStateChanged_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon
	 */
	struct ABP_SentryGun_Moveable_C_UpdateOutlineAndIcon_Params
	{	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged
	 */
	struct ABP_SentryGun_Moveable_C_OnSentryStateChanged_Params
	{
	public:
		class ARedeployableSentryGun*                              Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERedeployableSentryGunState                                NewState;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleNameplatesEvent_Event_1
	 */
	struct ABP_SentryGun_Moveable_C_OnToggleNameplatesEvent_Event_1_Params
	{
	public:
		bool                                                       boolValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event
	 */
	struct ABP_SentryGun_Moveable_C_OnItemEquipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged
	 */
	struct ABP_SentryGun_Moveable_C_OnSelectedItemChanged_Params
	{
	public:
		class ARecallableSentryGun*                                SentryGun;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable
	 */
	struct ABP_SentryGun_Moveable_C_ExecuteUbergraph_BP_SentryGun_Moveable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
