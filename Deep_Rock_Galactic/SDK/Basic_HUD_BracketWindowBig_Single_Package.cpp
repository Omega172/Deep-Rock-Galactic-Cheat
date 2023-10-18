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
	 * 		Name   -> Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_HUD_BracketWindowBig_Single_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.PreConstruct");
		
		UBasic_HUD_BracketWindowBig_Single_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Edge Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Edge_Tint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_HUD_BracketWindowBig_Single_C::SetEdgeColor(const struct FLinearColor& Edge_Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Edge Color");
		
		UBasic_HUD_BracketWindowBig_Single_C_SetEdgeColor_Params params {};
		params.Edge_Tint = Edge_Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Background Opacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BG_Opacity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_HUD_BracketWindowBig_Single_C::SetBackgroundOpacity(float BG_Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Background Opacity");
		
		UBasic_HUD_BracketWindowBig_Single_C_SetBackgroundOpacity_Params params {};
		params.BG_Opacity = BG_Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_HUD_BracketWindowBig_Single_C::ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single");
		
		UBasic_HUD_BracketWindowBig_Single_C_ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_HUD_BracketWindowBig_Single_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_HUD_BracketWindowBig_Single_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C");
		return ptr;
	}

}


