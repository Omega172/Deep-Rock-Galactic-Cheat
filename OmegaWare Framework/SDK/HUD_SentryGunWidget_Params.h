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
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo
	 */
	struct UHUD_SentryGunWidget_C_IsOutOfAmmo_Params
	{
	public:
		bool                                                       OutOfAmmo;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState
	 */
	struct UHUD_SentryGunWidget_C_GetMovementState_Params
	{
	public:
		ERecallableActorState                                      State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry
	 */
	struct UHUD_SentryGunWidget_C_SetSentry_Params
	{
	public:
		class ARecallableSentryGun*                                SentryGun;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home
	 */
	struct UHUD_SentryGunWidget_C_SetSentryHome_Params
	{	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed
	 */
	struct UHUD_SentryGunWidget_C_OnAmmoCountChanged_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init
	 */
	struct UHUD_SentryGunWidget_C_Init_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARecallableSentryGunItem*                            Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged
	 */
	struct UHUD_SentryGunWidget_C_OnActiveItemsChanged_Params
	{
	public:
		class ARecallableSentryGunItem*                            Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged
	 */
	struct UHUD_SentryGunWidget_C_OnStateChanged_Params
	{
	public:
		class ARecallableActor*                                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERecallableActorState                                      State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State
	 */
	struct UHUD_SentryGunWidget_C_UpdateState_Params
	{
	public:
		class FString                                              reason;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct
	 */
	struct UHUD_SentryGunWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged
	 */
	struct UHUD_SentryGunWidget_C_OnSelectedItemChanged_Params
	{
	public:
		class ARecallableSentryGun*                                SentryGun;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected
	 */
	struct UHUD_SentryGunWidget_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped
	 */
	struct UHUD_SentryGunWidget_C_OnItemEquipped_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged
	 */
	struct UHUD_SentryGunWidget_C_OnGunStateChanged_Params
	{
	public:
		class ARedeployableSentryGun*                              Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERedeployableSentryGunState                                NewState;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion
	 */
	struct UHUD_SentryGunWidget_C_CheckForAmmoDepletion_Params
	{	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event
	 */
	struct UHUD_SentryGunWidget_C_OnDeployProgress_Event_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct
	 */
	struct UHUD_SentryGunWidget_C_Construct_Params
	{	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished
	 */
	struct UHUD_SentryGunWidget_C_OnAmmoDepletedFinished_Params
	{	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event
	 */
	struct UHUD_SentryGunWidget_C_OnItemUnequipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget
	 */
	struct UHUD_SentryGunWidget_C_ExecuteUbergraph_HUD_SentryGunWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature
	 */
	struct UHUD_SentryGunWidget_C_OnSentryStateChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
