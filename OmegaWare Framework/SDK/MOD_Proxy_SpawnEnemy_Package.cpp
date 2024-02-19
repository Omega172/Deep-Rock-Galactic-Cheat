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
	 * 		Name   -> Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMOD_Proxy_SpawnEnemy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ReceiveBeginPlay");
		
		AMOD_Proxy_SpawnEnemy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.spawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMOD_Proxy_SpawnEnemy_C::spawned(class APawn* enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.spawned");
		
		AMOD_Proxy_SpawnEnemy_C_spawned_Params params {};
		params.enemy = enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ExecuteUbergraph_MOD_Proxy_SpawnEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMOD_Proxy_SpawnEnemy_C::ExecuteUbergraph_MOD_Proxy_SpawnEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ExecuteUbergraph_MOD_Proxy_SpawnEnemy");
		
		AMOD_Proxy_SpawnEnemy_C_ExecuteUbergraph_MOD_Proxy_SpawnEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.OnEnemySpawned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMOD_Proxy_SpawnEnemy_C::OnEnemySpawned__DelegateSignature(class APawn* enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.OnEnemySpawned__DelegateSignature");
		
		AMOD_Proxy_SpawnEnemy_C_OnEnemySpawned__DelegateSignature_Params params {};
		params.enemy = enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMOD_Proxy_SpawnEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMOD_Proxy_SpawnEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C");
		return ptr;
	}

}


