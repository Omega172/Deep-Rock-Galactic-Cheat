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
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.ReceiveBeginPlay");
		
		ABP_CleanupPod_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.OnDroppodImpact
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_C::OnDroppodImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.OnDroppodImpact");
		
		ABP_CleanupPod_C_OnDroppodImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.OnDroppodCloseToImpact
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_C::OnDroppodCloseToImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.OnDroppodCloseToImpact");
		
		ABP_CleanupPod_C_OnDroppodCloseToImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.ResizeCarver
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_C::ResizeCarver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.ResizeCarver");
		
		ABP_CleanupPod_C_ResizeCarver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.OnDropStarted
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_C::OnDropStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.OnDropStarted");
		
		ABP_CleanupPod_C_OnDropStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.FinishTutorialTask
	 * 		Flags  -> ()
	 */
	void ABP_CleanupPod_C::FinishTutorialTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.FinishTutorialTask");
		
		ABP_CleanupPod_C_FinishTutorialTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.OnObjectiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjective*                                  Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CleanupPod_C::OnObjectiveChanged(class UObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.OnObjectiveChanged");
		
		ABP_CleanupPod_C_OnObjectiveChanged_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CleanupPod.BP_CleanupPod_C.ExecuteUbergraph_BP_CleanupPod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CleanupPod_C::ExecuteUbergraph_BP_CleanupPod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CleanupPod.BP_CleanupPod_C.ExecuteUbergraph_BP_CleanupPod");
		
		ABP_CleanupPod_C_ExecuteUbergraph_BP_CleanupPod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CleanupPod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CleanupPod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CleanupPod.BP_CleanupPod_C");
		return ptr;
	}

}


