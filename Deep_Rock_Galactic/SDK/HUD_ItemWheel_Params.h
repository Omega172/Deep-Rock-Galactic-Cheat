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
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems
	 */
	struct UHUD_ItemWheel_C_SwapUpperItems_Params
	{
	public:
		class UWidget*                                             Unselected;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Selected;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded
	 */
	struct UHUD_ItemWheel_C_OnItemAdded_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct
	 */
	struct UHUD_ItemWheel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped
	 */
	struct UHUD_ItemWheel_C_OnItemEquipped_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon
	 */
	struct UHUD_ItemWheel_C_AddIcon_Params
	{
	public:
		class UItemsBarIcon*                                       Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear
	 */
	struct UHUD_ItemWheel_C_OnClear_Params
	{	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.Construct
	 */
	struct UHUD_ItemWheel_C_Construct_Params
	{	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged
	 */
	struct UHUD_ItemWheel_C_OnInputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.Show
	 */
	struct UHUD_ItemWheel_C_Show_Params
	{	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked
	 */
	struct UHUD_ItemWheel_C_OnItemClicked_Params
	{	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded
	 */
	struct UHUD_ItemWheel_C_OnSupplyItemAdded_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped
	 */
	struct UHUD_ItemWheel_C_OnSupplyItemUnequipped_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped
	 */
	struct UHUD_ItemWheel_C_OnSupplyItemEquipped_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished
	 */
	struct UHUD_ItemWheel_C_OnFadeInOutFinished_Params
	{	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted
	 */
	struct UHUD_ItemWheel_C_OnFadeInOutStarted_Params
	{	};

	/**
	 * Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel
	 */
	struct UHUD_ItemWheel_C_ExecuteUbergraph_HUD_ItemWheel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
