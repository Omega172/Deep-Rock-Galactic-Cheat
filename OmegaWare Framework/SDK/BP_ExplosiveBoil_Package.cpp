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
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.CopyGlobalWeakpointModSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplosiveBoil_C::CopyGlobalWeakpointModSettings(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.CopyGlobalWeakpointModSettings");
		
		ABP_ExplosiveBoil_C_CopyGlobalWeakpointModSettings_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ExplosiveBoil_C::Grow__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__FinishedFunc");
		
		ABP_ExplosiveBoil_C_Grow__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ExplosiveBoil_C::Grow__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.Grow__UpdateFunc");
		
		ABP_ExplosiveBoil_C_Grow__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ExplosiveBoil_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ReceiveBeginPlay");
		
		ABP_ExplosiveBoil_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDestroyed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplosiveBoil_C::OnDestroyed_Event(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDestroyed_Event");
		
		ABP_ExplosiveBoil_C_OnDestroyed_Event_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDeath_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplosiveBoil_C::OnDeath_Event(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.OnDeath_Event");
		
		ABP_ExplosiveBoil_C_OnDeath_Event_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplosiveBoil_C::BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature");
		
		ABP_ExplosiveBoil_C_BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_4_DeathSig__DelegateSignature_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageData                                 DamageData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               anyHealthLost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplosiveBoil_C::BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const struct FDamageData& DamageData, bool anyHealthLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature");
		
		ABP_ExplosiveBoil_C_BndEvt__BP_ExplosiveBoil_EnemyHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature_Params params {};
		params.Damage = Damage;
		params.DamageData = DamageData;
		params.anyHealthLost = anyHealthLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ExecuteUbergraph_BP_ExplosiveBoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplosiveBoil_C::ExecuteUbergraph_BP_ExplosiveBoil(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBoil.BP_ExplosiveBoil_C.ExecuteUbergraph_BP_ExplosiveBoil");
		
		ABP_ExplosiveBoil_C_ExecuteUbergraph_BP_ExplosiveBoil_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExplosiveBoil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExplosiveBoil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplosiveBoil.BP_ExplosiveBoil_C");
		return ptr;
	}

}


