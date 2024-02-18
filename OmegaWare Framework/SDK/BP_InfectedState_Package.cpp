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
	 * 		Name   -> Function BP_InfectedState.BP_InfectedState_C.ReceiveStateEnter
	 * 		Flags  -> ()
	 */
	void UBP_InfectedState_C::ReceiveStateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfectedState.BP_InfectedState_C.ReceiveStateEnter");
		
		UBP_InfectedState_C_ReceiveStateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InfectedState.BP_InfectedState_C.ReceiveStateExit
	 * 		Flags  -> ()
	 */
	void UBP_InfectedState_C::ReceiveStateExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfectedState.BP_InfectedState_C.ReceiveStateExit");
		
		UBP_InfectedState_C_ReceiveStateExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InfectedState.BP_InfectedState_C.StartDamage
	 * 		Flags  -> ()
	 */
	void UBP_InfectedState_C::StartDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfectedState.BP_InfectedState_C.StartDamage");
		
		UBP_InfectedState_C_StartDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InfectedState.BP_InfectedState_C.ExecuteUbergraph_BP_InfectedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InfectedState_C::ExecuteUbergraph_BP_InfectedState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfectedState.BP_InfectedState_C.ExecuteUbergraph_BP_InfectedState");
		
		UBP_InfectedState_C_ExecuteUbergraph_BP_InfectedState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InfectedState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InfectedState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfectedState.BP_InfectedState_C");
		return ptr;
	}

}


