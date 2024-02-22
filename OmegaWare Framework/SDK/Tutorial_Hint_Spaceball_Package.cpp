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
	 * 		Name   -> Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ReceiveOnHidden
	 * 		Flags  -> ()
	 */
	void UTutorial_Hint_Spaceball_C::ReceiveOnHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ReceiveOnHidden");
		
		UTutorial_Hint_Spaceball_C_ReceiveOnHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ReceiveOnInitialized
	 * 		Flags  -> ()
	 */
	void UTutorial_Hint_Spaceball_C::ReceiveOnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ReceiveOnInitialized");
		
		UTutorial_Hint_Spaceball_C_ReceiveOnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.OnUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUsableComponentBase*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorial_Hint_Spaceball_C::OnUse(class UUsableComponentBase* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.OnUse");
		
		UTutorial_Hint_Spaceball_C_OnUse_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ExecuteUbergraph_Tutorial_Hint_Spaceball
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorial_Hint_Spaceball_C::ExecuteUbergraph_Tutorial_Hint_Spaceball(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ExecuteUbergraph_Tutorial_Hint_Spaceball");
		
		UTutorial_Hint_Spaceball_C_ExecuteUbergraph_Tutorial_Hint_Spaceball_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorial_Hint_Spaceball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial_Hint_Spaceball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C");
		return ptr;
	}

}


