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
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_Elimination_Base_C::GetInMissionCounterIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon");
		
		UOBJ_Elimination_Base_C_GetInMissionCounterIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_Elimination_Base_C::GetInMissionCounterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText");
		
		UOBJ_Elimination_Base_C_GetInMissionCounterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_Elimination_Base_C::GetObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon");
		
		UOBJ_Elimination_Base_C_GetObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UOBJ_Elimination_Base_C::GetObjectiveAmount(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount");
		
		UOBJ_Elimination_Base_C_GetObjectiveAmount_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_Elimination_Base_C::GetInMissionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText");
		
		UOBJ_Elimination_Base_C_GetInMissionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UOBJ_Elimination_Base_C::GetObjectiveDescription(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription");
		
		UOBJ_Elimination_Base_C_GetObjectiveDescription_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled
	 * 		Flags  -> ()
	 */
	void UOBJ_Elimination_Base_C::ReceiveTargetKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled");
		
		UOBJ_Elimination_Base_C_ReceiveTargetKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetSpawned
	 * 		Flags  -> ()
	 */
	void UOBJ_Elimination_Base_C::ReceiveTargetSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetSpawned");
		
		UOBJ_Elimination_Base_C_ReceiveTargetSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOBJ_Elimination_Base_C::ExecuteUbergraph_OBJ_Elimination_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base");
		
		UOBJ_Elimination_Base_C_ExecuteUbergraph_OBJ_Elimination_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_Elimination_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_Elimination_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C");
		return ptr;
	}

}


