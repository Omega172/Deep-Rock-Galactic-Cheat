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
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFont                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               InKeepFontSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AdvancedLabel_C::SetFont(const struct FSlateFontInfo& InFont, bool InKeepFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFont");
		
		UUI_AdvancedLabel_C_SetFont_Params params {};
		params.InFont = InFont;
		params.InKeepFontSize = InKeepFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconSize_ControllerOverride                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetIconSize(int32_t IconSize, int32_t IconSize_ControllerOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconSize");
		
		UUI_AdvancedLabel_C_SetIconSize_Params params {};
		params.IconSize = IconSize;
		params.IconSize_ControllerOverride = IconSize_ControllerOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetFontSize(int32_t FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFontSize");
		
		UUI_AdvancedLabel_C_SetFontSize_Params params {};
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      PreviewAs                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetPreviewAs(unsigned char PreviewAs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs");
		
		UUI_AdvancedLabel_C_SetPreviewAs_Params params {};
		params.PreviewAs = PreviewAs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                TextTint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                KeyNameTint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                PCIconTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ControllerIconTint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetTints(const struct FLinearColor& TextTint, const struct FLinearColor& KeyNameTint, const struct FLinearColor& PCIconTint, const struct FLinearColor& ControllerIconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints");
		
		UUI_AdvancedLabel_C_SetTints_Params params {};
		params.TextTint = TextTint;
		params.KeyNameTint = KeyNameTint;
		params.PCIconTint = PCIconTint;
		params.ControllerIconTint = ControllerIconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                KeyNameTint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetKeyNameTint(const struct FLinearColor& KeyNameTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint");
		
		UUI_AdvancedLabel_C_SetKeyNameTint_Params params {};
		params.KeyNameTint = KeyNameTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                PCIconTint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ControllerIconTint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetIconTint(const struct FLinearColor& PCIconTint, const struct FLinearColor& ControllerIconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint");
		
		UUI_AdvancedLabel_C_SetIconTint_Params params {};
		params.PCIconTint = PCIconTint;
		params.ControllerIconTint = ControllerIconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                TextTint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::SetTextTint(const struct FLinearColor& TextTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint");
		
		UUI_AdvancedLabel_C_SetTextTint_Params params {};
		params.TextTint = TextTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::OnNewLine(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine");
		
		UUI_AdvancedLabel_C_OnNewLine_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FActionIconMapping                          Icon                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_AdvancedLabel_C::OnAddIcon(const class FString& Name, const struct FActionIconMapping& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon");
		
		UUI_AdvancedLabel_C_OnAddIcon_Params params {};
		params.Name = Name;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::OnAddKeyName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName");
		
		UUI_AdvancedLabel_C_OnAddKeyName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::OnAddString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString");
		
		UUI_AdvancedLabel_C_OnAddString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset
	 * 		Flags  -> ()
	 */
	void UUI_AdvancedLabel_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset");
		
		UUI_AdvancedLabel_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AdvancedLabel_C::ExecuteUbergraph_UI_AdvancedLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel");
		
		UUI_AdvancedLabel_C_ExecuteUbergraph_UI_AdvancedLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AdvancedLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AdvancedLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C");
		return ptr;
	}

}


