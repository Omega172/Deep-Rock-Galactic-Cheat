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
	 * 		Name   -> Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoscoStateDisplay_C::SetMaterial(class UMaterialInstance* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial");
		
		ABP_BoscoStateDisplay_C_SetMaterial_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDroneAIState                                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoscoStateDisplay_C::SetState(EDroneAIState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState");
		
		ABP_BoscoStateDisplay_C_SetState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BoscoStateDisplay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay");
		
		ABP_BoscoStateDisplay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.FollowTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FollowTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoscoStateDisplay_C::FollowTargetChanged(class AActor* FollowTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.FollowTargetChanged");
		
		ABP_BoscoStateDisplay_C_FollowTargetChanged_Params params {};
		params.FollowTarget = FollowTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetupFollowtargetDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABoscoController*                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoscoStateDisplay_C::SetupFollowtargetDelegate(class ABoscoController* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetupFollowtargetDelegate");
		
		ABP_BoscoStateDisplay_C_SetupFollowtargetDelegate_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoscoStateDisplay_C::ExecuteUbergraph_BP_BoscoStateDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay");
		
		ABP_BoscoStateDisplay_C_ExecuteUbergraph_BP_BoscoStateDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BoscoStateDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BoscoStateDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoscoStateDisplay.BP_BoscoStateDisplay_C");
		return ptr;
	}

}


