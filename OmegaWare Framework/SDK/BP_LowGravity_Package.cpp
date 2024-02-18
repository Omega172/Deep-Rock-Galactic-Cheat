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
	 * 		Name   -> Function BP_LowGravity.BP_LowGravity_C.StartLogic
	 * 		Flags  -> ()
	 */
	void UBP_LowGravity_C::StartLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LowGravity.BP_LowGravity_C.StartLogic");
		
		UBP_LowGravity_C_StartLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LowGravity.BP_LowGravity_C.ExecuteUbergraph_BP_LowGravity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LowGravity_C::ExecuteUbergraph_BP_LowGravity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LowGravity.BP_LowGravity_C.ExecuteUbergraph_BP_LowGravity");
		
		UBP_LowGravity_C_ExecuteUbergraph_BP_LowGravity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LowGravity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LowGravity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LowGravity.BP_LowGravity_C");
		return ptr;
	}

}


