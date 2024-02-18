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
	 * 		Name   -> Function UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MicroMissileLauncher_Charge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C.PreConstruct");
		
		UUI_MicroMissileLauncher_Charge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C.SetOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MicroMissileLauncher_Charge_C::SetOn(bool InOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C.SetOn");
		
		UUI_MicroMissileLauncher_Charge_C_SetOn_Params params {};
		params.InOn = InOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C.ExecuteUbergraph_UI_MicroMissileLauncher_Charge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MicroMissileLauncher_Charge_C::ExecuteUbergraph_UI_MicroMissileLauncher_Charge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C.ExecuteUbergraph_UI_MicroMissileLauncher_Charge");
		
		UUI_MicroMissileLauncher_Charge_C_ExecuteUbergraph_UI_MicroMissileLauncher_Charge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MicroMissileLauncher_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MicroMissileLauncher_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C");
		return ptr;
	}

}


