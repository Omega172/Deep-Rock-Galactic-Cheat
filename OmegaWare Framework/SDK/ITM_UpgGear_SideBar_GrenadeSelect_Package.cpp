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
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      itemClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::SetActiveGrenade(class UClass* NewClass, bool InEquip, bool IsUnlocked, class UClass** itemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_SetActiveGrenade_Params params {};
		params.NewClass = NewClass;
		params.InEquip = InEquip;
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemClass != nullptr)
			*itemClass = params.itemClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::SetItem(class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_SetItem_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnWidgetCreated(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnWidgetCreated_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_Popup_YesNoPrompt_C*                  YesNoPrompt                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* YesNoPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_SetYesNoPrompt_Params params {};
		params.YesNoPrompt = YesNoPrompt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::RefreshItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_RefreshItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::ResetGrenadePreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_ResetGrenadePreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemID*                                     itemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::ItemEquipped_Event(class UItemID* itemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_ItemEquipped_Event_Params params {};
		params.itemClass = itemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnYesNo(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnYesNo_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemTryPurchase(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemTryPurchase_Params params {};
		params.GrenadeWidget = GrenadeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemUnhovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemUnhovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemHovered(class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemHovered_Params params {};
		params.Widget = Widget;
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnGrenadePurchased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnGrenadePurchased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnGrenadePurchased__DelegateSignature");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnGrenadePurchased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      itemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_SideBar_GrenadeSelect_C::OnItemSelected__DelegateSignature(class UClass* itemClass, bool Equip, bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature");
		
		UITM_UpgGear_SideBar_GrenadeSelect_C_OnItemSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction UITM_UpgGear_SideBar_GrenadeSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_SideBar_GrenadeSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C");
		return ptr;
	}

}


