/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::ItemUnhovered(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemUnhovered");
		
		UITM_Wardrobe_ItemSelector_C_ItemUnhovered_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::ItemHovered(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemHovered");
		
		UITM_Wardrobe_ItemSelector_C_ItemHovered_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetAnimOpenProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::SetAnimOpenProgress(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetAnimOpenProgress");
		
		UITM_Wardrobe_ItemSelector_C_SetAnimOpenProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::ItemClicked(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ItemClicked");
		
		UITM_Wardrobe_ItemSelector_C_ItemClicked_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_C::SetOpen(bool InOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.SetOpen");
		
		UITM_Wardrobe_ItemSelector_C_SetOpen_Params params {};
		params.InOpen = InOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PadRowWithBlanks
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_C::PadRowWithBlanks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PadRowWithBlanks");
		
		UITM_Wardrobe_ItemSelector_C_PadRowWithBlanks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ShowSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Wardrobe_ItemSlot_Base_C*               InSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::ShowSlot(class UITM_Wardrobe_ItemSlot_Base_C* InSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ShowSlot");
		
		UITM_Wardrobe_ItemSelector_C_ShowSlot_Params params {};
		params.InSlot = InSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ClearItems
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_C::ClearItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ClearItems");
		
		UITM_Wardrobe_ItemSelector_C_ClearItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InChildWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsNewItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDLCBase*                                    FromDLC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_Wardrobe_ItemSelector_Entry_C*          OutEntry                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     OutItemWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::AddItem(class UWidget* InChildWidget, bool InSelected, bool IsNewItem, class UDLCBase* FromDLC, class UITM_Wardrobe_ItemSelector_Entry_C** OutEntry, class UWidget** OutItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.AddItem");
		
		UITM_Wardrobe_ItemSelector_C_AddItem_Params params {};
		params.InChildWidget = InChildWidget;
		params.InSelected = InSelected;
		params.IsNewItem = IsNewItem;
		params.FromDLC = FromDLC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntry != nullptr)
			*OutEntry = params.OutEntry;
		if (OutItemWidget != nullptr)
			*OutItemWidget = params.OutItemWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.PreConstruct");
		
		UITM_Wardrobe_ItemSelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.Construct");
		
		UITM_Wardrobe_ItemSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenStarted
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_C::OnAnimOpenStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenStarted");
		
		UITM_Wardrobe_ItemSelector_C_OnAnimOpenStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenFinished
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSelector_C::OnAnimOpenFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnAnimOpenFinished");
		
		UITM_Wardrobe_ItemSelector_C_OnAnimOpenFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnOtherSelectorOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_C::OnOtherSelectorOpen(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnOtherSelectorOpen");
		
		UITM_Wardrobe_ItemSelector_C_OnOtherSelectorOpen_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector");
		
		UITM_Wardrobe_ItemSelector_C_ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSelector_C::OnSelectorOpenChanged__DelegateSignature(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_C_OnSelectorOpenChanged__DelegateSignature_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_C::OnItemClicked__DelegateSignature(int32_t Index, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C.OnItemClicked__DelegateSignature");
		
		UITM_Wardrobe_ItemSelector_C_OnItemClicked__DelegateSignature_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C");
		return ptr;
	}

}


