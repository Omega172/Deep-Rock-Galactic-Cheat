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
	 * 		Name   -> Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointerWaypoint_C::ScannerObjectTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc");
		
		ABP_LaserPointerWaypoint_C_ScannerObjectTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointerWaypoint_C::ScannerObjectTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc");
		
		ABP_LaserPointerWaypoint_C_ScannerObjectTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointerWaypoint_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow");
		
		ABP_LaserPointerWaypoint_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointerWaypoint_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide");
		
		ABP_LaserPointerWaypoint_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointerWaypoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay");
		
		ABP_LaserPointerWaypoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LaserPointerWaypoint_C::ExecuteUbergraph_BP_LaserPointerWaypoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint");
		
		ABP_LaserPointerWaypoint_C_ExecuteUbergraph_BP_LaserPointerWaypoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LaserPointerWaypoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LaserPointerWaypoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C");
		return ptr;
	}

}


