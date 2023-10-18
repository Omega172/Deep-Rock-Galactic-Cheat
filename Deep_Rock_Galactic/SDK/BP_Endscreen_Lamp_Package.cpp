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
	 * 		Name   -> Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UpdateLights
	 * 		Flags  -> ()
	 */
	void ABP_Endscreen_Lamp_C::UpdateLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UpdateLights");
		
		ABP_Endscreen_Lamp_C_UpdateLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Endscreen_Lamp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UserConstructionScript");
		
		ABP_Endscreen_Lamp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Endscreen_Lamp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ReceiveBeginPlay");
		
		ABP_Endscreen_Lamp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ExecuteUbergraph_BP_Endscreen_Lamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Endscreen_Lamp_C::ExecuteUbergraph_BP_Endscreen_Lamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ExecuteUbergraph_BP_Endscreen_Lamp");
		
		ABP_Endscreen_Lamp_C_ExecuteUbergraph_BP_Endscreen_Lamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Endscreen_Lamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Endscreen_Lamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Endscreen_Lamp.BP_Endscreen_Lamp_C");
		return ptr;
	}

}


