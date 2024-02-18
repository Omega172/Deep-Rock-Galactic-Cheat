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
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ContainsAnyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCustomKeySetting                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FName>                                ActionNames                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::ContainsAnyName(const struct FCustomKeySetting& Button, TArray<class FName> ActionNames, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ContainsAnyName");
		
		UOptions_MouseKeyboard_CustomizeControls_C_ContainsAnyName_Params params {};
		params.Button = Button;
		params.ActionNames = ActionNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptions_MouseKeyboard_CustomizeControls_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.OnKeyUp");
		
		UOptions_MouseKeyboard_CustomizeControls_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.SetOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::SetOpen(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.SetOpen");
		
		UOptions_MouseKeyboard_CustomizeControls_C_SetOpen_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.CreateBindingWidgets
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::CreateBindingWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.CreateBindingWidgets");
		
		UOptions_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UOptions_MouseKeyboard_CustomizeControls_C_BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.Construct");
		
		UOptions_MouseKeyboard_CustomizeControls_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UOptions_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.PreConstruct");
		
		UOptions_MouseKeyboard_CustomizeControls_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_MouseKeyboard_CustomizeControls_C::ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls");
		
		UOptions_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_MouseKeyboard_CustomizeControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_MouseKeyboard_CustomizeControls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C");
		return ptr;
	}

}


