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
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputDisplay                               details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_RichTextInput_C::ShowFromDisplayDetails(const struct FInputDisplay& details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails");
		
		UUI_RichTextInput_C_ShowFromDisplayDetails_Params params {};
		params.details = details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputInteraction                                  InInteraction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RichTextInput_C::SetInteraction(EInputInteraction InInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction");
		
		UUI_RichTextInput_C_SetInteraction_Params params {};
		params.InInteraction = InInteraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                InTint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RichTextInput_C::ShowAsText(const class FText& InText, const struct FLinearColor& InTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText");
		
		UUI_RichTextInput_C_ShowAsText_Params params {};
		params.InText = InText;
		params.InTint = InTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InHeightOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InWidthOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMinDesiredWidth                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RichTextInput_C::SetSize(float InHeightOverride, float InWidthOverride, float InMinDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.SetSize");
		
		UUI_RichTextInput_C_SetSize_Params params {};
		params.InHeightOverride = InHeightOverride;
		params.InWidthOverride = InWidthOverride;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InTint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RichTextInput_C::ShowAsIcon(class UTexture2D* InTexture, const struct FLinearColor& InTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon");
		
		UUI_RichTextInput_C_ShowAsIcon_Params params {};
		params.InTexture = InTexture;
		params.InTint = InTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputDisplay                               InDisplay                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_RichTextInput_C::ReceiveInputDetails(const struct FInputDisplay& InDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails");
		
		UUI_RichTextInput_C_ReceiveInputDetails_Params params {};
		params.InDisplay = InDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown
	 * 		Flags  -> ()
	 */
	void UUI_RichTextInput_C::ReceiveInputUnknown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown");
		
		UUI_RichTextInput_C_ReceiveInputUnknown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RichTextInput_C::ExecuteUbergraph_UI_RichTextInput(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput");
		
		UUI_RichTextInput_C_ExecuteUbergraph_UI_RichTextInput_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RichTextInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RichTextInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RichTextInput.UI_RichTextInput_C");
		return ptr;
	}

}


