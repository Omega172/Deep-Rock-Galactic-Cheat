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
	 * 		Name   -> Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SalvageFuelCells_Beacon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.UserConstructionScript");
		
		ABP_SalvageFuelCells_Beacon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SalvageFuelCells_Beacon_C::LightAnimation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__FinishedFunc");
		
		ABP_SalvageFuelCells_Beacon_C_LightAnimation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SalvageFuelCells_Beacon_C::LightAnimation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__UpdateFunc");
		
		ABP_SalvageFuelCells_Beacon_C_LightAnimation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SalvageFuelCells_Beacon_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveTick");
		
		ABP_SalvageFuelCells_Beacon_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SalvageFuelCells_Beacon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveBeginPlay");
		
		ABP_SalvageFuelCells_Beacon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ExecuteUbergraph_BP_SalvageFuelCells_Beacon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SalvageFuelCells_Beacon_C::ExecuteUbergraph_BP_SalvageFuelCells_Beacon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ExecuteUbergraph_BP_SalvageFuelCells_Beacon");
		
		ABP_SalvageFuelCells_Beacon_C_ExecuteUbergraph_BP_SalvageFuelCells_Beacon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SalvageFuelCells_Beacon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SalvageFuelCells_Beacon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C");
		return ptr;
	}

}


