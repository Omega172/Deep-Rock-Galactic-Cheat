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
	 * 		Name   -> Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_HUD_BracketWindowSmall_C::SetEdgeColor(ENUM_MenuColors Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor");
		
		UBasic_HUD_BracketWindowSmall_C_SetEdgeColor_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_HUD_BracketWindowSmall_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct");
		
		UBasic_HUD_BracketWindowSmall_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_HUD_BracketWindowSmall_C::ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall");
		
		UBasic_HUD_BracketWindowSmall_C_ExecuteUbergraph_Basic_HUD_BracketWindowSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_HUD_BracketWindowSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_HUD_BracketWindowSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C");
		return ptr;
	}

}


