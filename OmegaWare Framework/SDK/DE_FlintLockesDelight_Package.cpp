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
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion
	 * 		Flags  -> ()
	 */
	void UDE_FlintLockesDelight_C::OnRep_TriggerExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion");
		
		UDE_FlintLockesDelight_C_OnRep_TriggerExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_FlintLockesDelight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick");
		
		UDE_FlintLockesDelight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_FlintLockesDelight_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect");
		
		UDE_FlintLockesDelight_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion
	 * 		Flags  -> ()
	 */
	void UDE_FlintLockesDelight_C::TriggerExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion");
		
		UDE_FlintLockesDelight_C_TriggerExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_FlintLockesDelight_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect");
		
		UDE_FlintLockesDelight_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects
	 * 		Flags  -> ()
	 */
	void UDE_FlintLockesDelight_C::StopEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects");
		
		UDE_FlintLockesDelight_C_StopEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_FlintLockesDelight_C::ExecuteUbergraph_DE_FlintLockesDelight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight");
		
		UDE_FlintLockesDelight_C_ExecuteUbergraph_DE_FlintLockesDelight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_FlintLockesDelight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_FlintLockesDelight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_FlintLockesDelight.DE_FlintLockesDelight_C");
		return ptr;
	}

}


