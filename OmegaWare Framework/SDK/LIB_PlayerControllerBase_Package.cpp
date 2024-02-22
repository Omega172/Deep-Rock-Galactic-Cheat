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
	 * 		Name   -> Function LIB_PlayerControllerBase.LIB_PlayerControllerBase_C.GetPlayerControllerBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerControllerBase_C*                  Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_PlayerControllerBase_C::GetPlayerControllerBase(class UObject* __WorldContext, class ABP_PlayerControllerBase_C** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_PlayerControllerBase.LIB_PlayerControllerBase_C.GetPlayerControllerBase");
		
		ULIB_PlayerControllerBase_C_GetPlayerControllerBase_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_PlayerControllerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_PlayerControllerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_PlayerControllerBase.LIB_PlayerControllerBase_C");
		return ptr;
	}

}


