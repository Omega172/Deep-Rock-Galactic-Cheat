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
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetInMissionCounterIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_DD_Defense_C::GetInMissionCounterIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetInMissionCounterIcon");
		
		UOBJ_DD_Defense_C_GetInMissionCounterIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetInMissionCounterText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_DD_Defense_C::GetInMissionCounterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetInMissionCounterText");
		
		UOBJ_DD_Defense_C_GetInMissionCounterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetMissionIcon
	 * 		Flags  -> ()
	 */
	struct FObjectiveMissionIcon UOBJ_DD_Defense_C::GetMissionIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetMissionIcon");
		
		UOBJ_DD_Defense_C_GetMissionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetObjectiveIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_DD_Defense_C::GetObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetObjectiveIcon");
		
		UOBJ_DD_Defense_C_GetObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetObjectiveAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UOBJ_DD_Defense_C::GetObjectiveAmount(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetObjectiveAmount");
		
		UOBJ_DD_Defense_C_GetObjectiveAmount_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetInMissionText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_DD_Defense_C::GetInMissionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetInMissionText");
		
		UOBJ_DD_Defense_C_GetInMissionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetObjectiveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UOBJ_DD_Defense_C::GetObjectiveDescription(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_Defense.OBJ_DD_Defense_C.GetObjectiveDescription");
		
		UOBJ_DD_Defense_C_GetObjectiveDescription_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_DD_Defense_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_DD_Defense_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_DD_Defense.OBJ_DD_Defense_C");
		return ptr;
	}

}


