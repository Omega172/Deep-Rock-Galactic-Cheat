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
	 * 		Name   -> Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventSucceded
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Uplink_C::EventSucceded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventSucceded");
		
		AEVENT_DropPodDefense_Uplink_C_EventSucceded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventFailed
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Uplink_C::EventFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventFailed");
		
		AEVENT_DropPodDefense_Uplink_C_EventFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.ExecuteUbergraph_EVENT_DropPodDefense_Uplink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEVENT_DropPodDefense_Uplink_C::ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.ExecuteUbergraph_EVENT_DropPodDefense_Uplink");
		
		AEVENT_DropPodDefense_Uplink_C_ExecuteUbergraph_EVENT_DropPodDefense_Uplink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEVENT_DropPodDefense_Uplink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEVENT_DropPodDefense_Uplink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C");
		return ptr;
	}

}


