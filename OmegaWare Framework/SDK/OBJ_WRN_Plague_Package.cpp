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
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.OnRep_CurrPlagueCount
	 * 		Flags  -> ()
	 */
	void UOBJ_WRN_Plague_C::OnRep_CurrPlagueCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.OnRep_CurrPlagueCount");
		
		UOBJ_WRN_Plague_C_OnRep_CurrPlagueCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionCounterIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_WRN_Plague_C::GetInMissionCounterIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionCounterIcon");
		
		UOBJ_WRN_Plague_C_GetInMissionCounterIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionCounterText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_WRN_Plague_C::GetInMissionCounterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionCounterText");
		
		UOBJ_WRN_Plague_C_GetInMissionCounterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetObjectiveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UOBJ_WRN_Plague_C::GetObjectiveDescription(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetObjectiveDescription");
		
		UOBJ_WRN_Plague_C_GetObjectiveDescription_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_WRN_Plague_C::GetInMissionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetInMissionText");
		
		UOBJ_WRN_Plague_C_GetInMissionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetObjectiveIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_WRN_Plague_C::GetObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.GetObjectiveIcon");
		
		UOBJ_WRN_Plague_C_GetObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UOBJ_WRN_Plague_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.ReceiveBeginPlay");
		
		UOBJ_WRN_Plague_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.ExecuteUbergraph_OBJ_WRN_Plague
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOBJ_WRN_Plague_C::ExecuteUbergraph_OBJ_WRN_Plague(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_WRN_Plague.OBJ_WRN_Plague_C.ExecuteUbergraph_OBJ_WRN_Plague");
		
		UOBJ_WRN_Plague_C_ExecuteUbergraph_OBJ_WRN_Plague_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_WRN_Plague_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_WRN_Plague_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_WRN_Plague.OBJ_WRN_Plague_C");
		return ptr;
	}

}


