/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetMissionSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SR_PlayerControllerBase_C::GetMissionSelect(class UWindowWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetMissionSelect");
		
		ABP_SR_PlayerControllerBase_C_GetMissionSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetPopupCrafting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SR_PlayerControllerBase_C::GetPopupCrafting(class UWindowWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetPopupCrafting");
		
		ABP_SR_PlayerControllerBase_C_GetPopupCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetCrafting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SR_PlayerControllerBase_C::GetCrafting(class UWindowWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetCrafting");
		
		ABP_SR_PlayerControllerBase_C_GetCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ShowCharacterSelectionBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               resetToDefaultWeapon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECharselectionCameraLocation                       cameraLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SR_PlayerControllerBase_C::ShowCharacterSelectionBackground(bool resetToDefaultWeapon, ECharselectionCameraLocation cameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ShowCharacterSelectionBackground");
		
		ABP_SR_PlayerControllerBase_C_ShowCharacterSelectionBackground_Params params {};
		params.resetToDefaultWeapon = resetToDefaultWeapon;
		params.cameraLocation = cameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ShowForgeWorkshop
	 * 		Flags  -> ()
	 */
	void ABP_SR_PlayerControllerBase_C::ShowForgeWorkshop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ShowForgeWorkshop");
		
		ABP_SR_PlayerControllerBase_C_ShowForgeWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ExecuteUbergraph_BP_SR_PlayerControllerBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SR_PlayerControllerBase_C::ExecuteUbergraph_BP_SR_PlayerControllerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ExecuteUbergraph_BP_SR_PlayerControllerBase");
		
		ABP_SR_PlayerControllerBase_C_ExecuteUbergraph_BP_SR_PlayerControllerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SR_PlayerControllerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SR_PlayerControllerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C");
		return ptr;
	}

}


