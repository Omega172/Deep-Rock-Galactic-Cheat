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
	 * 		Name   -> Function BP_OxygenTank.BP_OxygenTank_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OxygenTank_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenTank.BP_OxygenTank_C.ReceiveBeginPlay");
		
		ABP_OxygenTank_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OxygenTank.BP_OxygenTank_C.OnOxygenActivationChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OxygenTank_C::OnOxygenActivationChanged_Event_1(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenTank.BP_OxygenTank_C.OnOxygenActivationChanged_Event_1");
		
		ABP_OxygenTank_C_OnOxygenActivationChanged_Event_1_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OxygenTank.BP_OxygenTank_C.ExecuteUbergraph_BP_OxygenTank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OxygenTank_C::ExecuteUbergraph_BP_OxygenTank(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenTank.BP_OxygenTank_C.ExecuteUbergraph_BP_OxygenTank");
		
		ABP_OxygenTank_C_ExecuteUbergraph_BP_OxygenTank_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OxygenTank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OxygenTank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OxygenTank.BP_OxygenTank_C");
		return ptr;
	}

}


