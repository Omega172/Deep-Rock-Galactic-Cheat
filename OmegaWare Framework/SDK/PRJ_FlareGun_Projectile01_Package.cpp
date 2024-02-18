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
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnRep_bFallToGround
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::OnRep_bFallToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnRep_bFallToGround");
		
		APRJ_FlareGun_Projectile01_C_OnRep_bFallToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.SpawnImpact
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::SpawnImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.SpawnImpact");
		
		APRJ_FlareGun_Projectile01_C_SpawnImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::UpdateShadowRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius");
		
		APRJ_FlareGun_Projectile01_C_UpdateShadowRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_FlareGun_Projectile01_C::StartFadeOut(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut");
		
		APRJ_FlareGun_Projectile01_C_StartFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UHealthComponentBase*                        Health                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_FlareGun_Projectile01_C::GetHealthBaseComponentFromActor(class AActor* Actor, class UHealthComponentBase** Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor");
		
		APRJ_FlareGun_Projectile01_C_GetHealthBaseComponentFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::FallToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround");
		
		APRJ_FlareGun_Projectile01_C_FallToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::Light_Anim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc");
		
		APRJ_FlareGun_Projectile01_C_Light_Anim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::Light_Anim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc");
		
		APRJ_FlareGun_Projectile01_C_Light_Anim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_FlareGun_Projectile01_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted");
		
		APRJ_FlareGun_Projectile01_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_FlareGun_Projectile01_C::BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature");
		
		APRJ_FlareGun_Projectile01_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ATeamTransport*                              DropPod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_FlareGun_Projectile01_C::OnDroppodImpact(class ATeamTransport* DropPod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact");
		
		APRJ_FlareGun_Projectile01_C_OnDroppodImpact_Params params {};
		params.DropPod = DropPod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::HideAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll");
		
		APRJ_FlareGun_Projectile01_C_HideAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::OnFlareExtinguish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish");
		
		APRJ_FlareGun_Projectile01_C_OnFlareExtinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::OnUpdateShadowRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius");
		
		APRJ_FlareGun_Projectile01_C_OnUpdateShadowRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare
	 * 		Flags  -> ()
	 */
	void APRJ_FlareGun_Projectile01_C::ActivateFlare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ActivateFlare");
		
		APRJ_FlareGun_Projectile01_C_ActivateFlare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_FlareGun_Projectile01_C::ExecuteUbergraph_PRJ_FlareGun_Projectile01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01");
		
		APRJ_FlareGun_Projectile01_C_ExecuteUbergraph_PRJ_FlareGun_Projectile01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_FlareGun_Projectile01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_FlareGun_Projectile01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C");
		return ptr;
	}

}


