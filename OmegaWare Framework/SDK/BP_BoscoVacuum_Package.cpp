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
	 * 		Name   -> Function BP_BoscoVacuum.BP_BoscoVacuum_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_BoscoVacuum_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoVacuum.BP_BoscoVacuum_C.ReceiveDestroyed");
		
		ABP_BoscoVacuum_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoVacuum.BP_BoscoVacuum_C.Receive_OnAbilityDataSet
	 * 		Flags  -> ()
	 */
	void ABP_BoscoVacuum_C::Receive_OnAbilityDataSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoVacuum.BP_BoscoVacuum_C.Receive_OnAbilityDataSet");
		
		ABP_BoscoVacuum_C_Receive_OnAbilityDataSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoVacuum.BP_BoscoVacuum_C.ExecuteUbergraph_BP_BoscoVacuum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoscoVacuum_C::ExecuteUbergraph_BP_BoscoVacuum(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoVacuum.BP_BoscoVacuum_C.ExecuteUbergraph_BP_BoscoVacuum");
		
		ABP_BoscoVacuum_C_ExecuteUbergraph_BP_BoscoVacuum_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BoscoVacuum_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BoscoVacuum_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoscoVacuum.BP_BoscoVacuum_C");
		return ptr;
	}

}


