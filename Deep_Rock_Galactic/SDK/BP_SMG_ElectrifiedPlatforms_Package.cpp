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
	 * 		Name   -> Function BP_SMG_ElectrifiedPlatforms.BP_SMG_ElectrifiedPlatforms_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SMG_ElectrifiedPlatforms_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SMG_ElectrifiedPlatforms.BP_SMG_ElectrifiedPlatforms_C.ReceiveBeginPlay");
		
		ABP_SMG_ElectrifiedPlatforms_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SMG_ElectrifiedPlatforms.BP_SMG_ElectrifiedPlatforms_C.ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SMG_ElectrifiedPlatforms_C::ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SMG_ElectrifiedPlatforms.BP_SMG_ElectrifiedPlatforms_C.ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms");
		
		ABP_SMG_ElectrifiedPlatforms_C_ExecuteUbergraph_BP_SMG_ElectrifiedPlatforms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SMG_ElectrifiedPlatforms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SMG_ElectrifiedPlatforms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SMG_ElectrifiedPlatforms.BP_SMG_ElectrifiedPlatforms_C");
		return ptr;
	}

}


