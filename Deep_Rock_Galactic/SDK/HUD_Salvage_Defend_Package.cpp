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
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DefenderCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Salvage_Defend_C::UpdateDefenderBlocks(int32_t DefenderCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks");
		
		UHUD_Salvage_Defend_C_UpdateDefenderBlocks_Params params {};
		params.DefenderCount = DefenderCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Salvage_Defend_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct");
		
		UHUD_Salvage_Defend_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Salvage_Defend_C::ProgressUpdated(float NewProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated");
		
		UHUD_Salvage_Defend_C_ProgressUpdated_Params params {};
		params.NewProgress = NewProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Salvage_Defend_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct");
		
		UHUD_Salvage_Defend_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DefenderCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Salvage_Defend_C::DefendersUpdated(int32_t DefenderCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated");
		
		UHUD_Salvage_Defend_C_DefendersUpdated_Params params {};
		params.DefenderCount = DefenderCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success
	 * 		Flags  -> ()
	 */
	void UHUD_Salvage_Defend_C::success()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success");
		
		UHUD_Salvage_Defend_C_success_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Salvage_Defend_C::ExecuteUbergraph_HUD_Salvage_Defend(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend");
		
		UHUD_Salvage_Defend_C_ExecuteUbergraph_HUD_Salvage_Defend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Salvage_Defend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Salvage_Defend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Salvage_Defend.HUD_Salvage_Defend_C");
		return ptr;
	}

}


