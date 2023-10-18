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
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Unselected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::SwapUpperItems(class UWidget* Unselected, class UWidget* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems");
		
		UHUD_ItemWheel_C_SwapUpperItems_Params params {};
		params.Unselected = Unselected;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemsBarIcon*                               ItemIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::OnItemAdded(class UItemsBarIcon* ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded");
		
		UHUD_ItemWheel_C_OnItemAdded_Params params {};
		params.ItemIcon = ItemIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ItemWheel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct");
		
		UHUD_ItemWheel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemsBarIcon*                               ItemIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::OnItemEquipped(class UItemsBarIcon* ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped");
		
		UHUD_ItemWheel_C_OnItemEquipped_Params params {};
		params.ItemIcon = ItemIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemsBarIcon*                               Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::AddIcon(class UItemsBarIcon* Icon, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon");
		
		UHUD_ItemWheel_C_AddIcon_Params params {};
		params.Icon = Icon;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear
	 * 		Flags  -> ()
	 */
	void UHUD_ItemWheel_C::OnClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear");
		
		UHUD_ItemWheel_C_OnClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ItemWheel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.Construct");
		
		UHUD_ItemWheel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::OnInputSourceChanged(EFSDInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged");
		
		UHUD_ItemWheel_C_OnInputSourceChanged_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.Show
	 * 		Flags  -> ()
	 */
	void UHUD_ItemWheel_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.Show");
		
		UHUD_ItemWheel_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked
	 * 		Flags  -> ()
	 */
	void UHUD_ItemWheel_C::OnItemClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked");
		
		UHUD_ItemWheel_C_OnItemClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemsBarIcon*                               ItemIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::OnSupplyItemAdded(class UItemsBarIcon* ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded");
		
		UHUD_ItemWheel_C_OnSupplyItemAdded_Params params {};
		params.ItemIcon = ItemIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemsBarIcon*                               ItemIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::OnSupplyItemUnequipped(class UItemsBarIcon* ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped");
		
		UHUD_ItemWheel_C_OnSupplyItemUnequipped_Params params {};
		params.ItemIcon = ItemIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemsBarIcon*                               ItemIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::OnSupplyItemEquipped(class UItemsBarIcon* ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped");
		
		UHUD_ItemWheel_C_OnSupplyItemEquipped_Params params {};
		params.ItemIcon = ItemIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished
	 * 		Flags  -> ()
	 */
	void UHUD_ItemWheel_C::OnFadeInOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished");
		
		UHUD_ItemWheel_C_OnFadeInOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted
	 * 		Flags  -> ()
	 */
	void UHUD_ItemWheel_C::OnFadeInOutStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted");
		
		UHUD_ItemWheel_C_OnFadeInOutStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ItemWheel_C::ExecuteUbergraph_HUD_ItemWheel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel");
		
		UHUD_ItemWheel_C_ExecuteUbergraph_HUD_ItemWheel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ItemWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ItemWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ItemWheel.HUD_ItemWheel_C");
		return ptr;
	}

}


