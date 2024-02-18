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
	 * 		Name   -> Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.CountUp
	 * 		Flags  -> ()
	 */
	void UBasic_AnimatedNumber_C::CountUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.CountUp");
		
		UBasic_AnimatedNumber_C_CountUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_AnimatedNumber_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.PreConstruct");
		
		UBasic_AnimatedNumber_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.SetNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoCountAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayCountSound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_AnimatedNumber_C::SetNumber(float Number, bool DoCountAnim, bool PlayCountSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.SetNumber");
		
		UBasic_AnimatedNumber_C_SetNumber_Params params {};
		params.Number = Number;
		params.DoCountAnim = DoCountAnim;
		params.PlayCountSound = PlayCountSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.ExecuteUbergraph_Basic_AnimatedNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_AnimatedNumber_C::ExecuteUbergraph_Basic_AnimatedNumber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_AnimatedNumber.Basic_AnimatedNumber_C.ExecuteUbergraph_Basic_AnimatedNumber");
		
		UBasic_AnimatedNumber_C_ExecuteUbergraph_Basic_AnimatedNumber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_AnimatedNumber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_AnimatedNumber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_AnimatedNumber.Basic_AnimatedNumber_C");
		return ptr;
	}

}


