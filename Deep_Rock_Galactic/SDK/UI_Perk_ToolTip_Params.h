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
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
	 */
	struct UUI_Perk_ToolTip_C_OnPerkClaimed_Event_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClaimedTier;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
	 */
	struct UUI_Perk_ToolTip_C_SetPerkAsset_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowRank;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.KPI_Intro
	 */
	struct UUI_Perk_ToolTip_C_KPI_Intro_Params
	{	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Equip_Intro
	 */
	struct UUI_Perk_ToolTip_C_Equip_Intro_Params
	{	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank
	 */
	struct UUI_Perk_ToolTip_C_ShowRank_Params
	{
	public:
		bool                                                       InShowRank;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Reset_Animations
	 */
	struct UUI_Perk_ToolTip_C_Reset_Animations_Params
	{	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.AfterFancyDelay
	 */
	struct UUI_Perk_ToolTip_C_AfterFancyDelay_Params
	{	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
	 */
	struct UUI_Perk_ToolTip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
	 */
	struct UUI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
