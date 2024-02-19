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
	 * 		Name   -> Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetMenuColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Image_C::SetMenuColor(ENUM_MenuColors InColor, float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetMenuColor");
		
		UUI_GradientMasked_Image_C_SetMenuColor_Params params {};
		params.InColor = InColor;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault
	 * 		Flags  -> ()
	 */
	class UTexture2D* UUI_GradientMasked_Image_C::GetTextureOrDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault");
		
		UUI_GradientMasked_Image_C_GetTextureOrDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Image_C::SetImage(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage");
		
		UUI_GradientMasked_Image_C_SetImage_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed
	 * 		Flags  -> ()
	 */
	void UUI_GradientMasked_Image_C::OnMaterialRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed");
		
		UUI_GradientMasked_Image_C_OnMaterialRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GradientMasked_Image_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.PreConstruct");
		
		UUI_GradientMasked_Image_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Image_C::ExecuteUbergraph_UI_GradientMasked_Image(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image");
		
		UUI_GradientMasked_Image_C_ExecuteUbergraph_UI_GradientMasked_Image_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GradientMasked_Image_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GradientMasked_Image_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GradientMasked_Image.UI_GradientMasked_Image_C");
		return ptr;
	}

}


