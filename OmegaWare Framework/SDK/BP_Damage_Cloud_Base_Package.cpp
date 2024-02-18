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
	 * 		Name   -> Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Damage_Cloud_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.UserConstructionScript");
		
		ABP_Damage_Cloud_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Damage_Cloud_Base_C::TriggerGrowth__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__FinishedFunc");
		
		ABP_Damage_Cloud_Base_C_TriggerGrowth__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Damage_Cloud_Base_C::TriggerGrowth__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.TriggerGrowth__UpdateFunc");
		
		ABP_Damage_Cloud_Base_C_TriggerGrowth__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Damage_Cloud_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ReceiveBeginPlay");
		
		ABP_Damage_Cloud_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Damage_Cloud_Base_C::ExecuteUbergraph_BP_Damage_Cloud_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Base");
		
		ABP_Damage_Cloud_Base_C_ExecuteUbergraph_BP_Damage_Cloud_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Damage_Cloud_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Damage_Cloud_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Damage_Cloud_Base.BP_Damage_Cloud_Base_C");
		return ptr;
	}

}


