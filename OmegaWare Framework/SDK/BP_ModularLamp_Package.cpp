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
	 * 		Name   -> Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_ModularLamps                                  Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSTRUCT_Lamp ABP_ModularLamp_C::GetMeshStructByEnum(ENUM_ModularLamps Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum");
		
		ABP_ModularLamp_C_GetMeshStructByEnum_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LightColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularLamp_C::SetLightColor(const struct FLinearColor& LightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor");
		
		ABP_ModularLamp_C_SetLightColor_Params params {};
		params.LightColor = LightColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ModularLamp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript");
		
		ABP_ModularLamp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ModularLamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ModularLamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularLamp.BP_ModularLamp_C");
		return ptr;
	}

}


