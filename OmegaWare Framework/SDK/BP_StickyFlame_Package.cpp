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
	 * 		Name   -> Function BP_StickyFlame.BP_StickyFlame_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_StickyFlame_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StickyFlame.BP_StickyFlame_C.ReceiveBeginPlay");
		
		ABP_StickyFlame_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StickyFlame.BP_StickyFlame_C.ExecuteUbergraph_BP_StickyFlame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StickyFlame_C::ExecuteUbergraph_BP_StickyFlame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StickyFlame.BP_StickyFlame_C.ExecuteUbergraph_BP_StickyFlame");
		
		ABP_StickyFlame_C_ExecuteUbergraph_BP_StickyFlame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StickyFlame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StickyFlame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StickyFlame.BP_StickyFlame_C");
		return ptr;
	}

}


