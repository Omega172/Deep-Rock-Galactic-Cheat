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
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_SetActiveGrenade_Params
	{
	public:
		class UClass*                                              NewClass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InEquip;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnlocked;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WN1Q[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              itemClass;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_SetItem_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnWidgetCreated_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_SetYesNoPrompt_Params
	{
	public:
		class UBasic_Popup_YesNoPrompt_C*                          YesNoPrompt;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_RefreshItems_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_ResetGrenadePreview_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_ItemEquipped_Event_Params
	{
	public:
		class UItemID*                                             itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnYesNo_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemTryPurchase_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    GrenadeWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemUnhovered_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemHovered_Params
	{
	public:
		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUnlocked;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HYDO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnGrenadePurchased__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnGrenadePurchased__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemSelected__DelegateSignature_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Equip;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnlocked;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
