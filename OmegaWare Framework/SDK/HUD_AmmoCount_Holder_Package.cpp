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
	 * 		Name   -> Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.SetDefault
	 * 		Flags  -> ()
	 */
	void UHUD_AmmoCount_Holder_C::SetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.SetDefault");
		
		UHUD_AmmoCount_Holder_C_SetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.SetFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AmmoCount_Holder_C::SetFromItem(class AActor* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.SetFromItem");
		
		UHUD_AmmoCount_Holder_C_SetFromItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_AmmoCount_Holder_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.Construct");
		
		UHUD_AmmoCount_Holder_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.OnItemEquipped_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AmmoCount_Holder_C::OnItemEquipped_Event(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.OnItemEquipped_Event");
		
		UHUD_AmmoCount_Holder_C_OnItemEquipped_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.OnItemUnequipped_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AmmoCount_Holder_C::OnItemUnequipped_Event(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.OnItemUnequipped_Event");
		
		UHUD_AmmoCount_Holder_C_OnItemUnequipped_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.ExecuteUbergraph_HUD_AmmoCount_Holder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AmmoCount_Holder_C::ExecuteUbergraph_HUD_AmmoCount_Holder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C.ExecuteUbergraph_HUD_AmmoCount_Holder");
		
		UHUD_AmmoCount_Holder_C_ExecuteUbergraph_HUD_AmmoCount_Holder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_AmmoCount_Holder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_AmmoCount_Holder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_AmmoCount_Holder.HUD_AmmoCount_Holder_C");
		return ptr;
	}

}


