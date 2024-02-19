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
	 * 		Name   -> Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_BaseGooProjectile_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.OnImpacted");
		
		APRJ_BaseGooProjectile_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.OnUpgradeElementAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProjectileUpgradeElement*                   element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_BaseGooProjectile_C::OnUpgradeElementAdded(class UProjectileUpgradeElement* element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.OnUpgradeElementAdded");
		
		APRJ_BaseGooProjectile_C_OnUpgradeElementAdded_Params params {};
		params.element = element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.DestroyProjectile
	 * 		Flags  -> ()
	 */
	void APRJ_BaseGooProjectile_C::DestroyProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.DestroyProjectile");
		
		APRJ_BaseGooProjectile_C_DestroyProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.ExecuteUbergraph_PRJ_BaseGooProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_BaseGooProjectile_C::ExecuteUbergraph_PRJ_BaseGooProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C.ExecuteUbergraph_PRJ_BaseGooProjectile");
		
		APRJ_BaseGooProjectile_C_ExecuteUbergraph_PRJ_BaseGooProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_BaseGooProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_BaseGooProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C");
		return ptr;
	}

}


