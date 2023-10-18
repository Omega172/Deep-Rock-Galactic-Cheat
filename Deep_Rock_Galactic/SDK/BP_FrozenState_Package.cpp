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
	 * 		Name   -> Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter
	 * 		Flags  -> ()
	 */
	void UBP_FrozenState_C::ReceiveStateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter");
		
		UBP_FrozenState_C_ReceiveStateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit
	 * 		Flags  -> ()
	 */
	void UBP_FrozenState_C::ReceiveStateExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit");
		
		UBP_FrozenState_C_ReceiveStateExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting
	 * 		Flags  -> ()
	 */
	void UBP_FrozenState_C::ReceiveOnDefrosting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting");
		
		UBP_FrozenState_C_ReceiveOnDefrosting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FrozenState_C::ExecuteUbergraph_BP_FrozenState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState");
		
		UBP_FrozenState_C_ExecuteUbergraph_BP_FrozenState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FrozenState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FrozenState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C");
		return ptr;
	}

}


