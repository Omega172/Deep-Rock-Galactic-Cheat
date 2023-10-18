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
	 * 		Name   -> Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.SetRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_PlayerRankWarning_C::SetRank(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.SetRank");
		
		UUI_Bar_PlayerRankWarning_C_SetRank_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimStop
	 * 		Flags  -> ()
	 */
	void UUI_Bar_PlayerRankWarning_C::AnimStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimStop");
		
		UUI_Bar_PlayerRankWarning_C_AnimStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimPlay
	 * 		Flags  -> ()
	 */
	void UUI_Bar_PlayerRankWarning_C::AnimPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimPlay");
		
		UUI_Bar_PlayerRankWarning_C_AnimPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_PlayerRankWarning_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.PreConstruct");
		
		UUI_Bar_PlayerRankWarning_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Bar_PlayerRankWarning_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.Construct");
		
		UUI_Bar_PlayerRankWarning_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.ExecuteUbergraph_UI_Bar_PlayerRankWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_PlayerRankWarning_C::ExecuteUbergraph_UI_Bar_PlayerRankWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.ExecuteUbergraph_UI_Bar_PlayerRankWarning");
		
		UUI_Bar_PlayerRankWarning_C_ExecuteUbergraph_UI_Bar_PlayerRankWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_PlayerRankWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_PlayerRankWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C");
		return ptr;
	}

}


