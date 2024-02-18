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
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetFromDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDLCBase*                                    InDLC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::SetFromDLC(class UDLCBase* InDLC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetFromDLC");
		
		UITM_Wardrobe_ItemSelector_Entry_C_SetFromDLC_Params params {};
		params.InDLC = InDLC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::SetHovered(bool InHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetHovered");
		
		UITM_Wardrobe_ItemSelector_Entry_C_SetHovered_Params params {};
		params.InHovered = InHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::SetSelected(bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetSelected");
		
		UITM_Wardrobe_ItemSelector_Entry_C_SetSelected_Params params {};
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetIsNewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::SetIsNewItem(bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetIsNewItem");
		
		UITM_Wardrobe_ItemSelector_Entry_C_SetIsNewItem_Params params {};
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.UpdateBorder
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::UpdateBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.UpdateBorder");
		
		UITM_Wardrobe_ItemSelector_Entry_C_UpdateBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.CreateChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     OutChild                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::CreateChild(class UWidget** OutChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.CreateChild");
		
		UITM_Wardrobe_ItemSelector_Entry_C_CreateChild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutChild != nullptr)
			*OutChild = params.OutChild;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::SetChild(class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.SetChild");
		
		UITM_Wardrobe_ItemSelector_Entry_C_SetChild_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.PreConstruct");
		
		UITM_Wardrobe_ItemSelector_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry");
		
		UITM_Wardrobe_ItemSelector_Entry_C_ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::OnEntryClicked__DelegateSignature(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_Entry_C_OnEntryClicked__DelegateSignature_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::OnEntryUnhovered__DelegateSignature(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_Entry_C_OnEntryUnhovered__DelegateSignature_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_Entry_C::OnEntryHovered__DelegateSignature(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_Entry_C_OnEntryHovered__DelegateSignature_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSelector_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSelector_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector_Entry.ITM_Wardrobe_ItemSelector_Entry_C");
		return ptr;
	}

}


