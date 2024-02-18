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
	 * 		Name   -> Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APRJ_SentryOvercharge_Projectile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript");
		
		APRJ_SentryOvercharge_Projectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_SentryOvercharge_Projectile_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted");
		
		APRJ_SentryOvercharge_Projectile_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_SentryOvercharge_Projectile_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		APRJ_SentryOvercharge_Projectile_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRJ_SentryOvercharge_Projectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay");
		
		APRJ_SentryOvercharge_Projectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy
	 * 		Flags  -> ()
	 */
	void APRJ_SentryOvercharge_Projectile_C::MakeBouncy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy");
		
		APRJ_SentryOvercharge_Projectile_C_MakeBouncy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_SentryOvercharge_Projectile_C::ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile");
		
		APRJ_SentryOvercharge_Projectile_C_ExecuteUbergraph_PRJ_SentryOvercharge_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_SentryOvercharge_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_SentryOvercharge_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C");
		return ptr;
	}

}


