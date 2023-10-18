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
	 * 		Name   -> Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ObjectiveBox_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct");
		
		UHUD_ObjectiveBox_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveInitialized
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectiveBox_Item_C::ReceiveObjectiveInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveInitialized");
		
		UHUD_ObjectiveBox_Item_C_ReceiveObjectiveInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveUpdated
	 * 		Flags  -> ()
	 */
	void UHUD_ObjectiveBox_Item_C::ReceiveObjectiveUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveUpdated");
		
		UHUD_ObjectiveBox_Item_C_ReceiveObjectiveUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ObjectiveBox_Item_C::ExecuteUbergraph_HUD_ObjectiveBox_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item");
		
		UHUD_ObjectiveBox_Item_C_ExecuteUbergraph_HUD_ObjectiveBox_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ObjectiveBox_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ObjectiveBox_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C");
		return ptr;
	}

}


