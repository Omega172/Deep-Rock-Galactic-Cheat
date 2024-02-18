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
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetUpgradeToolTip
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetUpgradeToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetIsHovered
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetIsHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.EquipItem
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_EquipItem_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.TryPurchaseItem
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_TryPurchaseItem_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetGrenadeInfo
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetGrenadeInfo_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCraftingCost
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetCraftingCost_Params
	{
	public:
		TArray<struct FCraftingCost>                               Cost;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.OnKeyDown
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.UpdateToolTip
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_UpdateToolTip_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.IsInteractable
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.GetCurrentState
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_GetCurrentState_Params
	{
	public:
		EItemUpgradeStatus                                         ItemState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetState
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetState_Params
	{
	public:
		EItemUpgradeStatus                                         InItemStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DVJX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InRequiredCharacterLevel;                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.Refresh
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_Refresh_Params
	{
	public:
		EItemUpgradeStatus                                         OutState;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.SetItem
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_SetItem_Params
	{
	public:
		class UItemID*                                             GrenadeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  characterID;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemUpgradeStatus                                         OutState;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.PreConstruct
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemTryPurchase__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemTryPurchase__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    GrenadeWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemUnhovered__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemUnhovered__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemHovered__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemHovered__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUnlocked;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon.ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C.ItemEquipped__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C_ItemEquipped__DelegateSignature_Params
	{
	public:
		class UItemID*                                             itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
