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
	 * 		Name   -> Function BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CombatShotgun_PoisonPlatforms_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C.ReceiveBeginPlay");
		
		ABP_CombatShotgun_PoisonPlatforms_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C.ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CombatShotgun_PoisonPlatforms_C::ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C.ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms");
		
		ABP_CombatShotgun_PoisonPlatforms_C_ExecuteUbergraph_BP_CombatShotgun_PoisonPlatforms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CombatShotgun_PoisonPlatforms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CombatShotgun_PoisonPlatforms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CombatShotgun_PoisonPlatforms.BP_CombatShotgun_PoisonPlatforms_C");
		return ptr;
	}

}


