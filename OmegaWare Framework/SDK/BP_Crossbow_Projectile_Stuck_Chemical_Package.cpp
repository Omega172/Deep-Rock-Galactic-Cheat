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
	 * 		Name   -> Function BP_Crossbow_Projectile_Stuck_Chemical.BP_Crossbow_Projectile_Stuck_Chemical_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Crossbow_Projectile_Stuck_Chemical_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Crossbow_Projectile_Stuck_Chemical.BP_Crossbow_Projectile_Stuck_Chemical_C.UserConstructionScript");
		
		ABP_Crossbow_Projectile_Stuck_Chemical_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Crossbow_Projectile_Stuck_Chemical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Crossbow_Projectile_Stuck_Chemical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Crossbow_Projectile_Stuck_Chemical.BP_Crossbow_Projectile_Stuck_Chemical_C");
		return ptr;
	}

}


