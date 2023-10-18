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
	 * 		Name   -> Function AIC_MiniMule.AIC_MiniMule_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAIC_MiniMule_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.ReceiveBeginPlay");
		
		AAIC_MiniMule_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_MiniMule.AIC_MiniMule_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void AAIC_MiniMule_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.CustomEvent_1");
		
		AAIC_MiniMule_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_MiniMule.AIC_MiniMule_C.ExecuteUbergraph_AIC_MiniMule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_MiniMule_C::ExecuteUbergraph_AIC_MiniMule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.ExecuteUbergraph_AIC_MiniMule");
		
		AAIC_MiniMule_C_ExecuteUbergraph_AIC_MiniMule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_MiniMule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_MiniMule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIC_MiniMule.AIC_MiniMule_C");
		return ptr;
	}

}


