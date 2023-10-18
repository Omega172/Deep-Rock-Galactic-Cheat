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
	 * 		Name   -> Function PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C.SetMainDamageComponentFromBP
	 * 		Flags  -> ()
	 */
	void APRJ_Crossbow_Projectile_C::SetMainDamageComponentFromBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C.SetMainDamageComponentFromBP");
		
		APRJ_Crossbow_Projectile_C_SetMainDamageComponentFromBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C.SetSimpleDamageComponentFromBP
	 * 		Flags  -> ()
	 */
	void APRJ_Crossbow_Projectile_C::SetSimpleDamageComponentFromBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C.SetSimpleDamageComponentFromBP");
		
		APRJ_Crossbow_Projectile_C_SetSimpleDamageComponentFromBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C.ExecuteUbergraph_PRJ_Crossbow_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_Crossbow_Projectile_C::ExecuteUbergraph_PRJ_Crossbow_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C.ExecuteUbergraph_PRJ_Crossbow_Projectile");
		
		APRJ_Crossbow_Projectile_C_ExecuteUbergraph_PRJ_Crossbow_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_Crossbow_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_Crossbow_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_Crossbow_Projectile.PRJ_Crossbow_Projectile_C");
		return ptr;
	}

}


