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
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.GetBrushTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTintable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                OutputColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InputIcon_C::GetBrushTint(bool IsTintable, struct FLinearColor* OutputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.GetBrushTint");
		
		UUI_InputIcon_C_GetBrushTint_Params params {};
		params.IsTintable = IsTintable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputColor != nullptr)
			*OutputColor = params.OutputColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.GetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InputIcon_C::GetIconSize(class UTexture2D* InTexture, struct FVector2D* OutSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.GetIconSize");
		
		UUI_InputIcon_C_GetIconSize_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSize != nullptr)
			*OutSize = params.OutSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_InputIcon_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.Refresh");
		
		UUI_InputIcon_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStruct_InputIcon                           InSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InputIcon_C::SetSettings(const struct FStruct_InputIcon& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.SetSettings");
		
		UUI_InputIcon_C_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.GetCurrentMenuAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    OutSource                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName UUI_InputIcon_C::GetCurrentMenuAction(EFSDInputSource* OutSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.GetCurrentMenuAction");
		
		UUI_InputIcon_C_GetCurrentMenuAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSource != nullptr)
			*OutSource = params.OutSource;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InputIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.PreConstruct");
		
		UUI_InputIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InputIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.Construct");
		
		UUI_InputIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InputIcon_C::OnInputSourceChanged(EFSDInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.OnInputSourceChanged");
		
		UUI_InputIcon_C_OnInputSourceChanged_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InputIcon.UI_InputIcon_C.ExecuteUbergraph_UI_InputIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InputIcon_C::ExecuteUbergraph_UI_InputIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InputIcon.UI_InputIcon_C.ExecuteUbergraph_UI_InputIcon");
		
		UUI_InputIcon_C_ExecuteUbergraph_UI_InputIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InputIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InputIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InputIcon.UI_InputIcon_C");
		return ptr;
	}

}


