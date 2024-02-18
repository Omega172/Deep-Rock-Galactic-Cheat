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
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_StatusScreen_PerkItem_C::Get_ItemButton_ToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget");
		
		UITM_StatusScreen_PerkItem_C_Get_ItemButton_ToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_StatusScreen_PerkItem_C::GetPerkAsset(class UPerkAsset** PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset");
		
		UITM_StatusScreen_PerkItem_C_GetPerkAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkAsset != nullptr)
			*PerkAsset = params.PerkAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_StatusScreen_PerkItem_C::SetPerk(class UPerkAsset* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk");
		
		UITM_StatusScreen_PerkItem_C_SetPerk_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_StatusScreen_PerkItem_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected");
		
		UITM_StatusScreen_PerkItem_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_StatusScreen_PerkItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_StatusScreen_PerkItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_StatusScreen_PerkItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_StatusScreen_PerkItem_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh");
		
		UITM_StatusScreen_PerkItem_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_StatusScreen_PerkItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct");
		
		UITM_StatusScreen_PerkItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_StatusScreen_PerkItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct");
		
		UITM_StatusScreen_PerkItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_StatusScreen_PerkItem_C::ExecuteUbergraph_ITM_StatusScreen_PerkItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem");
		
		UITM_StatusScreen_PerkItem_C_ExecuteUbergraph_ITM_StatusScreen_PerkItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_StatusScreen_PerkItem_C*                Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_StatusScreen_PerkItem_C::OnClicked__DelegateSignature(class UITM_StatusScreen_PerkItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature");
		
		UITM_StatusScreen_PerkItem_C_OnClicked__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_StatusScreen_PerkItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_StatusScreen_PerkItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C");
		return ptr;
	}

}


