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
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionWarning*                             Warning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisDesMutator_C::SetWarning(class UMissionWarning* Warning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetWarning");
		
		UITM_MisDesMutator_C_SetWarning_Params params {};
		params.Warning = Warning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetAnomaly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionMutator*                             Mutator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisDesMutator_C::SetAnomaly(class UMissionMutator* Mutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetAnomaly");
		
		UITM_MisDesMutator_C_SetAnomaly_Params params {};
		params.Mutator = Mutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisDesMutator_C::SetVisuals(const class FText& Title, class UTexture2D* Icon, ENUM_MenuColors Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetVisuals");
		
		UITM_MisDesMutator_C_SetVisuals_Params params {};
		params.Title = Title;
		params.Icon = Icon;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisDesMutator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.PreConstruct");
		
		UITM_MisDesMutator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisDesMutator_C::BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_MisDesMutator_C_BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisDesMutator_C::BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_MisDesMutator_C_BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisDesMutator_C::BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_MisDesMutator_C_BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisDesMutator.ITM_MisDesMutator_C.ExecuteUbergraph_ITM_MisDesMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisDesMutator_C::ExecuteUbergraph_ITM_MisDesMutator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisDesMutator.ITM_MisDesMutator_C.ExecuteUbergraph_ITM_MisDesMutator");
		
		UITM_MisDesMutator_C_ExecuteUbergraph_ITM_MisDesMutator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisDesMutator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisDesMutator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisDesMutator.ITM_MisDesMutator_C");
		return ptr;
	}

}


