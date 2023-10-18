/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.CreateToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_LoadOut_PerksEquip_Item_C::CreateToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.CreateToolTip");
		
		UITM_LoadOut_PerksEquip_Item_C_CreateToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.IsItemLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ItemLocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::IsItemLocked(bool* ItemLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.IsItemLocked");
		
		UITM_LoadOut_PerksEquip_Item_C_IsItemLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemLocked != nullptr)
			*ItemLocked = params.ItemLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.GetPerkAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::GetPerkAsset(class UPerkAsset** PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.GetPerkAsset");
		
		UITM_LoadOut_PerksEquip_Item_C_GetPerkAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkAsset != nullptr)
			*PerkAsset = params.PerkAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.PreConstruct");
		
		UITM_LoadOut_PerksEquip_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Construct");
		
		UITM_LoadOut_PerksEquip_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Item_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Refresh");
		
		UITM_LoadOut_PerksEquip_Item_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Set Perk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::SetPerk(class UPerkAsset* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Set Perk");
		
		UITM_LoadOut_PerksEquip_Item_C_SetPerk_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Set Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.Set Selected");
		
		UITM_LoadOut_PerksEquip_Item_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Item_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Item_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Item_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Item_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Item_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Item_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item");
		
		UITM_LoadOut_PerksEquip_Item_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadOut_PerksEquip_Item_C*              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Item_C::OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C.OnClicked__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Item_C_OnClicked__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_LoadOut_PerksEquip_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_LoadOut_PerksEquip_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Item.ITM_LoadOut_PerksEquip_Item_C");
		return ptr;
	}

}


