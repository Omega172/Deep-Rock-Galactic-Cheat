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
	 * 		Name   -> Function Loadout_Detpack.Loadout_Detpack_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void ALoadout_Detpack_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Detpack.Loadout_Detpack_C.RecieveEquipped");
		
		ALoadout_Detpack_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Loadout_Detpack.Loadout_Detpack_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void ALoadout_Detpack_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Detpack.Loadout_Detpack_C.RecieveUnequipped");
		
		ALoadout_Detpack_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Loadout_Detpack.Loadout_Detpack_C.ExecuteUbergraph_Loadout_Detpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALoadout_Detpack_C::ExecuteUbergraph_Loadout_Detpack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Detpack.Loadout_Detpack_C.ExecuteUbergraph_Loadout_Detpack");
		
		ALoadout_Detpack_C_ExecuteUbergraph_Loadout_Detpack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALoadout_Detpack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadout_Detpack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_Detpack.Loadout_Detpack_C");
		return ptr;
	}

}


