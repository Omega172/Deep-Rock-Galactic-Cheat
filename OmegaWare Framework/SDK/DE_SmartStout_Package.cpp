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
	 * 		Name   -> Function DE_SmartStout.DE_SmartStout_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_SmartStout_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_SmartStout.DE_SmartStout_C.OnStartEffect");
		
		UDE_SmartStout_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_SmartStout_C::ExecuteUbergraph_DE_SmartStout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_SmartStout.DE_SmartStout_C.ExecuteUbergraph_DE_SmartStout");
		
		UDE_SmartStout_C_ExecuteUbergraph_DE_SmartStout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_SmartStout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_SmartStout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_SmartStout.DE_SmartStout_C");
		return ptr;
	}

}


