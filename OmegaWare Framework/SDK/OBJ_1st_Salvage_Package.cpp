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
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_1st_Salvage_C::GetInMissionCounterIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon");
		
		UOBJ_1st_Salvage_C_GetInMissionCounterIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_1st_Salvage_C::GetInMissionCounterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText");
		
		UOBJ_1st_Salvage_C_GetInMissionCounterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UOBJ_1st_Salvage_C::GetObjectiveAmount(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount");
		
		UOBJ_1st_Salvage_C_GetObjectiveAmount_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_1st_Salvage_C::GetInMissionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText");
		
		UOBJ_1st_Salvage_C_GetInMissionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UOBJ_1st_Salvage_C::GetObjectiveDescription(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription");
		
		UOBJ_1st_Salvage_C_GetObjectiveDescription_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_1st_Salvage_C::GetObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon");
		
		UOBJ_1st_Salvage_C_GetObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged
	 * 		Flags  -> ()
	 */
	void UOBJ_1st_Salvage_C::AllActorsSalvaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged");
		
		UOBJ_1st_Salvage_C_AllActorsSalvaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOBJ_1st_Salvage_C::ExecuteUbergraph_OBJ_1st_Salvage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage");
		
		UOBJ_1st_Salvage_C_ExecuteUbergraph_OBJ_1st_Salvage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.OnAllActorsSalvaged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOBJ_1st_Salvage_C::OnAllActorsSalvaged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.OnAllActorsSalvaged__DelegateSignature");
		
		UOBJ_1st_Salvage_C_OnAllActorsSalvaged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_1st_Salvage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_1st_Salvage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C");
		return ptr;
	}

}


