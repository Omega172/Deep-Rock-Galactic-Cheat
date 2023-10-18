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
	 * 		Name   -> Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect
	 * 		Flags  -> ()
	 */
	void UHUD_Itemwheel_Icon_C::OnUnselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect");
		
		UHUD_Itemwheel_Icon_C_OnUnselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect
	 * 		Flags  -> ()
	 */
	void UHUD_Itemwheel_Icon_C::OnSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect");
		
		UHUD_Itemwheel_Icon_C_OnSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit
	 * 		Flags  -> ()
	 */
	void UHUD_Itemwheel_Icon_C::OnInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit");
		
		UHUD_Itemwheel_Icon_C_OnInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Itemwheel_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct");
		
		UHUD_Itemwheel_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Itemwheel_Icon_C::ExecuteUbergraph_HUD_Itemwheel_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon");
		
		UHUD_Itemwheel_Icon_C_ExecuteUbergraph_HUD_Itemwheel_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Itemwheel_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Itemwheel_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C");
		return ptr;
	}

}


