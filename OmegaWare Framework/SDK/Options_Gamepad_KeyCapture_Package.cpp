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
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.UpdateKeyDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_KeyCapture_C::UpdateKeyDisplay(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.UpdateKeyDisplay");
		
		UOptions_Gamepad_KeyCapture_C_UpdateKeyDisplay_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UOptions_Gamepad_KeyCapture_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.IsInteractable");
		
		UOptions_Gamepad_KeyCapture_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveCapturingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCapturing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_KeyCapture_C::ReceiveCapturingChanged(bool InCapturing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveCapturingChanged");
		
		UOptions_Gamepad_KeyCapture_C_ReceiveCapturingChanged_Params params {};
		params.InCapturing = InCapturing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_KeyCapture_C::ReceiveKeyChanged(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyChanged");
		
		UOptions_Gamepad_KeyCapture_C_ReceiveKeyChanged_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_KeyCapture_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.Construct");
		
		UOptions_Gamepad_KeyCapture_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCustomKeyBindingsChanged
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_KeyCapture_C::OnCustomKeyBindingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCustomKeyBindingsChanged");
		
		UOptions_Gamepad_KeyCapture_C_OnCustomKeyBindingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_KeyCapture_C::ReceiveKeyCaptured(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyCaptured");
		
		UOptions_Gamepad_KeyCapture_C_ReceiveKeyCaptured_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_KeyCapture_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.PreConstruct");
		
		UOptions_Gamepad_KeyCapture_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ExecuteUbergraph_Options_Gamepad_KeyCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_KeyCapture_C::ExecuteUbergraph_Options_Gamepad_KeyCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ExecuteUbergraph_Options_Gamepad_KeyCapture");
		
		UOptions_Gamepad_KeyCapture_C_ExecuteUbergraph_Options_Gamepad_KeyCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCapturingChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCapturing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_KeyCapture_C::OnCapturingChanged__DelegateSignature(bool InCapturing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCapturingChanged__DelegateSignature");
		
		UOptions_Gamepad_KeyCapture_C_OnCapturingChanged__DelegateSignature_Params params {};
		params.InCapturing = InCapturing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Gamepad_KeyCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Gamepad_KeyCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C");
		return ptr;
	}

}


