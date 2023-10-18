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
	 * Function HUD_Grenades.HUD_Grenades_C.PreConstruct
	 */
	struct UHUD_Grenades_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged
	 */
	struct UHUD_Grenades_C_OnGrenadeCountChanged_Params
	{
	public:
		int32_t                                                    CurrentCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.Construct
	 */
	struct UHUD_Grenades_C_Construct_Params
	{	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.Setup Dynamic HUD
	 */
	struct UHUD_Grenades_C_SetupDynamicHUD_Params
	{	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.OnItemEquipped_Event
	 */
	struct UHUD_Grenades_C_OnItemEquipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.OnItemUnequipped_Event
	 */
	struct UHUD_Grenades_C_OnItemUnequipped_Event_Params
	{
	public:
		class AItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.Update Visibility
	 */
	struct UHUD_Grenades_C_UpdateVisibility_Params
	{	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerPressed
	 */
	struct UHUD_Grenades_C_OnLaserPointerPressed_Params
	{	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerReleased
	 */
	struct UHUD_Grenades_C_OnLaserPointerReleased_Params
	{	};

	/**
	 * Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades
	 */
	struct UHUD_Grenades_C_ExecuteUbergraph_HUD_Grenades_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
