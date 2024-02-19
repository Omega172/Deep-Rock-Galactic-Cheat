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
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APRJ_GrenadeAxe_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.UserConstructionScript");
		
		APRJ_GrenadeAxe_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_GrenadeAxe_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnImpacted");
		
		APRJ_GrenadeAxe_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.Discharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      hitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFSDPhysicalMaterial*                        HitPhysMat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_GrenadeAxe_C::Discharge(class AActor* hitActor, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, class UFSDPhysicalMaterial* HitPhysMat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.Discharge");
		
		APRJ_GrenadeAxe_C_Discharge_Params params {};
		params.hitActor = hitActor;
		params.HitComponent = HitComponent;
		params.HitLocation = HitLocation;
		params.HitPhysMat = HitPhysMat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BluntDamage
	 * 		Flags  -> ()
	 */
	void APRJ_GrenadeAxe_C::BluntDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BluntDamage");
		
		APRJ_GrenadeAxe_C_BluntDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_GrenadeAxe_C::BndEvt__KillSmallShitsSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		APRJ_GrenadeAxe_C_BndEvt__KillSmallShitsSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void APRJ_GrenadeAxe_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnInitialized");
		
		APRJ_GrenadeAxe_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ExecuteUbergraph_PRJ_GrenadeAxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_GrenadeAxe_C::ExecuteUbergraph_PRJ_GrenadeAxe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ExecuteUbergraph_PRJ_GrenadeAxe");
		
		APRJ_GrenadeAxe_C_ExecuteUbergraph_PRJ_GrenadeAxe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_GrenadeAxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_GrenadeAxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_GrenadeAxe.PRJ_GrenadeAxe_C");
		return ptr;
	}

}


