/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_SeasonedMoonrider_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStartEffect");
		
		UDE_SeasonedMoonrider_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_SeasonedMoonrider_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.OnStopEffect");
		
		UDE_SeasonedMoonrider_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.ExecuteUbergraph_DE_SeasonedMoonrider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_SeasonedMoonrider_C::ExecuteUbergraph_DE_SeasonedMoonrider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_SeasonedMoonrider.DE_SeasonedMoonrider_C.ExecuteUbergraph_DE_SeasonedMoonrider");
		
		UDE_SeasonedMoonrider_C_ExecuteUbergraph_DE_SeasonedMoonrider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_SeasonedMoonrider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_SeasonedMoonrider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_SeasonedMoonrider.DE_SeasonedMoonrider_C");
		return ptr;
	}

}


