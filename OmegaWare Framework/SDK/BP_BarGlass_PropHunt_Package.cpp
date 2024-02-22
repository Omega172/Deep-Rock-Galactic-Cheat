/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.Refresh
	 * 		Flags  -> ()
	 */
	void ABP_BarGlass_PropHunt_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.Refresh");
		
		ABP_BarGlass_PropHunt_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BarGlass_PropHunt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.ReceiveBeginPlay");
		
		ABP_BarGlass_PropHunt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.OnRep_BarSlotIndex
	 * 		Flags  -> ()
	 */
	void ABP_BarGlass_PropHunt_C::OnRep_BarSlotIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.OnRep_BarSlotIndex");
		
		ABP_BarGlass_PropHunt_C_OnRep_BarSlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.ExecuteUbergraph_BP_BarGlass_PropHunt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BarGlass_PropHunt_C::ExecuteUbergraph_BP_BarGlass_PropHunt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C.ExecuteUbergraph_BP_BarGlass_PropHunt");
		
		ABP_BarGlass_PropHunt_C_ExecuteUbergraph_BP_BarGlass_PropHunt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BarGlass_PropHunt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BarGlass_PropHunt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BarGlass_PropHunt.BP_BarGlass_PropHunt_C");
		return ptr;
	}

}


