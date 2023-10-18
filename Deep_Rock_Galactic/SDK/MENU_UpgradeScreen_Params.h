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
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview
	 */
	struct UMENU_UpgradeScreen_C_ToggleAutoGearStatsPreview_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7LET[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom
	 */
	struct UMENU_UpgradeScreen_C_ChangeItemCustom_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EquipItem;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnlocked;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex
	 */
	struct UMENU_UpgradeScreen_C_GetItemTabIndex_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab
	 */
	struct UMENU_UpgradeScreen_C_SelectNextTab_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NWI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt
	 */
	struct UMENU_UpgradeScreen_C_GetYesNoPrompt_Params
	{
	public:
		class UBasic_Popup_YesNoPrompt_C*                          YesNoPrompt;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats
	 */
	struct UMENU_UpgradeScreen_C_RefreshGearStats_Params
	{
	public:
		class FString                                              Entry;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems
	 */
	struct UMENU_UpgradeScreen_C_GetTabItems_Params
	{
	public:
		class UClass*                                              InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              InCategory;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R75U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      TabItems;                                                // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs
	 */
	struct UMENU_UpgradeScreen_C_BuildGearTabs_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem
	 */
	struct UMENU_UpgradeScreen_C_ChangeItem_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails
	 */
	struct UMENU_UpgradeScreen_C_RefreshItemDetails_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show
	 */
	struct UMENU_UpgradeScreen_C_Show_Params
	{
	public:
		class UClass*                                              InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              InItemCategory;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ACVM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct
	 */
	struct UMENU_UpgradeScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand
	 */
	struct UMENU_UpgradeScreen_C_ReceiveSelectNextCommand_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand
	 */
	struct UMENU_UpgradeScreen_C_ReceiveSelectPreviousCommand_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct
	 */
	struct UMENU_UpgradeScreen_C_Construct_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed
	 */
	struct UMENU_UpgradeScreen_C_OnClosed_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown
	 */
	struct UMENU_UpgradeScreen_C_OnShown_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand
	 */
	struct UMENU_UpgradeScreen_C_ReceiveCloseCommand_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand
	 */
	struct UMENU_UpgradeScreen_C_ReceiveOkCommand_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected
	 */
	struct UMENU_UpgradeScreen_C_OnGrenadeSelected_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Equip;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnlocked;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent
	 */
	struct UMENU_UpgradeScreen_C_OnPreviewUpgradeChangedEvent_Params
	{
	public:
		class UItemUpgrade*                                        PreviewUpgrade;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded
	 */
	struct UMENU_UpgradeScreen_C_OnItemRewarded_Params
	{
	public:
		struct FMasteryItem                                        Reward;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished
	 */
	struct UMENU_UpgradeScreen_C_OnFinished_Params
	{
	public:
		TArray<class UUnlockReward*>                               Rewards;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Basic_Popup_YesNoPrompt_K2Node_ComponentBoundEvent_8_OnClickedYesNo__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_BndEvt__Basic_Popup_YesNoPrompt_K2Node_ComponentBoundEvent_8_OnClickedYesNo__DelegateSignature_Params
	{
	public:
		bool                                                       InYes;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen
	 */
	struct UMENU_UpgradeScreen_C_ExecuteUbergraph_MENU_UpgradeScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_OnItemPurchased__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_OnItemChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              NewItemClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature
	 */
	struct UMENU_UpgradeScreen_C_OnCloseClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
