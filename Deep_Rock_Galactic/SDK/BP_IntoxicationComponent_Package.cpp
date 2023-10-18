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
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PercentString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::ToPercentStr(float Progress, class FString* PercentString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr");
		
		UBP_IntoxicationComponent_C_ToPercentStr_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PercentString != nullptr)
			*PercentString = params.PercentString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::MyLerp(float CurrentValue, float TargetValue, float DeltaTime, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp");
		
		UBP_IntoxicationComponent_C_MyLerp_Params params {};
		params.CurrentValue = CurrentValue;
		params.TargetValue = TargetValue;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewStrength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::SetPostProcessStrength(float NewStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength");
		
		UBP_IntoxicationComponent_C_SetPostProcessStrength_Params params {};
		params.NewStrength = NewStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDrinkableAlcoholStrength                          Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_IntoxicationComponent_C::GetAlcoholPct(EDrinkableAlcoholStrength Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct");
		
		UBP_IntoxicationComponent_C_GetAlcoholPct_Params params {};
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::LerpMovementStength(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength");
		
		UBP_IntoxicationComponent_C_LerpMovementStength_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects
	 * 		Flags  -> ()
	 */
	void UBP_IntoxicationComponent_C::PushEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects");
		
		UBP_IntoxicationComponent_C_PushEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DebugReason                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::PopEffects(const class FString& DebugReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects");
		
		UBP_IntoxicationComponent_C_PopEffects_Params params {};
		params.DebugReason = DebugReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrunkTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::ReceiveDrunkTick(float DeltaTime, float DrunkTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick");
		
		UBP_IntoxicationComponent_C_ReceiveDrunkTick_Params params {};
		params.DeltaTime = DeltaTime;
		params.DrunkTime = DrunkTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk
	 * 		Flags  -> ()
	 */
	void UBP_IntoxicationComponent_C::ReceivePassOutDrunk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk");
		
		UBP_IntoxicationComponent_C_ReceivePassOutDrunk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::LerpPostProcessStrength(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength");
		
		UBP_IntoxicationComponent_C_LerpPostProcessStrength_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd
	 * 		Flags  -> ()
	 */
	void UBP_IntoxicationComponent_C::ReceiveDrunkEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd");
		
		UBP_IntoxicationComponent_C_ReceiveDrunkEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin
	 * 		Flags  -> ()
	 */
	void UBP_IntoxicationComponent_C::ReceiveDrunkBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin");
		
		UBP_IntoxicationComponent_C_ReceiveDrunkBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IntoxicationComponent_C::ExecuteUbergraph_BP_IntoxicationComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent");
		
		UBP_IntoxicationComponent_C_ExecuteUbergraph_BP_IntoxicationComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_IntoxicationComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_IntoxicationComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C");
		return ptr;
	}

}


