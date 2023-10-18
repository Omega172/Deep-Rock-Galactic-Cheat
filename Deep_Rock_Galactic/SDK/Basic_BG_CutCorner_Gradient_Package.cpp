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
	 * 		Name   -> Function Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_BG_CutCorner_Gradient_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C.PreConstruct");
		
		UBasic_BG_CutCorner_Gradient_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C.SetBorderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_Gradient_C::SetBorderColor(const struct FLinearColor& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C.SetBorderColor");
		
		UBasic_BG_CutCorner_Gradient_C_SetBorderColor_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C.ExecuteUbergraph_Basic_BG_CutCorner_Gradient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_Gradient_C::ExecuteUbergraph_Basic_BG_CutCorner_Gradient(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C.ExecuteUbergraph_Basic_BG_CutCorner_Gradient");
		
		UBasic_BG_CutCorner_Gradient_C_ExecuteUbergraph_Basic_BG_CutCorner_Gradient_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_BG_CutCorner_Gradient_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_BG_CutCorner_Gradient_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_BG_CutCorner_Gradient.Basic_BG_CutCorner_Gradient_C");
		return ptr;
	}

}


