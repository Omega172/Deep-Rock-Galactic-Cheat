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
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout
	 */
	struct UITM_UpgGear_SideBar_C_SetUpgradePurchasedShout_Params
	{
	public:
		class UDialogDataAsset*                                    ShoutUpgradePurchased;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem
	 */
	struct UITM_UpgGear_SideBar_C_SetItem_Params
	{
	public:
		class UClass*                                              InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemCategory                                              InCategory;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt
	 */
	struct UITM_UpgGear_SideBar_C_SetYesNoPrompt_Params
	{
	public:
		class UBasic_Popup_YesNoPrompt_C*                          Prompt;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_C_BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_FlatButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation
	 */
	struct UITM_UpgGear_SideBar_C_BuyConfirmation_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased
	 */
	struct UITM_UpgGear_SideBar_C_UpgradePurchased_Params
	{
	public:
		class UITM_UpgGear_TierRow_C*                              Row;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct
	 */
	struct UITM_UpgGear_SideBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar
	 */
	struct UITM_UpgGear_SideBar_C_ExecuteUbergraph_ITM_UpgGear_SideBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7O8S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature
	 */
	struct UITM_UpgGear_SideBar_C_OnItemPurchased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
