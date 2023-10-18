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
	 * 		Name   -> Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.SetRankOrLevelIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CurrentSaveSlot_RankOrLevelReadout_C::SetRankOrLevelIcon(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.SetRankOrLevelIcon");
		
		UITM_CurrentSaveSlot_RankOrLevelReadout_C_SetRankOrLevelIcon_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CurrentSaveSlot_RankOrLevelReadout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.PreConstruct");
		
		UITM_CurrentSaveSlot_RankOrLevelReadout_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CurrentSaveSlot_RankOrLevelReadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.Construct");
		
		UITM_CurrentSaveSlot_RankOrLevelReadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CurrentSaveSlot_RankOrLevelReadout_C::ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C.ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout");
		
		UITM_CurrentSaveSlot_RankOrLevelReadout_C_ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CurrentSaveSlot_RankOrLevelReadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CurrentSaveSlot_RankOrLevelReadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CurrentSaveSlot_RankOrLevelReadout.ITM_CurrentSaveSlot_RankOrLevelReadout_C");
		return ptr;
	}

}


