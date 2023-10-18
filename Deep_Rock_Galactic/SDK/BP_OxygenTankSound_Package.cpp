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
	 * 		Name   -> Function BP_OxygenTankSound.BP_OxygenTankSound_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OxygenTankSound_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenTankSound.BP_OxygenTankSound_C.ReceiveBeginPlay");
		
		ABP_OxygenTankSound_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OxygenTankSound.BP_OxygenTankSound_C.OnOxygenActivationChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OxygenTankSound_C::OnOxygenActivationChanged_Event_1(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenTankSound.BP_OxygenTankSound_C.OnOxygenActivationChanged_Event_1");
		
		ABP_OxygenTankSound_C_OnOxygenActivationChanged_Event_1_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OxygenTankSound.BP_OxygenTankSound_C.ExecuteUbergraph_BP_OxygenTankSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OxygenTankSound_C::ExecuteUbergraph_BP_OxygenTankSound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenTankSound.BP_OxygenTankSound_C.ExecuteUbergraph_BP_OxygenTankSound");
		
		ABP_OxygenTankSound_C_ExecuteUbergraph_BP_OxygenTankSound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OxygenTankSound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OxygenTankSound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OxygenTankSound.BP_OxygenTankSound_C");
		return ptr;
	}

}


