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
	 * 		Name   -> Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Window_CutCorner_Gradient_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.PreConstruct");
		
		UBasic_Window_CutCorner_Gradient_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetBackgroundTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Window_CutCorner_Gradient_C::SetBackgroundTint(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetBackgroundTint");
		
		UBasic_Window_CutCorner_Gradient_C_SetBackgroundTint_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetColorbarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    Colorbar_Tint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Window_CutCorner_Gradient_C::SetColorbarColor(ENUM_MenuColors Colorbar_Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.SetColorbarColor");
		
		UBasic_Window_CutCorner_Gradient_C_SetColorbarColor_Params params {};
		params.Colorbar_Tint = Colorbar_Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.ExecuteUbergraph_Basic_Window_CutCorner_Gradient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Window_CutCorner_Gradient_C::ExecuteUbergraph_Basic_Window_CutCorner_Gradient(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C.ExecuteUbergraph_Basic_Window_CutCorner_Gradient");
		
		UBasic_Window_CutCorner_Gradient_C_ExecuteUbergraph_Basic_Window_CutCorner_Gradient_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_Window_CutCorner_Gradient_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_Window_CutCorner_Gradient_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_Window_CutCorner_Gradient.Basic_Window_CutCorner_Gradient_C");
		return ptr;
	}

}


