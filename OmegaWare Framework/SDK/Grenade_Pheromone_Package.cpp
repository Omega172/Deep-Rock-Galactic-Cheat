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
	 * 		Name   -> Function Grenade_Pheromone.Grenade_Pheromone_C.AddGearStateEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AGrenade_Pheromone_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.AddGearStateEntries");
		
		AGrenade_Pheromone_C_AddGearStateEntries_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Pheromone.Grenade_Pheromone_C.OnExploded
	 * 		Flags  -> ()
	 */
	void AGrenade_Pheromone_C::OnExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.OnExploded");
		
		AGrenade_Pheromone_C_OnExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Pheromone.Grenade_Pheromone_C.ApplyPheromones
	 * 		Flags  -> ()
	 */
	void AGrenade_Pheromone_C::ApplyPheromones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.ApplyPheromones");
		
		AGrenade_Pheromone_C_ApplyPheromones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Pheromone.Grenade_Pheromone_C.ExecuteUbergraph_Grenade_Pheromone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrenade_Pheromone_C::ExecuteUbergraph_Grenade_Pheromone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.ExecuteUbergraph_Grenade_Pheromone");
		
		AGrenade_Pheromone_C_ExecuteUbergraph_Grenade_Pheromone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrenade_Pheromone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrenade_Pheromone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Pheromone.Grenade_Pheromone_C");
		return ptr;
	}

}


