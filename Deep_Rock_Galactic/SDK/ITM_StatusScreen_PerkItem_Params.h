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
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget
	 */
	struct UITM_StatusScreen_PerkItem_C_Get_ItemButton_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset
	 */
	struct UITM_StatusScreen_PerkItem_C_GetPerkAsset_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk
	 */
	struct UITM_StatusScreen_PerkItem_C_SetPerk_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected
	 */
	struct UITM_StatusScreen_PerkItem_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh
	 */
	struct UITM_StatusScreen_PerkItem_C_Refresh_Params
	{	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct
	 */
	struct UITM_StatusScreen_PerkItem_C_Construct_Params
	{	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct
	 */
	struct UITM_StatusScreen_PerkItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem
	 */
	struct UITM_StatusScreen_PerkItem_C_ExecuteUbergraph_ITM_StatusScreen_PerkItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature
	 */
	struct UITM_StatusScreen_PerkItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_StatusScreen_PerkItem_C*                        Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
