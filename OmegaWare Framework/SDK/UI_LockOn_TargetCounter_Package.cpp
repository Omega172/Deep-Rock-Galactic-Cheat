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
	 * 		Name   -> Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_LockOn_TargetCounter_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Refresh");
		
		UUI_LockOn_TargetCounter_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_TargetCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.PreConstruct");
		
		UUI_LockOn_TargetCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.SetOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_TargetCounter_C::SetOn(bool InIsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.SetOn");
		
		UUI_LockOn_TargetCounter_C_SetOn_Params params {};
		params.InIsOn = InIsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Ping
	 * 		Flags  -> ()
	 */
	void UUI_LockOn_TargetCounter_C::Ping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.Ping");
		
		UUI_LockOn_TargetCounter_C_Ping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.ExecuteUbergraph_UI_LockOn_TargetCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_TargetCounter_C::ExecuteUbergraph_UI_LockOn_TargetCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C.ExecuteUbergraph_UI_LockOn_TargetCounter");
		
		UUI_LockOn_TargetCounter_C_ExecuteUbergraph_UI_LockOn_TargetCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LockOn_TargetCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LockOn_TargetCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C");
		return ptr;
	}

}


