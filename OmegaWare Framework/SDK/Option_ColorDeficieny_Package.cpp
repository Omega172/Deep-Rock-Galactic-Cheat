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
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.ApplyAndSave
	 * 		Flags  -> ()
	 */
	void UOption_ColorDeficieny_C::ApplyAndSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.ApplyAndSave");
		
		UOption_ColorDeficieny_C_ApplyAndSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.Refresh
	 * 		Flags  -> ()
	 */
	void UOption_ColorDeficieny_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.Refresh");
		
		UOption_ColorDeficieny_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOption_ColorDeficieny_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.PreConstruct");
		
		UOption_ColorDeficieny_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.Construct
	 * 		Flags  -> ()
	 */
	void UOption_ColorDeficieny_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.Construct");
		
		UOption_ColorDeficieny_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Type_Selector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOption_ColorDeficieny_C::BndEvt__Option_ColorDeficieny_Type_Selector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Type_Selector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UOption_ColorDeficieny_C_BndEvt__Option_ColorDeficieny_Type_Selector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Severity_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOption_ColorDeficieny_C::BndEvt__Option_ColorDeficieny_Severity_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Severity_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature");
		
		UOption_ColorDeficieny_C_BndEvt__Option_ColorDeficieny_Severity_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringBegin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOption_ColorDeficieny_C::BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringBegin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringBegin__DelegateSignature");
		
		UOption_ColorDeficieny_C_BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringBegin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_3_OnHoveringEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOption_ColorDeficieny_C::BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_3_OnHoveringEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_3_OnHoveringEnd__DelegateSignature");
		
		UOption_ColorDeficieny_C_BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_3_OnHoveringEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Option_ColorDeficieny.Option_ColorDeficieny_C.ExecuteUbergraph_Option_ColorDeficieny
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOption_ColorDeficieny_C::ExecuteUbergraph_Option_ColorDeficieny(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Option_ColorDeficieny.Option_ColorDeficieny_C.ExecuteUbergraph_Option_ColorDeficieny");
		
		UOption_ColorDeficieny_C_ExecuteUbergraph_Option_ColorDeficieny_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOption_ColorDeficieny_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOption_ColorDeficieny_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Option_ColorDeficieny.Option_ColorDeficieny_C");
		return ptr;
	}

}


