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
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_Refresh_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkUsageType                                             PerkType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_AddPerk_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_OnClicked_Event_Params
	{
	public:
		class UITM_LoadOut_PerksEquip_Item_C*                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_AddNone_Params
	{	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_OnNoneClicked_Event_Params
	{	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.AddWidgetToBox
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_AddWidgetToBox_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ClearWidgetBox
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_ClearWidgetBox_Params
	{	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8GB3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature
	 */
	struct UITM_Loadout_PerksEquip_Selection_C_OnPerkClicked__DelegateSignature_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
