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
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_Turn180Mode_C::Next(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Next");
		
		UOptions_Gamepad_Turn180Mode_C_Next_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.SetMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETurn180Mode                                       InMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_Turn180Mode_C::SetMode(ETurn180Mode InMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.SetMode");
		
		UOptions_Gamepad_Turn180Mode_C_SetMode_Params params {};
		params.InMode = InMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_Turn180Mode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Construct");
		
		UOptions_Gamepad_Turn180Mode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.OnRefresh
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_Turn180Mode_C::OnRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.OnRefresh");
		
		UOptions_Gamepad_Turn180Mode_C_OnRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_Turn180Mode_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UOptions_Gamepad_Turn180Mode_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Gamepad_Turn180Mode_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UOptions_Gamepad_Turn180Mode_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Gamepad_Turn180Mode_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.PreConstruct");
		
		UOptions_Gamepad_Turn180Mode_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.ExecuteUbergraph_Options_Gamepad_Turn180Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Gamepad_Turn180Mode_C::ExecuteUbergraph_Options_Gamepad_Turn180Mode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.ExecuteUbergraph_Options_Gamepad_Turn180Mode");
		
		UOptions_Gamepad_Turn180Mode_C_ExecuteUbergraph_Options_Gamepad_Turn180Mode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Gamepad_Turn180Mode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Gamepad_Turn180Mode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C");
		return ptr;
	}

}


