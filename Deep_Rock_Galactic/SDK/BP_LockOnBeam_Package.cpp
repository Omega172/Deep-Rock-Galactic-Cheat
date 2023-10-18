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
	 * 		Name   -> Function BP_LockOnBeam.BP_LockOnBeam_C.ReceiveItemSet
	 * 		Flags  -> ()
	 */
	void ABP_LockOnBeam_C::ReceiveItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LockOnBeam.BP_LockOnBeam_C.ReceiveItemSet");
		
		ABP_LockOnBeam_C_ReceiveItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LockOnBeam.BP_LockOnBeam_C.ExecuteUbergraph_BP_LockOnBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LockOnBeam_C::ExecuteUbergraph_BP_LockOnBeam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LockOnBeam.BP_LockOnBeam_C.ExecuteUbergraph_BP_LockOnBeam");
		
		ABP_LockOnBeam_C_ExecuteUbergraph_BP_LockOnBeam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LockOnBeam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LockOnBeam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LockOnBeam.BP_LockOnBeam_C");
		return ptr;
	}

}


