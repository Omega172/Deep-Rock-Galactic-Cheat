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
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionCounterIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_2nd_KillFleas_C::GetInMissionCounterIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionCounterIcon");
		
		UOBJ_2nd_KillFleas_C_GetInMissionCounterIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionCounterText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_2nd_KillFleas_C::GetInMissionCounterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionCounterText");
		
		UOBJ_2nd_KillFleas_C_GetInMissionCounterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetMissionIcon
	 * 		Flags  -> ()
	 */
	struct FObjectiveMissionIcon UOBJ_2nd_KillFleas_C::GetMissionIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetMissionIcon");
		
		UOBJ_2nd_KillFleas_C_GetMissionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_2nd_KillFleas_C::GetObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveIcon");
		
		UOBJ_2nd_KillFleas_C_GetObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UOBJ_2nd_KillFleas_C::GetObjectiveAmount(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveAmount");
		
		UOBJ_2nd_KillFleas_C_GetObjectiveAmount_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_2nd_KillFleas_C::GetInMissionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetInMissionText");
		
		UOBJ_2nd_KillFleas_C_GetInMissionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UOBJ_2nd_KillFleas_C::GetObjectiveDescription(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C.GetObjectiveDescription");
		
		UOBJ_2nd_KillFleas_C_GetObjectiveDescription_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_2nd_KillFleas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_2nd_KillFleas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C");
		return ptr;
	}

}


