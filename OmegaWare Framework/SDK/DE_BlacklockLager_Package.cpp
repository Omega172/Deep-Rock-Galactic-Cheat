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
	 * 		Name   -> Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_BlacklockLager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick");
		
		UDE_BlacklockLager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_BlacklockLager_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect");
		
		UDE_BlacklockLager_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects
	 * 		Flags  -> ()
	 */
	void UDE_BlacklockLager_C::ActivateEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects");
		
		UDE_BlacklockLager_C_ActivateEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_BlacklockLager_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect");
		
		UDE_BlacklockLager_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_BlacklockLager_C::ExecuteUbergraph_DE_BlacklockLager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager");
		
		UDE_BlacklockLager_C_ExecuteUbergraph_DE_BlacklockLager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_BlacklockLager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_BlacklockLager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_BlacklockLager.DE_BlacklockLager_C");
		return ptr;
	}

}


