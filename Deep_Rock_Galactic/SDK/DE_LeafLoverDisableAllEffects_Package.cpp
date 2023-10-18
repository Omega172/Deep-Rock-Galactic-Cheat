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
	 * 		Name   -> Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_LeafLoverDisableAllEffects_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.OnStartEffect");
		
		UDE_LeafLoverDisableAllEffects_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.ExecuteUbergraph_DE_LeafLoverDisableAllEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_LeafLoverDisableAllEffects_C::ExecuteUbergraph_DE_LeafLoverDisableAllEffects(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.ExecuteUbergraph_DE_LeafLoverDisableAllEffects");
		
		UDE_LeafLoverDisableAllEffects_C_ExecuteUbergraph_DE_LeafLoverDisableAllEffects_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_LeafLoverDisableAllEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_LeafLoverDisableAllEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C");
		return ptr;
	}

}


