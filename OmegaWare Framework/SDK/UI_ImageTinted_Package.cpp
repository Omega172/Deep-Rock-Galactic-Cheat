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
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.SetBrushSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   BrushImageSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ImageTinted_C::SetBrushSize(const struct FVector2D& BrushImageSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrushSize");
		
		UUI_ImageTinted_C_SetBrushSize_Params params {};
		params.BrushImageSize = BrushImageSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.SelectTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    _FALSE_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    _TRUE__                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ImageTinted_C::SelectTint(ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SelectTint");
		
		UUI_ImageTinted_C_SelectTint_Params params {};
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
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.GetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UUI_ImageTinted_C::GetBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.GetBrush");
		
		UUI_ImageTinted_C_GetBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MatchSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ImageTinted_C::SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture");
		
		UUI_ImageTinted_C_SetBrushFromTexture_Params params {};
		params.Texture = Texture;
		params.MatchSize = MatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.SetTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    InTint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ImageTinted_C::SetTint(ENUM_MenuColors InTint, float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetTint");
		
		UUI_ImageTinted_C_SetTint_Params params {};
		params.InTint = InTint;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.SetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ImageTinted_C::SetBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrush");
		
		UUI_ImageTinted_C_SetBrush_Params params {};
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ImageTinted_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct");
		
		UUI_ImageTinted_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ImageTinted_C::ExecuteUbergraph_UI_ImageTinted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted");
		
		UUI_ImageTinted_C_ExecuteUbergraph_UI_ImageTinted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ImageTinted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ImageTinted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C");
		return ptr;
	}

}


