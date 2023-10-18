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
	 * 		Name   -> Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Coilgun_HellfireSegment_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.ReceiveBeginPlay");
		
		ABP_Coilgun_HellfireSegment_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.OnEndEffects
	 * 		Flags  -> ()
	 */
	void ABP_Coilgun_HellfireSegment_C::OnEndEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.OnEndEffects");
		
		ABP_Coilgun_HellfireSegment_C_OnEndEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.OnStartEffects
	 * 		Flags  -> ()
	 */
	void ABP_Coilgun_HellfireSegment_C::OnStartEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.OnStartEffects");
		
		ABP_Coilgun_HellfireSegment_C_OnStartEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.ExecuteUbergraph_BP_Coilgun_HellfireSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Coilgun_HellfireSegment_C::ExecuteUbergraph_BP_Coilgun_HellfireSegment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C.ExecuteUbergraph_BP_Coilgun_HellfireSegment");
		
		ABP_Coilgun_HellfireSegment_C_ExecuteUbergraph_BP_Coilgun_HellfireSegment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Coilgun_HellfireSegment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Coilgun_HellfireSegment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Coilgun_HellfireSegment.BP_Coilgun_HellfireSegment_C");
		return ptr;
	}

}


