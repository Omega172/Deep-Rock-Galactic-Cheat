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
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.StopMissile
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::StopMissile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.StopMissile");
		
		APRJ_MicroMissile_C_StopMissile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.IncreaseDamage
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::IncreaseDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.IncreaseDamage");
		
		APRJ_MicroMissile_C_IncreaseDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.Timeline_0__FinishedFunc");
		
		APRJ_MicroMissile_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.Timeline_0__UpdateFunc");
		
		APRJ_MicroMissile_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.UnstableFuelMixUpdate
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::UnstableFuelMixUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.UnstableFuelMixUpdate");
		
		APRJ_MicroMissile_C_UnstableFuelMixUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.StartLightIntensityIncrease
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::StartLightIntensityIncrease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.StartLightIntensityIncrease");
		
		APRJ_MicroMissile_C_StartLightIntensityIncrease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.StartBlink
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::StartBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.StartBlink");
		
		APRJ_MicroMissile_C_StartBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnUpgradeElementAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProjectileUpgradeElement*                   element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_MicroMissile_C::OnUpgradeElementAdded(class UProjectileUpgradeElement* element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnUpgradeElementAdded");
		
		APRJ_MicroMissile_C_OnUpgradeElementAdded_Params params {};
		params.element = element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.TurnUpLightIndicator
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::TurnUpLightIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.TurnUpLightIndicator");
		
		APRJ_MicroMissile_C_TurnUpLightIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnInitialized");
		
		APRJ_MicroMissile_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.CountSeconds
	 * 		Flags  -> ()
	 */
	void APRJ_MicroMissile_C::CountSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.CountSeconds");
		
		APRJ_MicroMissile_C_CountSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.Explode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_MicroMissile_C::Explode(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.Explode");
		
		APRJ_MicroMissile_C_Explode_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.Impact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_MicroMissile_C::Impact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.Impact");
		
		APRJ_MicroMissile_C_Impact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_MicroMissile_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.OnImpacted");
		
		APRJ_MicroMissile_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_MicroMissile.PRJ_MicroMissile_C.ExecuteUbergraph_PRJ_MicroMissile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_MicroMissile_C::ExecuteUbergraph_PRJ_MicroMissile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_MicroMissile.PRJ_MicroMissile_C.ExecuteUbergraph_PRJ_MicroMissile");
		
		APRJ_MicroMissile_C_ExecuteUbergraph_PRJ_MicroMissile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_MicroMissile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_MicroMissile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_MicroMissile.PRJ_MicroMissile_C");
		return ptr;
	}

}


