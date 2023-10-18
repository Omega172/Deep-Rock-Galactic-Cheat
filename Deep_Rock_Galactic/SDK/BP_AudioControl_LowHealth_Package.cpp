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
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.SetSoundFromAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioControl_LowHealth_C::SetSoundFromAlpha(float FadeAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.SetSoundFromAlpha");
		
		UBP_AudioControl_LowHealth_C_SetSoundFromAlpha_Params params {};
		params.FadeAlpha = FadeAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ShouldSetTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActivate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_AudioControl_LowHealth_C::ShouldSetTimestamp(bool IsActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ShouldSetTimestamp");
		
		UBP_AudioControl_LowHealth_C_ShouldSetTimestamp_Params params {};
		params.IsActivate = IsActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_AudioControl_LowHealth_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveBeginPlay");
		
		UBP_AudioControl_LowHealth_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioControl_LowHealth_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveTick");
		
		UBP_AudioControl_LowHealth_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioControl_LowHealth_C::HealthChanged(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HealthChanged");
		
		UBP_AudioControl_LowHealth_C_HealthChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeInLowHealth
	 * 		Flags  -> ()
	 */
	void UBP_AudioControl_LowHealth_C::FadeInLowHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeInLowHealth");
		
		UBP_AudioControl_LowHealth_C_FadeInLowHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeOutLowHealth
	 * 		Flags  -> ()
	 */
	void UBP_AudioControl_LowHealth_C::FadeOutLowHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeOutLowHealth");
		
		UBP_AudioControl_LowHealth_C_FadeOutLowHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleHeartbeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AudioControl_LowHealth_C::HandleHeartbeat(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleHeartbeat");
		
		UBP_AudioControl_LowHealth_C_HandleHeartbeat_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleLowHealthMuffling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AudioControl_LowHealth_C::HandleLowHealthMuffling(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleLowHealthMuffling");
		
		UBP_AudioControl_LowHealth_C_HandleLowHealthMuffling_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeath_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioControl_LowHealth_C::OnDeath_Event(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeath_Event");
		
		UBP_AudioControl_LowHealth_C_OnDeath_Event_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDestroyed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioControl_LowHealth_C::OnDestroyed_Event(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDestroyed_Event");
		
		UBP_AudioControl_LowHealth_C_OnDestroyed_Event_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeahtAndDestroyed
	 * 		Flags  -> ()
	 */
	void UBP_AudioControl_LowHealth_C::OnDeahtAndDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeahtAndDestroyed");
		
		UBP_AudioControl_LowHealth_C_OnDeahtAndDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ExecuteUbergraph_BP_AudioControl_LowHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AudioControl_LowHealth_C::ExecuteUbergraph_BP_AudioControl_LowHealth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ExecuteUbergraph_BP_AudioControl_LowHealth");
		
		UBP_AudioControl_LowHealth_C_ExecuteUbergraph_BP_AudioControl_LowHealth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AudioControl_LowHealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AudioControl_LowHealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C");
		return ptr;
	}

}


