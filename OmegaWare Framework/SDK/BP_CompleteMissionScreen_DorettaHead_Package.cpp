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
	 * 		Name   -> Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CompleteMissionScreen_DorettaHead_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ReceiveBeginPlay");
		
		ABP_CompleteMissionScreen_DorettaHead_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.StartPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharselectionCameraLocation                       selectionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CompleteMissionScreen_DorettaHead_C::StartPlay(ECharselectionCameraLocation selectionLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.StartPlay");
		
		ABP_CompleteMissionScreen_DorettaHead_C_StartPlay_Params params {};
		params.selectionLocation = selectionLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CompleteMissionScreen_DorettaHead_C::ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C.ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead");
		
		ABP_CompleteMissionScreen_DorettaHead_C_ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CompleteMissionScreen_DorettaHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CompleteMissionScreen_DorettaHead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CompleteMissionScreen_DorettaHead.BP_CompleteMissionScreen_DorettaHead_C");
		return ptr;
	}

}


