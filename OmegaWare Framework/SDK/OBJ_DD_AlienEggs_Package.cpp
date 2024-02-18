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
	 * 		Name   -> Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.GetMissionIcon
	 * 		Flags  -> ()
	 */
	struct FObjectiveMissionIcon UOBJ_DD_AlienEggs_C::GetMissionIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.GetMissionIcon");
		
		UOBJ_DD_AlienEggs_C_GetMissionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.GetNumberOfSpeicalEggs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOBJ_DD_AlienEggs_C::GetNumberOfSpeicalEggs(TArray<class AActor*> TargetArray, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.GetNumberOfSpeicalEggs");
		
		UOBJ_DD_AlienEggs_C_GetNumberOfSpeicalEggs_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.TurnOnSpecialEggs
	 * 		Flags  -> ()
	 */
	void UOBJ_DD_AlienEggs_C::TurnOnSpecialEggs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.TurnOnSpecialEggs");
		
		UOBJ_DD_AlienEggs_C_TurnOnSpecialEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.Receive_StartTracking
	 * 		Flags  -> ()
	 */
	void UOBJ_DD_AlienEggs_C::Receive_StartTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.Receive_StartTracking");
		
		UOBJ_DD_AlienEggs_C_Receive_StartTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.ExecuteUbergraph_OBJ_DD_AlienEggs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOBJ_DD_AlienEggs_C::ExecuteUbergraph_OBJ_DD_AlienEggs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.ExecuteUbergraph_OBJ_DD_AlienEggs");
		
		UOBJ_DD_AlienEggs_C_ExecuteUbergraph_OBJ_DD_AlienEggs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_DD_AlienEggs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_DD_AlienEggs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C");
		return ptr;
	}

}


