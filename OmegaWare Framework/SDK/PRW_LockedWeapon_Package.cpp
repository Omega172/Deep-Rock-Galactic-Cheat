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
	 * 		Name   -> Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRW_LockedWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay");
		
		APRW_LockedWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRW_LockedWeapon_C::ExecuteUbergraph_PRW_LockedWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon");
		
		APRW_LockedWeapon_C_ExecuteUbergraph_PRW_LockedWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRW_LockedWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRW_LockedWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRW_LockedWeapon.PRW_LockedWeapon_C");
		return ptr;
	}

}


