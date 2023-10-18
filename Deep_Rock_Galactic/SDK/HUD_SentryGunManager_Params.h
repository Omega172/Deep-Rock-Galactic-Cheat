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
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped
	 */
	struct UHUD_SentryGunManager_C_ItemEquipped_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo
	 */
	struct UHUD_SentryGunManager_C_OutOfAmmo_Params
	{
	public:
		bool                                                       OutOfAmmo;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8FVG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct
	 */
	struct UHUD_SentryGunManager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry
	 */
	struct UHUD_SentryGunManager_C_AddSentry_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct
	 */
	struct UHUD_SentryGunManager_C_Construct_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded
	 */
	struct UHUD_SentryGunManager_C_OnItemsLoaded_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged
	 */
	struct UHUD_SentryGunManager_C_OnActiveItemsChanged_Params
	{
	public:
		class ARecallableSentryGunItem*                            Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged
	 */
	struct UHUD_SentryGunManager_C_OnItemCurrentAmountChanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility
	 */
	struct UHUD_SentryGunManager_C_UpdateDynamicVisibility_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event
	 */
	struct UHUD_SentryGunManager_C_OnSentryStateChanged_Event_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility
	 */
	struct UHUD_SentryGunManager_C_SetupDynamicVisibility_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event
	 */
	struct UHUD_SentryGunManager_C_OnLaserPointerPressed_Event_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event
	 */
	struct UHUD_SentryGunManager_C_OnLaserPointerReleased_Event_Params
	{	};

	/**
	 * Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager
	 */
	struct UHUD_SentryGunManager_C_ExecuteUbergraph_HUD_SentryGunManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
