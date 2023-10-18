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
	 * 		Name   -> Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_KeyBinding_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.PreConstruct");
		
		UOptions_Gamepad_KeyBinding_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCapturing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_KeyBinding_C::BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature(bool InCapturing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature");
		
		UOptions_Gamepad_KeyBinding_C_BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature_Params params {};
		params.InCapturing = InCapturing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.ExecuteUbergraph_Options_Gamepad_KeyBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_KeyBinding_C::ExecuteUbergraph_Options_Gamepad_KeyBinding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.ExecuteUbergraph_Options_Gamepad_KeyBinding");
		
		UOptions_Gamepad_KeyBinding_C_ExecuteUbergraph_Options_Gamepad_KeyBinding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Gamepad_KeyBinding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Gamepad_KeyBinding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C");
		return ptr;
	}

}


