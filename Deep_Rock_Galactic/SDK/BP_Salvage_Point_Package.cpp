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
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Salvage_Point_C::SetSalvagePointState(unsigned char State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState");
		
		ABP_Salvage_Point_C_SetSalvagePointState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_C::OnRep_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State");
		
		ABP_Salvage_Point_C_OnRep_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_C::OnDefenseComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete");
		
		ABP_Salvage_Point_C_OnDefenseComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_C::OnDefenseStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart");
		
		ABP_Salvage_Point_C_OnDefenseStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_C::EnableRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair");
		
		ABP_Salvage_Point_C_EnableRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_C::OnDefenseFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail");
		
		ABP_Salvage_Point_C_OnDefenseFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Salvage_Point_C::ExecuteUbergraph_BP_Salvage_Point(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point");
		
		ABP_Salvage_Point_C_ExecuteUbergraph_BP_Salvage_Point_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Salvage_Point_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Salvage_Point_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C");
		return ptr;
	}

}


