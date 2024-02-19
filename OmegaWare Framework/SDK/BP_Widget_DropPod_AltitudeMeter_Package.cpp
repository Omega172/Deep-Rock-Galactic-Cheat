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
	 * 		Name   -> Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.TriggerCountdown
	 * 		Flags  -> ()
	 */
	void ABP_Widget_DropPod_AltitudeMeter_C::TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.TriggerCountdown");
		
		ABP_Widget_DropPod_AltitudeMeter_C_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Widget_DropPod_AltitudeMeter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveTick");
		
		ABP_Widget_DropPod_AltitudeMeter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Widget_DropPod_AltitudeMeter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveBeginPlay");
		
		ABP_Widget_DropPod_AltitudeMeter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.OnMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Widget_DropPod_AltitudeMeter_C::OnMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.OnMissionChanged");
		
		ABP_Widget_DropPod_AltitudeMeter_C_OnMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Widget_DropPod_AltitudeMeter_C::ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter");
		
		ABP_Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Widget_DropPod_AltitudeMeter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Widget_DropPod_AltitudeMeter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C");
		return ptr;
	}

}


