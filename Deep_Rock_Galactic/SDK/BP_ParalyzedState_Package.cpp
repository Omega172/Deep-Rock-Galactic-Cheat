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
	 * 		Name   -> Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateEnter
	 * 		Flags  -> ()
	 */
	void UBP_ParalyzedState_C::ReceiveStateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateEnter");
		
		UBP_ParalyzedState_C_ReceiveStateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateExit
	 * 		Flags  -> ()
	 */
	void UBP_ParalyzedState_C::ReceiveStateExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParalyzedState.BP_ParalyzedState_C.ReceiveStateExit");
		
		UBP_ParalyzedState_C_ReceiveStateExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParalyzedState.BP_ParalyzedState_C.ExecuteUbergraph_BP_ParalyzedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ParalyzedState_C::ExecuteUbergraph_BP_ParalyzedState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParalyzedState.BP_ParalyzedState_C.ExecuteUbergraph_BP_ParalyzedState");
		
		UBP_ParalyzedState_C_ExecuteUbergraph_BP_ParalyzedState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ParalyzedState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ParalyzedState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C");
		return ptr;
	}

}


