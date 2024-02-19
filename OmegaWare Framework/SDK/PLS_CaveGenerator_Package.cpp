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
	 * 		Name   -> Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph
	 * 		Flags  -> ()
	 */
	void APLS_CaveGenerator_C::CreateCaveGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph");
		
		APLS_CaveGenerator_C_CreateCaveGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateSpawn
	 * 		Flags  -> ()
	 */
	void APLS_CaveGenerator_C::CreateSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateSpawn");
		
		APLS_CaveGenerator_C_CreateSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_CaveGenerator_C::ExecuteUbergraph_PLS_CaveGenerator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator");
		
		APLS_CaveGenerator_C_ExecuteUbergraph_PLS_CaveGenerator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APLS_CaveGenerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APLS_CaveGenerator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C");
		return ptr;
	}

}


