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
	 * 		Name   -> Function AFE_FP_Stingtail.AFE_FP_Stingtail_C.ReceiveBeginEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAfflictionComponent*                    Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAFE_FP_Stingtail_C::ReceiveBeginEffect(class UPawnAfflictionComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AFE_FP_Stingtail.AFE_FP_Stingtail_C.ReceiveBeginEffect");
		
		UAFE_FP_Stingtail_C_ReceiveBeginEffect_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AFE_FP_Stingtail.AFE_FP_Stingtail_C.ExecuteUbergraph_AFE_FP_Stingtail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAFE_FP_Stingtail_C::ExecuteUbergraph_AFE_FP_Stingtail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AFE_FP_Stingtail.AFE_FP_Stingtail_C.ExecuteUbergraph_AFE_FP_Stingtail");
		
		UAFE_FP_Stingtail_C_ExecuteUbergraph_AFE_FP_Stingtail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAFE_FP_Stingtail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_FP_Stingtail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_FP_Stingtail.AFE_FP_Stingtail_C");
		return ptr;
	}

}


