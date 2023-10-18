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
	 * 		Name   -> Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RotatingSpotlight01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ReceiveBeginPlay");
		
		ABP_RotatingSpotlight01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ExecuteUbergraph_BP_RotatingSpotlight01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RotatingSpotlight01_C::ExecuteUbergraph_BP_RotatingSpotlight01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RotatingSpotlight01.BP_RotatingSpotlight01_C.ExecuteUbergraph_BP_RotatingSpotlight01");
		
		ABP_RotatingSpotlight01_C_ExecuteUbergraph_BP_RotatingSpotlight01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RotatingSpotlight01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RotatingSpotlight01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RotatingSpotlight01.BP_RotatingSpotlight01_C");
		return ptr;
	}

}


