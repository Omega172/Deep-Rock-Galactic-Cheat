/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_UpgradeScreen_C::ToggleAutoGearStatsPreview(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview");
		
		UMENU_UpgradeScreen_C_ToggleAutoGearStatsPreview_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EquipItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_UpgradeScreen_C::ChangeItemCustom(class UClass* InItemClass, bool EquipItem, bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom");
		
		UMENU_UpgradeScreen_C_ChangeItemCustom_Params params {};
		params.InItemClass = InItemClass;
		params.EquipItem = EquipItem;
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::GetItemTabIndex(class UClass* InItemClass, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex");
		
		UMENU_UpgradeScreen_C_GetItemTabIndex_Params params {};
		params.InItemClass = InItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::SelectNextTab(int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab");
		
		UMENU_UpgradeScreen_C_SelectNextTab_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_Popup_YesNoPrompt_C*                  YesNoPrompt                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::GetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C** YesNoPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt");
		
		UMENU_UpgradeScreen_C_GetYesNoPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (YesNoPrompt != nullptr)
			*YesNoPrompt = params.YesNoPrompt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::RefreshGearStats(const class FString& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats");
		
		UMENU_UpgradeScreen_C_RefreshGearStats_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              TabItems                                                   (Parm, OutParm)
	 */
	void UMENU_UpgradeScreen_C::GetTabItems(class UClass* InCharacterClass, EItemCategory InCategory, TArray<class UClass*>* TabItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems");
		
		UMENU_UpgradeScreen_C_GetTabItems_Params params {};
		params.InCharacterClass = InCharacterClass;
		params.InCategory = InCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TabItems != nullptr)
			*TabItems = params.TabItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BuildGearTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs");
		
		UMENU_UpgradeScreen_C_BuildGearTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::ChangeItem(class UClass* InItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem");
		
		UMENU_UpgradeScreen_C_ChangeItem_Params params {};
		params.InItemClass = InItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::RefreshItemDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails");
		
		UMENU_UpgradeScreen_C_RefreshItemDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      InItemCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::Show(class UClass* InCharacterClass, class UClass* InItemClass, EItemCategory InItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show");
		
		UMENU_UpgradeScreen_C_Show_Params params {};
		params.InCharacterClass = InCharacterClass;
		params.InItemClass = InItemClass;
		params.InItemCategory = InItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_UpgradeScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct");
		
		UMENU_UpgradeScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::ReceiveSelectNextCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand");
		
		UMENU_UpgradeScreen_C_ReceiveSelectNextCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::ReceiveSelectPreviousCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand");
		
		UMENU_UpgradeScreen_C_ReceiveSelectPreviousCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct");
		
		UMENU_UpgradeScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed");
		
		UMENU_UpgradeScreen_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown");
		
		UMENU_UpgradeScreen_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::ReceiveCloseCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand");
		
		UMENU_UpgradeScreen_C_ReceiveCloseCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::ReceiveOkCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand");
		
		UMENU_UpgradeScreen_C_ReceiveOkCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      itemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_UpgradeScreen_C::OnGrenadeSelected(class UClass* itemClass, bool Equip, bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected");
		
		UMENU_UpgradeScreen_C_OnGrenadeSelected_Params params {};
		params.itemClass = itemClass;
		params.Equip = Equip;
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                PreviewUpgrade                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::OnPreviewUpgradeChangedEvent(class UItemUpgrade* PreviewUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent");
		
		UMENU_UpgradeScreen_C_OnPreviewUpgradeChangedEvent_Params params {};
		params.PreviewUpgrade = PreviewUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasteryItem                                Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UMENU_UpgradeScreen_C::OnItemRewarded(const struct FMasteryItem& Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded");
		
		UMENU_UpgradeScreen_C_OnItemRewarded_Params params {};
		params.Reward = Reward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUnlockReward*>                       Rewards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMENU_UpgradeScreen_C::OnFinished(TArray<class UUnlockReward*>* Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished");
		
		UMENU_UpgradeScreen_C_OnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rewards != nullptr)
			*Rewards = params.Rewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Basic_Popup_YesNoPrompt_K2Node_ComponentBoundEvent_8_OnClickedYesNo__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InYes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_UpgradeScreen_C::BndEvt__Basic_Popup_YesNoPrompt_K2Node_ComponentBoundEvent_8_OnClickedYesNo__DelegateSignature(bool InYes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Basic_Popup_YesNoPrompt_K2Node_ComponentBoundEvent_8_OnClickedYesNo__DelegateSignature");
		
		UMENU_UpgradeScreen_C_BndEvt__Basic_Popup_YesNoPrompt_K2Node_ComponentBoundEvent_8_OnClickedYesNo__DelegateSignature_Params params {};
		params.InYes = InYes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::ExecuteUbergraph_MENU_UpgradeScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen");
		
		UMENU_UpgradeScreen_C_ExecuteUbergraph_MENU_UpgradeScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::OnItemPurchased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature");
		
		UMENU_UpgradeScreen_C_OnItemPurchased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewItemClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_UpgradeScreen_C::OnItemChanged__DelegateSignature(class UClass* NewItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature");
		
		UMENU_UpgradeScreen_C_OnItemChanged__DelegateSignature_Params params {};
		params.NewItemClass = NewItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_UpgradeScreen_C::OnCloseClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature");
		
		UMENU_UpgradeScreen_C_OnCloseClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMENU_UpgradeScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMENU_UpgradeScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MENU_UpgradeScreen.MENU_UpgradeScreen_C");
		return ptr;
	}

}


