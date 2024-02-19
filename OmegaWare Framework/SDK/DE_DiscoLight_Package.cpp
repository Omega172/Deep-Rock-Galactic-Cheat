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
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light
	 * 		Flags  -> ()
	 */
	void UDE_DiscoLight_C::OnRep_Light()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light");
		
		UDE_DiscoLight_C_OnRep_Light_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_DiscoLight_C::OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC");
		
		UDE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UDE_DiscoLight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay");
		
		UDE_DiscoLight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_DiscoLight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick");
		
		UDE_DiscoLight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_DiscoLight_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect");
		
		UDE_DiscoLight_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_DiscoLight_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect");
		
		UDE_DiscoLight_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.Set Light
	 * 		Flags  -> ()
	 */
	void UDE_DiscoLight_C::SetLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.Set Light");
		
		UDE_DiscoLight_C_SetLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_DiscoLight_C::ExecuteUbergraph_DE_DiscoLight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight");
		
		UDE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_DiscoLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_DiscoLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_DiscoLight.DE_DiscoLight_C");
		return ptr;
	}

}


