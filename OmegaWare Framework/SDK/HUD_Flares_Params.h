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
	 * Function HUD_Flares.HUD_Flares_C.SetFlareProduction
	 */
	struct UHUD_Flares_C_SetFlareProduction_Params
	{
	public:
		int32_t                                                    InNextIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InProgress;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.CreateIcons
	 */
	struct UHUD_Flares_C_CreateIcons_Params
	{
	public:
		int32_t                                                    IconCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.OnItemsLoaded
	 */
	struct UHUD_Flares_C_OnItemsLoaded_Params
	{	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.OnFlareProduction
	 */
	struct UHUD_Flares_C_OnFlareProduction_Params
	{
	public:
		int32_t                                                    NextIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD
	 */
	struct UHUD_Flares_C_SetupDynamicHUD_Params
	{	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged
	 */
	struct UHUD_Flares_C_OnFlareCountChanged_Params
	{
	public:
		int32_t                                                    CurrentCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0AUZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 Inventory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.Construct
	 */
	struct UHUD_Flares_C_Construct_Params
	{	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.UpdateVisibility
	 */
	struct UHUD_Flares_C_UpdateVisibility_Params
	{	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed
	 */
	struct UHUD_Flares_C_OnLaserPointerPressed_Params
	{	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event
	 */
	struct UHUD_Flares_C_OnLaserPointerReleased_Event_Params
	{	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.PreConstruct
	 */
	struct UHUD_Flares_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.OnMaxFlareCountChanged_Event
	 */
	struct UHUD_Flares_C_OnMaxFlareCountChanged_Event_Params
	{
	public:
		int32_t                                                    CurrentCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SNMR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 Inventory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares
	 */
	struct UHUD_Flares_C_ExecuteUbergraph_HUD_Flares_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
