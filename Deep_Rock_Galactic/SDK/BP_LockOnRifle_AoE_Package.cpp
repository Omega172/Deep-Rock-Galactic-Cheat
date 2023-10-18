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
	 * 		Name   -> Function BP_LockOnRifle_AoE.BP_LockOnRifle_AoE_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LockOnRifle_AoE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LockOnRifle_AoE.BP_LockOnRifle_AoE_C.ReceiveBeginPlay");
		
		ABP_LockOnRifle_AoE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LockOnRifle_AoE.BP_LockOnRifle_AoE_C.ExecuteUbergraph_BP_LockOnRifle_AoE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LockOnRifle_AoE_C::ExecuteUbergraph_BP_LockOnRifle_AoE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LockOnRifle_AoE.BP_LockOnRifle_AoE_C.ExecuteUbergraph_BP_LockOnRifle_AoE");
		
		ABP_LockOnRifle_AoE_C_ExecuteUbergraph_BP_LockOnRifle_AoE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LockOnRifle_AoE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LockOnRifle_AoE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LockOnRifle_AoE.BP_LockOnRifle_AoE_C");
		return ptr;
	}

}


