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
	 * Function HUD_Itembar.HUD_Itembar_C.OnItemAdded
	 */
	struct UHUD_Itembar_C_OnItemAdded_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.OnClear
	 */
	struct UHUD_Itembar_C_OnClear_Params
	{	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.Construct
	 */
	struct UHUD_Itembar_C_Construct_Params
	{	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped
	 */
	struct UHUD_Itembar_C_OnItemEquipped_Params
	{
	public:
		class UItemsBarIcon*                                       ItemIcon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.Show
	 */
	struct UHUD_Itembar_C_Show_Params
	{	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged
	 */
	struct UHUD_Itembar_C_OnInputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.OnItemClicked
	 */
	struct UHUD_Itembar_C_OnItemClicked_Params
	{	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.PreConstruct
	 */
	struct UHUD_Itembar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.FadeOutFinished
	 */
	struct UHUD_Itembar_C_FadeOutFinished_Params
	{	};

	/**
	 * Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar
	 */
	struct UHUD_Itembar_C_ExecuteUbergraph_HUD_Itembar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
