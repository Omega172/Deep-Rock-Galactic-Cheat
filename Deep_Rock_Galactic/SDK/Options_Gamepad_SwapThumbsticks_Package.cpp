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
	 * 		Name   -> Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_SwapThumbsticks_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.Construct");
		
		UOptions_Gamepad_SwapThumbsticks_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.OnRefresh
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_SwapThumbsticks_C::OnRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.OnRefresh");
		
		UOptions_Gamepad_SwapThumbsticks_C_OnRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_SwapThumbsticks_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UOptions_Gamepad_SwapThumbsticks_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.ExecuteUbergraph_Options_Gamepad_SwapThumbsticks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_SwapThumbsticks_C::ExecuteUbergraph_Options_Gamepad_SwapThumbsticks(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C.ExecuteUbergraph_Options_Gamepad_SwapThumbsticks");
		
		UOptions_Gamepad_SwapThumbsticks_C_ExecuteUbergraph_Options_Gamepad_SwapThumbsticks_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Gamepad_SwapThumbsticks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Gamepad_SwapThumbsticks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Gamepad_SwapThumbsticks.Options_Gamepad_SwapThumbsticks_C");
		return ptr;
	}

}


