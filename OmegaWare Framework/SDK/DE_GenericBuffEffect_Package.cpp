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
	 * 		Name   -> Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_GenericBuffEffect_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStartEffect");
		
		UDE_GenericBuffEffect_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_GenericBuffEffect_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStopEffect");
		
		UDE_GenericBuffEffect_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.ExecuteUbergraph_DE_GenericBuffEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_GenericBuffEffect_C::ExecuteUbergraph_DE_GenericBuffEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.ExecuteUbergraph_DE_GenericBuffEffect");
		
		UDE_GenericBuffEffect_C_ExecuteUbergraph_DE_GenericBuffEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_GenericBuffEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_GenericBuffEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_GenericBuffEffect.DE_GenericBuffEffect_C");
		return ptr;
	}

}


