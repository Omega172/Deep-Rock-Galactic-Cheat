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
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.SolveTooCloseToInvalidator
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::SolveTooCloseToInvalidator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.SolveTooCloseToInvalidator");
		
		ABP_Salvage_FuelPoint_C_SolveTooCloseToInvalidator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.CheckIfCloseToInvalidators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsClose                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Salvage_FuelPoint_C::CheckIfCloseToInvalidators(bool* IsClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.CheckIfCloseToInvalidators");
		
		ABP_Salvage_FuelPoint_C_CheckIfCloseToInvalidators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsClose != nullptr)
			*IsClose = params.IsClose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::EnableRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair");
		
		ABP_Salvage_FuelPoint_C_EnableRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::OnDefenseStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart");
		
		ABP_Salvage_FuelPoint_C_OnDefenseStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::OnDefenseComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete");
		
		ABP_Salvage_FuelPoint_C_OnDefenseComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::OnDefenseFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail");
		
		ABP_Salvage_FuelPoint_C_OnDefenseFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.Call In Pod
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::CallInPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.Call In Pod");
		
		ABP_Salvage_FuelPoint_C_CallInPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_FuelPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ReceiveBeginPlay");
		
		ABP_Salvage_FuelPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Salvage_FuelPoint_C::ExecuteUbergraph_BP_Salvage_FuelPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint");
		
		ABP_Salvage_FuelPoint_C_ExecuteUbergraph_BP_Salvage_FuelPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Salvage_FuelPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Salvage_FuelPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C");
		return ptr;
	}

}


