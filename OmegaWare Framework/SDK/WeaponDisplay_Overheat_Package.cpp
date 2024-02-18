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
	 * 		Name   -> Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.SetHeatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeatPercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_Overheat_C::SetHeatValue(float HeatPercentage, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.SetHeatValue");
		
		UWeaponDisplay_Overheat_C_SetHeatValue_Params params {};
		params.HeatPercentage = HeatPercentage;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Overheat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.Construct");
		
		UWeaponDisplay_Overheat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.ExecuteUbergraph_WeaponDisplay_Overheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Overheat_C::ExecuteUbergraph_WeaponDisplay_Overheat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Overheat.WeaponDisplay_Overheat_C.ExecuteUbergraph_WeaponDisplay_Overheat");
		
		UWeaponDisplay_Overheat_C_ExecuteUbergraph_WeaponDisplay_Overheat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Overheat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Overheat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Overheat.WeaponDisplay_Overheat_C");
		return ptr;
	}

}


