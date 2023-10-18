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
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale
	 * 		Flags  -> ()
	 */
	void UDE_MaltRockBearer_C::OnRep_CurrentScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnRep_Current Scale");
		
		UDE_MaltRockBearer_C_OnRep_CurrentScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNextScaleColliding                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDE_MaltRockBearer_C::TraceForScaledCollision(bool* IsNextScaleColliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.TraceForScaledCollision");
		
		UDE_MaltRockBearer_C_TraceForScaledCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNextScaleColliding != nullptr)
			*IsNextScaleColliding = params.IsNextScaleColliding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_MaltRockBearer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.ReceiveTick");
		
		UDE_MaltRockBearer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_MaltRockBearer_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStartEffect");
		
		UDE_MaltRockBearer_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_MaltRockBearer_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.OnStopEffect");
		
		UDE_MaltRockBearer_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_MaltRockBearer_C::HandleScaling(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.Handle Scaling");
		
		UDE_MaltRockBearer_C_HandleScaling_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.Reset Voice
	 * 		Flags  -> ()
	 */
	void UDE_MaltRockBearer_C::ResetVoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.Reset Voice");
		
		UDE_MaltRockBearer_C_ResetVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_MaltRockBearer_C::ExecuteUbergraph_DE_MaltRockBearer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_MaltRockBearer.DE_MaltRockBearer_C.ExecuteUbergraph_DE_MaltRockBearer");
		
		UDE_MaltRockBearer_C_ExecuteUbergraph_DE_MaltRockBearer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_MaltRockBearer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_MaltRockBearer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_MaltRockBearer.DE_MaltRockBearer_C");
		return ptr;
	}

}


