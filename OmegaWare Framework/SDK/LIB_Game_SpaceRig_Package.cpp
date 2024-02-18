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
	 * 		Name   -> Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.RefreshSpacerigUpgradePreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_SpaceRig_C::RefreshSpacerigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.RefreshSpacerigUpgradePreview");
		
		ULIB_Game_SpaceRig_C_RefreshSpacerigUpgradePreview_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSpaceRigUpgradePreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemUpgrade*                                PreviewUpgrade                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_SpaceRig_C::GetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext, class UItemUpgrade** PreviewUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSpaceRigUpgradePreview");
		
		ULIB_Game_SpaceRig_C_GetSpaceRigUpgradePreview_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PreviewUpgrade != nullptr)
			*PreviewUpgrade = params.PreviewUpgrade;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.SetSpaceRigUpgradePreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemUpgrade*                                ItemUpgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_SpaceRig_C::SetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UItemUpgrade* ItemUpgrade, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.SetSpaceRigUpgradePreview");
		
		ULIB_Game_SpaceRig_C_SetSpaceRigUpgradePreview_Params params {};
		params.PlayerController = PlayerController;
		params.ItemUpgrade = ItemUpgrade;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameState_SpaceRig_C*                    GameState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_SpaceRig_C::GetSRGameState(class UObject* __WorldContext, class ABP_GameState_SpaceRig_C** GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameState");
		
		ULIB_Game_SpaceRig_C_GetSRGameState_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameState != nullptr)
			*GameState = params.GameState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_SR_PlayerControllerBase_C*               SRController                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULIB_Game_SpaceRig_C::GetSRController(class UObject* __WorldContext, class ABP_SR_PlayerControllerBase_C** SRController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRController");
		
		ULIB_Game_SpaceRig_C_GetSRController_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SRController != nullptr)
			*SRController = params.SRController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_Game_SpaceRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_Game_SpaceRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Game_SpaceRig.LIB_Game_SpaceRig_C");
		return ptr;
	}

}


