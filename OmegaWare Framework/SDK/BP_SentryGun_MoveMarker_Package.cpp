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
	 * 		Name   -> Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_MoveMarker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.UserConstructionScript");
		
		ABP_SentryGun_MoveMarker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_MoveMarker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ReceiveBeginPlay");
		
		ABP_SentryGun_MoveMarker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ExecuteUbergraph_BP_SentryGun_MoveMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_MoveMarker_C::ExecuteUbergraph_BP_SentryGun_MoveMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C.ExecuteUbergraph_BP_SentryGun_MoveMarker");
		
		ABP_SentryGun_MoveMarker_C_ExecuteUbergraph_BP_SentryGun_MoveMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SentryGun_MoveMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SentryGun_MoveMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C");
		return ptr;
	}

}


