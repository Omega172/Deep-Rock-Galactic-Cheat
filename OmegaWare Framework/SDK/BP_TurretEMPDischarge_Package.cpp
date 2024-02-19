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
	 * 		Name   -> Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TurretEMPDischarge_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ReceiveBeginPlay");
		
		ABP_TurretEMPDischarge_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ExecuteUbergraph_BP_TurretEMPDischarge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TurretEMPDischarge_C::ExecuteUbergraph_BP_TurretEMPDischarge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge.BP_TurretEMPDischarge_C.ExecuteUbergraph_BP_TurretEMPDischarge");
		
		ABP_TurretEMPDischarge_C_ExecuteUbergraph_BP_TurretEMPDischarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TurretEMPDischarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TurretEMPDischarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TurretEMPDischarge.BP_TurretEMPDischarge_C");
		return ptr;
	}

}


