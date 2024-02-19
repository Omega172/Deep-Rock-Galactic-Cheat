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
	 * 		Name   -> Function BP_InfectedMulePreplacement.BP_InfectedMulePreplacement_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_InfectedMulePreplacement_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfectedMulePreplacement.BP_InfectedMulePreplacement_C.ReceiveBeginPlay");
		
		ABP_InfectedMulePreplacement_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InfectedMulePreplacement.BP_InfectedMulePreplacement_C.ExecuteUbergraph_BP_InfectedMulePreplacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InfectedMulePreplacement_C::ExecuteUbergraph_BP_InfectedMulePreplacement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfectedMulePreplacement.BP_InfectedMulePreplacement_C.ExecuteUbergraph_BP_InfectedMulePreplacement");
		
		ABP_InfectedMulePreplacement_C_ExecuteUbergraph_BP_InfectedMulePreplacement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_InfectedMulePreplacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InfectedMulePreplacement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfectedMulePreplacement.BP_InfectedMulePreplacement_C");
		return ptr;
	}

}


