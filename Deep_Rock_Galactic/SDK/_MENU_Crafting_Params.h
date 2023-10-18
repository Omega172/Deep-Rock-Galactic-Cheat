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
	 * Function _MENU_Crafting._MENU_Crafting_C.RefreshCanAfford
	 */
	struct U_MENU_Crafting_C_RefreshCanAfford_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.SetPreviewItem
	 */
	struct U_MENU_Crafting_C_SetPreviewItem_Params
	{
	public:
		unsigned char                                              UnknownData_Y1DL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Show;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0OY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank
	 */
	struct U_MENU_Crafting_C_GetNextAvailableRank_Params
	{
	public:
		TArray<class UVanityItem*>                                 InVanityItems;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    VisibleRank;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp
	 */
	struct U_MENU_Crafting_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.PrevGroup
	 */
	struct U_MENU_Crafting_C_PrevGroup_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.NextGroup
	 */
	struct U_MENU_Crafting_C_NextGroup_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.ClearItems
	 */
	struct U_MENU_Crafting_C_ClearItems_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.ShowItems
	 */
	struct U_MENU_Crafting_C_ShowItems_Params
	{
	public:
		EVanitySlot                                                Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TYZ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.Construct
	 */
	struct U_MENU_Crafting_C_Construct_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.OnChanged
	 */
	struct U_MENU_Crafting_C_OnChanged_Params
	{
	public:
		class UClass*                                              CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.PreviewItem
	 */
	struct U_MENU_Crafting_C_PreviewItem_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.HidePreview
	 */
	struct U_MENU_Crafting_C_HidePreview_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.OnShown
	 */
	struct U_MENU_Crafting_C_OnShown_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.Update
	 */
	struct U_MENU_Crafting_C_Update_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.OnClosed
	 */
	struct U_MENU_Crafting_C_OnClosed_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.BndEvt___MENU_Crafting_MasteryBar_K2Node_ComponentBoundEvent_4_OnMasteryAnimFinished__DelegateSignature
	 */
	struct U_MENU_Crafting_C_BndEvt___MENU_Crafting_MasteryBar_K2Node_ComponentBoundEvent_4_OnMasteryAnimFinished__DelegateSignature_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.ScheduleRefreshCanAfford
	 */
	struct U_MENU_Crafting_C_ScheduleRefreshCanAfford_Params
	{	};

	/**
	 * Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting
	 */
	struct U_MENU_Crafting_C_ExecuteUbergraph__MENU_Crafting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AXC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
