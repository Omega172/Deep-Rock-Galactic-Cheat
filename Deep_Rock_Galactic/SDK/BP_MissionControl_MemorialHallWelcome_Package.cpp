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
	 * 		Name   -> Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MissionControl_MemorialHallWelcome_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ReceiveActorBeginOverlap");
		
		ABP_MissionControl_MemorialHallWelcome_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MissionControl_MemorialHallWelcome_C::ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome");
		
		ABP_MissionControl_MemorialHallWelcome_C_ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MissionControl_MemorialHallWelcome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MissionControl_MemorialHallWelcome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C");
		return ptr;
	}

}


