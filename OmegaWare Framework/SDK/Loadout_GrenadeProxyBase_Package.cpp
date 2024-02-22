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
	 * 		Name   -> Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void ALoadout_GrenadeProxyBase_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveEquipped");
		
		ALoadout_GrenadeProxyBase_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void ALoadout_GrenadeProxyBase_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveUnequipped");
		
		ALoadout_GrenadeProxyBase_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.ExecuteUbergraph_Loadout_GrenadeProxyBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALoadout_GrenadeProxyBase_C::ExecuteUbergraph_Loadout_GrenadeProxyBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.ExecuteUbergraph_Loadout_GrenadeProxyBase");
		
		ALoadout_GrenadeProxyBase_C_ExecuteUbergraph_Loadout_GrenadeProxyBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALoadout_GrenadeProxyBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadout_GrenadeProxyBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C");
		return ptr;
	}

}


