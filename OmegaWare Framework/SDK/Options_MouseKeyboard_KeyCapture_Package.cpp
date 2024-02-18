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
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateClearButton
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::UpdateClearButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateClearButton");
		
		UOptions_MouseKeyboard_KeyCapture_C_UpdateClearButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateKeyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::UpdateKeyInfo(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateKeyInfo");
		
		UOptions_MouseKeyboard_KeyCapture_C_UpdateKeyInfo_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.No_8623E71E42D4951E6FF011979EF3C667
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::No_8623E71E42D4951E6FF011979EF3C667()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.No_8623E71E42D4951E6FF011979EF3C667");
		
		UOptions_MouseKeyboard_KeyCapture_C_No_8623E71E42D4951E6FF011979EF3C667_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Yes_8623E71E42D4951E6FF011979EF3C667
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::Yes_8623E71E42D4951E6FF011979EF3C667()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Yes_8623E71E42D4951E6FF011979EF3C667");
		
		UOptions_MouseKeyboard_KeyCapture_C_Yes_8623E71E42D4951E6FF011979EF3C667_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UOptions_MouseKeyboard_KeyCapture_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseEnter");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseLeave");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.PreConstruct");
		
		UOptions_MouseKeyboard_KeyCapture_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnCustomKeyBindingsChanged
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnCustomKeyBindingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnCustomKeyBindingsChanged");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnCustomKeyBindingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Construct");
		
		UOptions_MouseKeyboard_KeyCapture_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::ReceiveKeyChanged(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyChanged");
		
		UOptions_MouseKeyboard_KeyCapture_C_ReceiveKeyChanged_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::ReceiveKeyCaptured(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyCaptured");
		
		UOptions_MouseKeyboard_KeyCapture_C_ReceiveKeyCaptured_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveCapturingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCapturing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::ReceiveCapturingChanged(bool InCapturing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveCapturingChanged");
		
		UOptions_MouseKeyboard_KeyCapture_C_ReceiveCapturingChanged_Params params {};
		params.InCapturing = InCapturing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ExecuteUbergraph_Options_MouseKeyboard_KeyCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::ExecuteUbergraph_Options_MouseKeyboard_KeyCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ExecuteUbergraph_Options_MouseKeyboard_KeyCapture");
		
		UOptions_MouseKeyboard_KeyCapture_C_ExecuteUbergraph_Options_MouseKeyboard_KeyCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnKeyCaptureCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnKeyCaptureChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureError__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnKeyCaptureError__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureError__DelegateSignature");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureError__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_KeyCapture_C::OnKeyCaptureFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature");
		
		UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_MouseKeyboard_KeyCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_MouseKeyboard_KeyCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C");
		return ptr;
	}

}


