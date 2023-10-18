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
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::HideCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown");
		
		UBasic_ButtonScalable2_C_HideCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SecondsRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MinimumIntegralDigits                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::SetCountDown(int32_t SecondsRemaining, int32_t MinimumIntegralDigits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown");
		
		UBasic_ButtonScalable2_C_SetCountDown_Params params {};
		params.SecondsRemaining = SecondsRemaining;
		params.MinimumIntegralDigits = MinimumIntegralDigits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    ColorSelector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::SetBackgroundColor(ENUM_MenuColors ColorSelector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor");
		
		UBasic_ButtonScalable2_C_SetBackgroundColor_Params params {};
		params.ColorSelector = ColorSelector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 InBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FMargin                                     InPadding                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ButtonScalable2_C::SetIconBrush(class UImage** Icon, const struct FSlateBrush& InBrush, const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush");
		
		UBasic_ButtonScalable2_C_SetIconBrush_Params params {};
		params.InBrush = InBrush;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                PCIconTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ControllerIconTint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::SetTints(const struct FLinearColor& PCIconTint, const struct FLinearColor& ControllerIconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints");
		
		UBasic_ButtonScalable2_C_SetTints_Params params {};
		params.PCIconTint = PCIconTint;
		params.ControllerIconTint = ControllerIconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                PCIconTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ControllerIconTint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::SetIconTint(const struct FLinearColor& PCIconTint, const struct FLinearColor& ControllerIconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint");
		
		UBasic_ButtonScalable2_C_SetIconTint_Params params {};
		params.PCIconTint = PCIconTint;
		params.ControllerIconTint = ControllerIconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::OnNewLine(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine");
		
		UBasic_ButtonScalable2_C_OnNewLine_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FActionIconMapping                          Icon                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBasic_ButtonScalable2_C::OnAddIcon(const class FString& Name, const struct FActionIconMapping& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon");
		
		UBasic_ButtonScalable2_C_OnAddIcon_Params params {};
		params.Name = Name;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::OnAddKeyName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName");
		
		UBasic_ButtonScalable2_C_OnAddKeyName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ButtonScalable2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct");
		
		UBasic_ButtonScalable2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::OnAddString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString");
		
		UBasic_ButtonScalable2_C_OnAddString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset");
		
		UBasic_ButtonScalable2_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsToggledOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ButtonScalable2_C::Toggle(bool IsToggledOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle");
		
		UBasic_ButtonScalable2_C_Toggle_Params params {};
		params.IsToggledOn = IsToggledOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::SetToggled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled");
		
		UBasic_ButtonScalable2_C_SetToggled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::SetUntoggled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled");
		
		UBasic_ButtonScalable2_C_SetUntoggled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::Click()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click");
		
		UBasic_ButtonScalable2_C_Click_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ButtonScalable2_C::ExecuteUbergraph_Basic_ButtonScalable2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2");
		
		UBasic_ButtonScalable2_C_ExecuteUbergraph_Basic_ButtonScalable2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature");
		
		UBasic_ButtonScalable2_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature");
		
		UBasic_ButtonScalable2_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ButtonScalable2_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature");
		
		UBasic_ButtonScalable2_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_ButtonScalable2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_ButtonScalable2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_ButtonScalable2.Basic_ButtonScalable2_C");
		return ptr;
	}

}


