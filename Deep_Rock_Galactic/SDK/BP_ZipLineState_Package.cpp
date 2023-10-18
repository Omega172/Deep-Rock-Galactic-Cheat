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
	 * 		Name   -> Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LookVector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurrentVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBP_ZipLineState_C::GetJumpVector(const struct FVector& LookVector, const struct FVector& CurrentVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector");
		
		UBP_ZipLineState_C_GetJumpVector_Params params {};
		params.LookVector = LookVector;
		params.CurrentVelocity = CurrentVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated
	 * 		Flags  -> ()
	 */
	void UBP_ZipLineState_C::ReceiveSpeedBoostActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated");
		
		UBP_ZipLineState_C_ReceiveSpeedBoostActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated
	 * 		Flags  -> ()
	 */
	void UBP_ZipLineState_C::ReceiveSpeedBoostDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated");
		
		UBP_ZipLineState_C_ReceiveSpeedBoostDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ZipLineState_C::ExecuteUbergraph_BP_ZipLineState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState");
		
		UBP_ZipLineState_C_ExecuteUbergraph_BP_ZipLineState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ZipLineState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ZipLineState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C");
		return ptr;
	}

}


