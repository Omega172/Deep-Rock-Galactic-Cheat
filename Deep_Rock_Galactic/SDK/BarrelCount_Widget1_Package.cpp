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
	 * 		Name   -> Function BarrelCount_Widget1.BarrelCount_Widget1_C.SetScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBarrelCount_Widget1_C::SetScore(int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BarrelCount_Widget1.BarrelCount_Widget1_C.SetScore");
		
		UBarrelCount_Widget1_C_SetScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BarrelCount_Widget1.BarrelCount_Widget1_C.ExecuteUbergraph_BarrelCount_Widget1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBarrelCount_Widget1_C::ExecuteUbergraph_BarrelCount_Widget1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BarrelCount_Widget1.BarrelCount_Widget1_C.ExecuteUbergraph_BarrelCount_Widget1");
		
		UBarrelCount_Widget1_C_ExecuteUbergraph_BarrelCount_Widget1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelCount_Widget1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelCount_Widget1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BarrelCount_Widget1.BarrelCount_Widget1_C");
		return ptr;
	}

}


