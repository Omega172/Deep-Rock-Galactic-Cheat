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
	 * 		Name   -> Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SpacerigSpectator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ReceiveBeginPlay");
		
		ABP_SpacerigSpectator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ExecuteUbergraph_BP_SpacerigSpectator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpacerigSpectator_C::ExecuteUbergraph_BP_SpacerigSpectator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpacerigSpectator.BP_SpacerigSpectator_C.ExecuteUbergraph_BP_SpacerigSpectator");
		
		ABP_SpacerigSpectator_C_ExecuteUbergraph_BP_SpacerigSpectator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpacerigSpectator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpacerigSpectator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpacerigSpectator.BP_SpacerigSpectator_C");
		return ptr;
	}

}


