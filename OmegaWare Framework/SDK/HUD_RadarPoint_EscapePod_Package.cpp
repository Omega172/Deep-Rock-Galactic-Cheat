﻿/**
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
	 * 		Name   -> Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.InitPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URadarPointComponent*                        RadarComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_RadarPoint_EscapePod_C::InitPoint(class URadarPointComponent* RadarComponent, bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.InitPoint");
		
		UHUD_RadarPoint_EscapePod_C_InitPoint_Params params {};
		params.RadarComponent = RadarComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.Get3dPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_RadarPoint_EscapePod_C::Get3dPosition(struct FVector* Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.Get3dPosition");
		
		UHUD_RadarPoint_EscapePod_C_Get3dPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pos != nullptr)
			*Pos = params.Pos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.UpdatePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              verticalDist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               destroy                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_RadarPoint_EscapePod_C::UpdatePoint(float alpha, float verticalDist, bool* destroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C.UpdatePoint");
		
		UHUD_RadarPoint_EscapePod_C_UpdatePoint_Params params {};
		params.alpha = alpha;
		params.verticalDist = verticalDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (destroy != nullptr)
			*destroy = params.destroy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_RadarPoint_EscapePod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_RadarPoint_EscapePod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C");
		return ptr;
	}

}


