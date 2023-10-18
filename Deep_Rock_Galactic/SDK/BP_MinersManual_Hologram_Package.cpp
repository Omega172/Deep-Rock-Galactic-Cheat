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
	 * 		Name   -> Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MinersManual_Hologram_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ReceiveBeginPlay");
		
		ABP_MinersManual_Hologram_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MinersManual_Hologram_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ReceiveTick");
		
		ABP_MinersManual_Hologram_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ExecuteUbergraph_BP_MinersManual_Hologram
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MinersManual_Hologram_C::ExecuteUbergraph_BP_MinersManual_Hologram(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MinersManual_Hologram.BP_MinersManual_Hologram_C.ExecuteUbergraph_BP_MinersManual_Hologram");
		
		ABP_MinersManual_Hologram_C_ExecuteUbergraph_BP_MinersManual_Hologram_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MinersManual_Hologram_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MinersManual_Hologram_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MinersManual_Hologram.BP_MinersManual_Hologram_C");
		return ptr;
	}

}


