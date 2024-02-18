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
	 * 		Name   -> Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Incendiary_Flame_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ReceiveBeginPlay");
		
		ABP_Grenade_Incendiary_Flame_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ExecuteUbergraph_BP_Grenade_Incendiary_Flame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Incendiary_Flame_C::ExecuteUbergraph_BP_Grenade_Incendiary_Flame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C.ExecuteUbergraph_BP_Grenade_Incendiary_Flame");
		
		ABP_Grenade_Incendiary_Flame_C_ExecuteUbergraph_BP_Grenade_Incendiary_Flame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_Incendiary_Flame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_Incendiary_Flame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Incendiary_Flame.BP_Grenade_Incendiary_Flame_C");
		return ptr;
	}

}


