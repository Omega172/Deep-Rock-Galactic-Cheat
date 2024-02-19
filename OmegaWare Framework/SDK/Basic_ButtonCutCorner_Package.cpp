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
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.IsPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPressed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ButtonCutCorner_C::IsPressed(bool* IsPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.IsPressed");
		
		UBasic_ButtonCutCorner_C_IsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPressed != nullptr)
			*IsPressed = params.IsPressed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        OverrideControllerText                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_ButtonCutCorner_C::SetButtonText(const class FText& Text, const class FText& OverrideControllerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetButtonText");
		
		UBasic_ButtonCutCorner_C_SetButtonText_Params params {};
		params.Text = Text;
		params.OverrideControllerText = OverrideControllerText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonCutCorner_C::SetFontSize(int32_t FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetFontSize");
		
		UBasic_ButtonCutCorner_C_SetFontSize_Params params {};
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ButtonCutCorner_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.PreConstruct");
		
		UBasic_ButtonCutCorner_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Update Look
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::UpdateLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Update Look");
		
		UBasic_ButtonCutCorner_C_UpdateLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Click
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::Click()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Click");
		
		UBasic_ButtonCutCorner_C_Click_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Toggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsToggleOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ButtonCutCorner_C::Toggle(bool IsToggleOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Toggle");
		
		UBasic_ButtonCutCorner_C_Toggle_Params params {};
		params.IsToggleOn = IsToggleOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.ExecuteUbergraph_Basic_ButtonCutCorner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonCutCorner_C::ExecuteUbergraph_Basic_ButtonCutCorner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.ExecuteUbergraph_Basic_ButtonCutCorner");
		
		UBasic_ButtonCutCorner_C_ExecuteUbergraph_Basic_ButtonCutCorner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnReleased__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonCutCorner_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnPressed__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonCutCorner_C::OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnClicked__DelegateSignature");
		
		UBasic_ButtonCutCorner_C_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_ButtonCutCorner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_ButtonCutCorner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_ButtonCutCorner.Basic_ButtonCutCorner_C");
		return ptr;
	}

}


