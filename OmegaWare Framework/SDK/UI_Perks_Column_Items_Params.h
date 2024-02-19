#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable
	 */
	struct UUI_Perks_Column_Items_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier
	 */
	struct UUI_Perks_Column_Items_C_RefreshTier_Params
	{	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk
	 */
	struct UUI_Perks_Column_Items_C_AddPerk_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPerkAsset*                                          OutPerk;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_Perks_Item_C*                                    OutWidget;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct
	 */
	struct UUI_Perks_Column_Items_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct
	 */
	struct UUI_Perks_Column_Items_C_Construct_Params
	{	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event
	 */
	struct UUI_Perks_Column_Items_C_OnPerkClicked_Event_Params
	{
	public:
		class UUI_Perks_Item_C*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event
	 */
	struct UUI_Perks_Column_Items_C_OnPerkClaimed_Event_Params
	{
	public:
		class UPerkAsset*                                          Perk;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClaimedTier;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks
	 */
	struct UUI_Perks_Column_Items_C_SetPerks_Params
	{
	public:
		TArray<class UPerkAsset*>                                  Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items
	 */
	struct UUI_Perks_Column_Items_C_ExecuteUbergraph_UI_Perks_Column_Items_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature
	 */
	struct UUI_Perks_Column_Items_C_OnPerkClicked__DelegateSignature_Params
	{
	public:
		class UUI_Perks_Item_C*                                    PerkWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
