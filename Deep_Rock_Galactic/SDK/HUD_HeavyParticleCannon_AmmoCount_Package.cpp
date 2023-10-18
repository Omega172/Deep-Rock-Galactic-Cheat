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
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.ReceiveItemSet
	 * 		Flags  -> ()
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_C::ReceiveItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.ReceiveItemSet");
		
		UHUD_HeavyParticleCannon_AmmoCount_C_ReceiveItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReloadDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_C::SetData(int32_t ClipSize, float ReloadDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.SetData");
		
		UHUD_HeavyParticleCannon_AmmoCount_C_SetData_Params params {};
		params.ClipSize = ClipSize;
		params.ReloadDuration = ReloadDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_C::ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount");
		
		UHUD_HeavyParticleCannon_AmmoCount_C_ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_HeavyParticleCannon_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_HeavyParticleCannon_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C");
		return ptr;
	}

}


