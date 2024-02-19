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
	 * 		Name   -> Function LIB_PerkColors.LIB_PerkColors_C.PerkColorFromType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkUsageType                                     InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_PerkColors_C::PerkColorFromType(EPerkUsageType InType, class UObject* __WorldContext, struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_PerkColors.LIB_PerkColors_C.PerkColorFromType");
		
		ULIB_PerkColors_C_PerkColorFromType_Params params {};
		params.InType = InType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_PerkColors.LIB_PerkColors_C.PerkColorByState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkUsageType                                     InPerkType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerkTierState                                     InPerkState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutBackground                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutBorder                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutIcon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_PerkColors_C::PerkColorByState(EPerkUsageType InPerkType, EPerkTierState InPerkState, class UObject* __WorldContext, struct FLinearColor* OutBackground, struct FLinearColor* OutBorder, struct FLinearColor* OutIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_PerkColors.LIB_PerkColors_C.PerkColorByState");
		
		ULIB_PerkColors_C_PerkColorByState_Params params {};
		params.InPerkType = InPerkType;
		params.InPerkState = InPerkState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBackground != nullptr)
			*OutBackground = params.OutBackground;
		if (OutBorder != nullptr)
			*OutBorder = params.OutBorder;
		if (OutIcon != nullptr)
			*OutIcon = params.OutIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_PerkColors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_PerkColors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_PerkColors.LIB_PerkColors_C");
		return ptr;
	}

}


