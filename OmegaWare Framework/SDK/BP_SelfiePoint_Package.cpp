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
	 * 		Name   -> Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UBP_SelfiePoint_C::GetTargetTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform");
		
		UBP_SelfiePoint_C_GetTargetTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera
	 * 		Flags  -> ()
	 */
	void UBP_SelfiePoint_C::DeactivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera");
		
		UBP_SelfiePoint_C_DeactivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera
	 * 		Flags  -> ()
	 */
	void UBP_SelfiePoint_C::ActivateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera");
		
		UBP_SelfiePoint_C_ActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_SelfiePoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay");
		
		UBP_SelfiePoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SelfiePoint_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick");
		
		UBP_SelfiePoint_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SelfiePoint_C::ExecuteUbergraph_BP_SelfiePoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint");
		
		UBP_SelfiePoint_C_ExecuteUbergraph_BP_SelfiePoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SelfiePoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SelfiePoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SelfiePoint.BP_SelfiePoint_C");
		return ptr;
	}

}


