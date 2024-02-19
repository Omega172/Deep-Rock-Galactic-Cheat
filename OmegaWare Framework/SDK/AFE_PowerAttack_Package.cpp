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
	 * 		Name   -> Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAfflictionComponent*                    Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAFE_PowerAttack_C::ReceiveBeginEffect(class UPawnAfflictionComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect");
		
		UAFE_PowerAttack_C_ReceiveBeginEffect_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAfflictionComponent*                    Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAFE_PowerAttack_C::ReceiveEndEffect(class UPawnAfflictionComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect");
		
		UAFE_PowerAttack_C_ReceiveEndEffect_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAFE_PowerAttack_C::ExecuteUbergraph_AFE_PowerAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack");
		
		UAFE_PowerAttack_C_ExecuteUbergraph_AFE_PowerAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAFE_PowerAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_PowerAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_PowerAttack.AFE_PowerAttack_C");
		return ptr;
	}

}


