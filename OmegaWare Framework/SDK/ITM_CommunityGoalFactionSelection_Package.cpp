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
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.SetFactionOrder
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalFactionSelection_C::SetFactionOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.SetFactionOrder");
		
		UITM_CommunityGoalFactionSelection_C_SetFactionOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalFactionSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.Construct");
		
		UITM_CommunityGoalFactionSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent1
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalFactionSelection_C::FactionChangedEvent1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent1");
		
		UITM_CommunityGoalFactionSelection_C_FactionChangedEvent1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent2
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalFactionSelection_C::FactionChangedEvent2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent2");
		
		UITM_CommunityGoalFactionSelection_C_FactionChangedEvent2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent3
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalFactionSelection_C::FactionChangedEvent3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChangedEvent3");
		
		UITM_CommunityGoalFactionSelection_C_FactionChangedEvent3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.ExecuteUbergraph_ITM_CommunityGoalFactionSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalFactionSelection_C::ExecuteUbergraph_ITM_CommunityGoalFactionSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.ExecuteUbergraph_ITM_CommunityGoalFactionSelection");
		
		UITM_CommunityGoalFactionSelection_C_ExecuteUbergraph_ITM_CommunityGoalFactionSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalFactionSelection_C::FactionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C.FactionChanged__DelegateSignature");
		
		UITM_CommunityGoalFactionSelection_C_FactionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoalFactionSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoalFactionSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoalFactionSelection.ITM_CommunityGoalFactionSelection_C");
		return ptr;
	}

}


