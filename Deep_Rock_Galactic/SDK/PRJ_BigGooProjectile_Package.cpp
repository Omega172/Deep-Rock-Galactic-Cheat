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
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.SpawnSmallGoo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_BigGooProjectile_C::SpawnSmallGoo(const struct FVector& InVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.SpawnSmallGoo");
		
		APRJ_BigGooProjectile_C_SpawnSmallGoo_Params params {};
		params.InVec = InVec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRJ_BigGooProjectile_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.Timeline_0__FinishedFunc");
		
		APRJ_BigGooProjectile_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRJ_BigGooProjectile_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.Timeline_0__UpdateFunc");
		
		APRJ_BigGooProjectile_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.SpawnSmallGooBalls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_BigGooProjectile_C::SpawnSmallGooBalls(const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.SpawnSmallGooBalls");
		
		APRJ_BigGooProjectile_C_SpawnSmallGooBalls_Params params {};
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnUpgradeElementAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProjectileUpgradeElement*                   element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_BigGooProjectile_C::OnUpgradeElementAdded(class UProjectileUpgradeElement* element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnUpgradeElementAdded");
		
		APRJ_BigGooProjectile_C_OnUpgradeElementAdded_Params params {};
		params.element = element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_BigGooProjectile_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnImpacted");
		
		APRJ_BigGooProjectile_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void APRJ_BigGooProjectile_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.OnInitialized");
		
		APRJ_BigGooProjectile_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.ExecuteUbergraph_PRJ_BigGooProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_BigGooProjectile_C::ExecuteUbergraph_PRJ_BigGooProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_BigGooProjectile.PRJ_BigGooProjectile_C.ExecuteUbergraph_PRJ_BigGooProjectile");
		
		APRJ_BigGooProjectile_C_ExecuteUbergraph_PRJ_BigGooProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_BigGooProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_BigGooProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_BigGooProjectile.PRJ_BigGooProjectile_C");
		return ptr;
	}

}


