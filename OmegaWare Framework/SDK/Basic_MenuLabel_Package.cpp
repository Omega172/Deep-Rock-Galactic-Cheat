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
	 * 		Name   -> Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_MenuLabel_C::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification");
		
		UBasic_MenuLabel_C_SetJustification_Params params {};
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_CarbonTypeface                                Typeface                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_MenuLabel_C::SetTypeFace(ENUM_CarbonTypeface Typeface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace");
		
		UBasic_MenuLabel_C_SetTypeFace_Params params {};
		params.Typeface = Typeface;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inFontSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_MenuLabel_C::SetFontSize(int32_t inFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize");
		
		UBasic_MenuLabel_C_SetFontSize_Params params {};
		params.inFontSize = inFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_MenuLabel.Basic_MenuLabel_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_MenuLabel_C::SetText(const class FText& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetText");
		
		UBasic_MenuLabel_C_SetText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_MenuLabel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct");
		
		UBasic_MenuLabel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_MenuLabel_C::ExecuteUbergraph_Basic_MenuLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel");
		
		UBasic_MenuLabel_C_ExecuteUbergraph_Basic_MenuLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_MenuLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_MenuLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_MenuLabel.Basic_MenuLabel_C");
		return ptr;
	}

}


