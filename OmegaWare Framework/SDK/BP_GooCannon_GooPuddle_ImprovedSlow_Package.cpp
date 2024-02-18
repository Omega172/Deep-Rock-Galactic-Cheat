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
	 * 		Name   -> Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_ImprovedSlow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveBeginPlay");
		
		ABP_GooCannon_GooPuddle_ImprovedSlow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GooCannon_GooPuddle_ImprovedSlow_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveActorBeginOverlap");
		
		ABP_GooCannon_GooPuddle_ImprovedSlow_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GooCannon_GooPuddle_ImprovedSlow_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveTick");
		
		ABP_GooCannon_GooPuddle_ImprovedSlow_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GooCannon_GooPuddle_ImprovedSlow_C::ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow");
		
		ABP_GooCannon_GooPuddle_ImprovedSlow_C_ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GooCannon_GooPuddle_ImprovedSlow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GooCannon_GooPuddle_ImprovedSlow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C");
		return ptr;
	}

}


