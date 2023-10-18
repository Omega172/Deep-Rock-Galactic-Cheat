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
	 * 		Name   -> Function BP_CleanupPod_Beacon.BP_CleanupPod_Beacon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_Beacon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod_Beacon.BP_CleanupPod_Beacon_C.ReceiveBeginPlay");
		
		ABP_CleanupPod_Beacon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod_Beacon.BP_CleanupPod_Beacon_C.ExecuteUbergraph_BP_CleanupPod_Beacon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CleanupPod_Beacon_C::ExecuteUbergraph_BP_CleanupPod_Beacon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod_Beacon.BP_CleanupPod_Beacon_C.ExecuteUbergraph_BP_CleanupPod_Beacon");
		
		ABP_CleanupPod_Beacon_C_ExecuteUbergraph_BP_CleanupPod_Beacon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CleanupPod_Beacon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CleanupPod_Beacon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CleanupPod_Beacon.BP_CleanupPod_Beacon_C");
		return ptr;
	}

}


