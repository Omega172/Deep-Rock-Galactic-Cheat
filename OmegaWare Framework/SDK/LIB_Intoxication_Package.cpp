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
	 * 		Name   -> Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDrinkableAlcoholStrength                          Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Intoxication_C::GetAlcoholStrengthPct(EDrinkableAlcoholStrength Strength, class APlayerCharacter* Character, class UObject* __WorldContext, int32_t* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct");
		
		ULIB_Intoxication_C_GetAlcoholStrengthPct_Params params {};
		params.Strength = Strength;
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDrinkableAlcoholStrength                          Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UpperCase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void ULIB_Intoxication_C::GetAlcoholStrengthName(EDrinkableAlcoholStrength Strength, bool UpperCase, class UObject* __WorldContext, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName");
		
		ULIB_Intoxication_C_GetAlcoholStrengthName_Params params {};
		params.Strength = Strength;
		params.UpperCase = UpperCase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_Intoxication_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_Intoxication_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Intoxication.LIB_Intoxication_C");
		return ptr;
	}

}


