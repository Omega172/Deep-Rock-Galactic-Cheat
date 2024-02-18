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
	 * 		Name   -> Function BP_AsteroidField.BP_AsteroidField_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_AsteroidField_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AsteroidField.BP_AsteroidField_C.UserConstructionScript");
		
		ABP_AsteroidField_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AsteroidField.BP_AsteroidField_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AsteroidField_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AsteroidField.BP_AsteroidField_C.ReceiveBeginPlay");
		
		ABP_AsteroidField_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AsteroidField.BP_AsteroidField_C.ExecuteUbergraph_BP_AsteroidField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AsteroidField_C::ExecuteUbergraph_BP_AsteroidField(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AsteroidField.BP_AsteroidField_C.ExecuteUbergraph_BP_AsteroidField");
		
		ABP_AsteroidField_C_ExecuteUbergraph_BP_AsteroidField_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AsteroidField_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AsteroidField_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AsteroidField.BP_AsteroidField_C");
		return ptr;
	}

}


