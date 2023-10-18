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
	 * 		Name   -> Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BoscoRevivesLable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct");
		
		UHUD_BoscoRevivesLable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_BoscoRevivesLable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct");
		
		UHUD_BoscoRevivesLable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReviveCount                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoRevivesLable_C::OnReviveCountChangedEvent(int32_t ReviveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent");
		
		UHUD_BoscoRevivesLable_C_OnReviveCountChangedEvent_Params params {};
		params.ReviveCount = ReviveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoRevivesLable_C::ExecuteUbergraph_HUD_BoscoRevivesLable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable");
		
		UHUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_BoscoRevivesLable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BoscoRevivesLable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C");
		return ptr;
	}

}


