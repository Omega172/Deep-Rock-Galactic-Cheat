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
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MaskedImage_C::SetMaskBlack(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack");
		
		UUI_MaskedImage_C_SetMaskBlack_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial
	 * 		Flags  -> ()
	 */
	void UUI_MaskedImage_C::UpdateMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial");
		
		UUI_MaskedImage_C_UpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateBrushDrawType                                InBrush_DrawAs                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MaskedImage_C::SetDrawAs(ESlateBrushDrawType InBrush_DrawAs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs");
		
		UUI_MaskedImage_C_SetDrawAs_Params params {};
		params.InBrush_DrawAs = InBrush_DrawAs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Invert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MaskedImage_C::SetMaskInverted(bool Invert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted");
		
		UUI_MaskedImage_C_SetMaskInverted_Params params {};
		params.Invert = Invert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MaskedImage_C::SetMask(class UTexture* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetMask");
		
		UUI_MaskedImage_C_SetMask_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 TintColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_MaskedImage_C::SetImageTint(const struct FSlateColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint");
		
		UUI_MaskedImage_C_SetImageTint_Params params {};
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DesiredSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MaskedImage_C::SetImageSize(const struct FVector2D& DesiredSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize");
		
		UUI_MaskedImage_C_SetImageSize_Params params {};
		params.DesiredSize = DesiredSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MaskedImage_C::SetImage(class UTexture2D* Value, bool MatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.SetImage");
		
		UUI_MaskedImage_C_SetImage_Params params {};
		params.Value = Value;
		params.MatchSize = MatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MaskedImage_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct");
		
		UUI_MaskedImage_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MaskedImage_C::ExecuteUbergraph_UI_MaskedImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage");
		
		UUI_MaskedImage_C_ExecuteUbergraph_UI_MaskedImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MaskedImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MaskedImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MaskedImage.UI_MaskedImage_C");
		return ptr;
	}

}


