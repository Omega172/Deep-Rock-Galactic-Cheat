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
	 * 		Name   -> Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_DeadState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay");
		
		UBP_DeadState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
	 * 		Flags  -> ()
	 */
	void UBP_DeadState_C::ReceiveStateExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveStateExit");
		
		UBP_DeadState_C_ReceiveStateExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
	 * 		Flags  -> ()
	 */
	void UBP_DeadState_C::ReceiveStateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter");
		
		UBP_DeadState_C_ReceiveStateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DeadState.BP_DeadState_C.SetDeathParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              respawnDelay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              effectDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                deathMontage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             deathEffect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               useAnimationTimeAsRespawnTime                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DeadState_C::SetDeathParameters(float respawnDelay, float effectDelay, class UAnimMontage* deathMontage, class UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.SetDeathParameters");
		
		UBP_DeadState_C_SetDeathParameters_Params params {};
		params.respawnDelay = respawnDelay;
		params.effectDelay = effectDelay;
		params.deathMontage = deathMontage;
		params.deathEffect = deathEffect;
		params.useAnimationTimeAsRespawnTime = useAnimationTimeAsRespawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DeadState_C::ExecuteUbergraph_BP_DeadState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState");
		
		UBP_DeadState_C_ExecuteUbergraph_BP_DeadState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DeadState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DeadState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeadState.BP_DeadState_C");
		return ptr;
	}

}


