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
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.MenuColorAndTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuColorAndTint_FMenuColorAndTint         InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::MenuColorAndTint(const struct FMenuColorAndTint_FMenuColorAndTint& InValue, class UObject* __WorldContext, struct FLinearColor* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColorAndTint");
		
		ULIB_MenuColors_C_MenuColorAndTint_Params params {};
		params.InValue = InValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.WindowColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_WindowColors                                  InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color1                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color2                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::WindowColors(ENUM_WindowColors InColor, class UObject* __WorldContext, struct FLinearColor* Color1, struct FLinearColor* Color2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.WindowColors");
		
		ULIB_MenuColors_C_WindowColors_Params params {};
		params.InColor = InColor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color1 != nullptr)
			*Color1 = params.Color1;
		if (Color2 != nullptr)
			*Color2 = params.Color2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    _FALSE_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    _TRUE__                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::SelectTextColor(class UTextBlock* Text, ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor");
		
		ULIB_MenuColors_C_SelectTextColor_Params params {};
		params.Text = Text;
		params._FALSE_ = _FALSE_;
		params._TRUE__ = _TRUE__;
		params.Condition = Condition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::SetTextColor(class UTextBlock* Text, ENUM_MenuColors Color, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor");
		
		ULIB_MenuColors_C_SetTextColor_Params params {};
		params.Text = Text;
		params.Color = Color;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    _FALSE_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    _TRUE__                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutputColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::SelectMenuColor(ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition, class UObject* __WorldContext, struct FLinearColor* OutputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor");
		
		ULIB_MenuColors_C_SelectMenuColor_Params params {};
		params._FALSE_ = _FALSE_;
		params._TRUE__ = _TRUE__;
		params.Condition = Condition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputColor != nullptr)
			*OutputColor = params.OutputColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    ColorSelector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutputColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::MenuColorsAndOpacity(ENUM_MenuColors ColorSelector, float Opacity, class UObject* __WorldContext, struct FLinearColor* OutputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity");
		
		ULIB_MenuColors_C_MenuColorsAndOpacity_Params params {};
		params.ColorSelector = ColorSelector;
		params.Opacity = Opacity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputColor != nullptr)
			*OutputColor = params.OutputColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_MenuColors.LIB_MenuColors_C.MenuColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    ColorSelector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutputColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_MenuColors_C::MenuColors(ENUM_MenuColors ColorSelector, class UObject* __WorldContext, struct FLinearColor* OutputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColors");
		
		ULIB_MenuColors_C_MenuColors_Params params {};
		params.ColorSelector = ColorSelector;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputColor != nullptr)
			*OutputColor = params.OutputColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_MenuColors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_MenuColors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C");
		return ptr;
	}

}


