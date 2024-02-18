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
	 * 		Name   -> Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.OnSpawnRelease_Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_HandheldTablet_Off_C::OnSpawnRelease_Attached(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.OnSpawnRelease_Attached");
		
		ABP_HandheldTablet_Off_C_OnSpawnRelease_Attached_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.OnSpawnRelease_Released
	 * 		Flags  -> ()
	 */
	bool ABP_HandheldTablet_Off_C::OnSpawnRelease_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.OnSpawnRelease_Released");
		
		ABP_HandheldTablet_Off_C_OnSpawnRelease_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldTablet_Off_C::SetBackgroundColor(const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.SetBackgroundColor");
		
		ABP_HandheldTablet_Off_C_SetBackgroundColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_HandheldTablet_Off_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HandheldTablet_Off.BP_HandheldTablet_Off_C.UserConstructionScript");
		
		ABP_HandheldTablet_Off_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HandheldTablet_Off_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HandheldTablet_Off_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HandheldTablet_Off.BP_HandheldTablet_Off_C");
		return ptr;
	}

}


