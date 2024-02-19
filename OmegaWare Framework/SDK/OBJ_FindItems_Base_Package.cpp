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
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UOBJ_FindItems_Base_C::IsObjectiveResource(class UResourceData* InResource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource");
		
		UOBJ_FindItems_Base_C_IsObjectiveResource_Params params {};
		params.InResource = InResource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_FindItems_Base_C::GetInMissionCounterIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon");
		
		UOBJ_FindItems_Base_C_GetInMissionCounterIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_FindItems_Base_C::GetInMissionCounterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText");
		
		UOBJ_FindItems_Base_C_GetInMissionCounterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UOBJ_FindItems_Base_C::GetObjectiveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon");
		
		UOBJ_FindItems_Base_C_GetObjectiveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UOBJ_FindItems_Base_C::GetObjectiveAmount(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount");
		
		UOBJ_FindItems_Base_C_GetObjectiveAmount_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText
	 * 		Flags  -> ()
	 */
	class FText UOBJ_FindItems_Base_C::GetInMissionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText");
		
		UOBJ_FindItems_Base_C_GetInMissionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              missionLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UOBJ_FindItems_Base_C::GetObjectiveDescription(float missionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription");
		
		UOBJ_FindItems_Base_C_GetObjectiveDescription_Params params {};
		params.missionLength = missionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOBJ_FindItems_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_FindItems_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C");
		return ptr;
	}

}


