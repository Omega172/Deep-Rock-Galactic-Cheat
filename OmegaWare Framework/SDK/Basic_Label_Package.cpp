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
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SelectTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    _FALSE_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    _TRUE__                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Label_C::SelectTextColor(ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SelectTextColor");
		
		UBasic_Label_C_SelectTextColor_Params params {};
		params._FALSE_ = _FALSE_;
		params._TRUE__ = _TRUE__;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBasic_Label_C::GetText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.GetText");
		
		UBasic_Label_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetWrappingPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextWrappingPolicy                                WrappingPolicy                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::SetWrappingPolicy(ETextWrappingPolicy WrappingPolicy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetWrappingPolicy");
		
		UBasic_Label_C_SetWrappingPolicy_Params params {};
		params.WrappingPolicy = WrappingPolicy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetWrapTextAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WrapTextAt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::SetWrapTextAt(float WrapTextAt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetWrapTextAt");
		
		UBasic_Label_C_SetWrapTextAt_Params params {};
		params.WrapTextAt = WrapTextAt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetAutoWrapText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AutoTextWrap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Label_C::SetAutoWrapText(bool AutoTextWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetAutoWrapText");
		
		UBasic_Label_C_SetAutoWrapText_Params params {};
		params.AutoTextWrap = AutoTextWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inFontSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::SetFontSize(int32_t inFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetFontSize");
		
		UBasic_Label_C_SetFontSize_Params params {};
		params.inFontSize = inFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinDesiredWidth                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::SetMinDesiredWidth(float MinDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetMinDesiredWidth");
		
		UBasic_Label_C_SetMinDesiredWidth_Params params {};
		params.MinDesiredWidth = MinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       Justification                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::SetJustification(ETextJustify Justification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetJustification");
		
		UBasic_Label_C_SetJustification_Params params {};
		params.Justification = Justification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::SetTextColor(ENUM_MenuColors TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetTextColor");
		
		UBasic_Label_C_SetTextColor_Params params {};
		params.TextColor = TextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_Label_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetText");
		
		UBasic_Label_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.SetMargin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     NewMargin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Label_C::SetMargin(const struct FMargin& NewMargin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.SetMargin");
		
		UBasic_Label_C_SetMargin_Params params {};
		params.NewMargin = NewMargin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Label_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.PreConstruct");
		
		UBasic_Label_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Label.Basic_Label_C.ExecuteUbergraph_Basic_Label
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Label_C::ExecuteUbergraph_Basic_Label(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Label.Basic_Label_C.ExecuteUbergraph_Basic_Label");
		
		UBasic_Label_C_ExecuteUbergraph_Basic_Label_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_Label_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_Label_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_Label.Basic_Label_C");
		return ptr;
	}

}


