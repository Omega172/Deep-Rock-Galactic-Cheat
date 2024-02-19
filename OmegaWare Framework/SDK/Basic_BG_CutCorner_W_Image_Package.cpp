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
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_BG_CutCorner_W_Image_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct");
		
		UBasic_BG_CutCorner_W_Image_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  ImageBackground                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BackgroundColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  front                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_W_Image_C::SetImage(class UTexture2D* ImageBackground, const struct FLinearColor& BackgroundColor, class UTexture2D* front)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage");
		
		UBasic_BG_CutCorner_W_Image_C_SetImage_Params params {};
		params.ImageBackground = ImageBackground;
		params.BackgroundColor = BackgroundColor;
		params.front = front;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_W_Image_C::SetOutlineColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor");
		
		UBasic_BG_CutCorner_W_Image_C_SetOutlineColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_W_Image_C::SetBackgroundColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor");
		
		UBasic_BG_CutCorner_W_Image_C_SetBackgroundColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_W_Image_C::UpdateCornorSize(float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize");
		
		UBasic_BG_CutCorner_W_Image_C_UpdateCornorSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MM_ButtonStyle                                   IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_W_Image_C::SetStyle(E_MM_ButtonStyle IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle");
		
		UBasic_BG_CutCorner_W_Image_C_SetStyle_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BG_CutCorner_W_Image_C::ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image");
		
		UBasic_BG_CutCorner_W_Image_C_ExecuteUbergraph_Basic_BG_CutCorner_W_Image_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_BG_CutCorner_W_Image_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_BG_CutCorner_W_Image_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C");
		return ptr;
	}

}


