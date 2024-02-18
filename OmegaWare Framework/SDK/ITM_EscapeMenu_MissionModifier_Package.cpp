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
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.GetToolTipWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     returnvalue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscapeMenu_MissionModifier_C::GetToolTipWidget(class UWidget** returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.GetToolTipWidget");
		
		UITM_EscapeMenu_MissionModifier_C_GetToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_EscapeMenu_MissionModifier_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.PreConstruct");
		
		UITM_EscapeMenu_MissionModifier_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionWarning*                             Warning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscapeMenu_MissionModifier_C::SetWarning(class UMissionWarning* Warning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetWarning");
		
		UITM_EscapeMenu_MissionModifier_C_SetWarning_Params params {};
		params.Warning = Warning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionMutator*                             Mutator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscapeMenu_MissionModifier_C::SetMutator(class UMissionMutator* Mutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetMutator");
		
		UITM_EscapeMenu_MissionModifier_C_SetMutator_Params params {};
		params.Mutator = Mutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.Hide
	 * 		Flags  -> ()
	 */
	void UITM_EscapeMenu_MissionModifier_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.Hide");
		
		UITM_EscapeMenu_MissionModifier_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscapeMenu_MissionModifier_C::BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_EscapeMenu_MissionModifier_C_BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscapeMenu_MissionModifier_C::SetVisuals(const class FText& InText, class UTexture2D* Icon, ENUM_MenuColors Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetVisuals");
		
		UITM_EscapeMenu_MissionModifier_C_SetVisuals_Params params {};
		params.InText = InText;
		params.Icon = Icon;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.ExecuteUbergraph_ITM_EscapeMenu_MissionModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_EscapeMenu_MissionModifier_C::ExecuteUbergraph_ITM_EscapeMenu_MissionModifier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.ExecuteUbergraph_ITM_EscapeMenu_MissionModifier");
		
		UITM_EscapeMenu_MissionModifier_C_ExecuteUbergraph_ITM_EscapeMenu_MissionModifier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_EscapeMenu_MissionModifier_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.OnClicked__DelegateSignature");
		
		UITM_EscapeMenu_MissionModifier_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_EscapeMenu_MissionModifier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_EscapeMenu_MissionModifier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C");
		return ptr;
	}

}


