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
	 * 		Name   -> Function MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMOD_Proxy_SpawnWave_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C.ReceiveBeginPlay");
		
		AMOD_Proxy_SpawnWave_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C.ExecuteUbergraph_MOD_Proxy_SpawnWave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMOD_Proxy_SpawnWave_C::ExecuteUbergraph_MOD_Proxy_SpawnWave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C.ExecuteUbergraph_MOD_Proxy_SpawnWave");
		
		AMOD_Proxy_SpawnWave_C_ExecuteUbergraph_MOD_Proxy_SpawnWave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMOD_Proxy_SpawnWave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMOD_Proxy_SpawnWave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MOD_Proxy_SpawnWave.MOD_Proxy_SpawnWave_C");
		return ptr;
	}

}


