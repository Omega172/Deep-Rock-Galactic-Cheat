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
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ShowNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseSpaceRigConsole_C::ShowNotification(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ShowNotification");
		
		ABP_BaseSpaceRigConsole_C_ShowNotification_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.SetCreateMenuOnStartUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCreateOnStartUp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseSpaceRigConsole_C::SetCreateMenuOnStartUp(bool InCreateOnStartUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.SetCreateMenuOnStartUp");
		
		ABP_BaseSpaceRigConsole_C_SetCreateMenuOnStartUp_Params params {};
		params.InCreateOnStartUp = InCreateOnStartUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.IsNewPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerController_SpaceRig_C*             PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNewPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseSpaceRigConsole_C::IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool* IsNewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.IsNewPlayer");
		
		ABP_BaseSpaceRigConsole_C_IsNewPlayer_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNewPlayer != nullptr)
			*IsNewPlayer = params.IsNewPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_BaseSpaceRigConsole_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.UserConstructionScript");
		
		ABP_BaseSpaceRigConsole_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnOpenConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerController_SpaceRig_C*             InPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSpaceRigConsole_C::OnOpenConsole(class ABP_PlayerController_SpaceRig_C* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnOpenConsole");
		
		ABP_BaseSpaceRigConsole_C_OnOpenConsole_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnWindowCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               WindowWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSpaceRigConsole_C::OnWindowCreated(class UWindowWidget* WindowWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnWindowCreated");
		
		ABP_BaseSpaceRigConsole_C_OnWindowCreated_Params params {};
		params.WindowWidget = WindowWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.PIE_QuickUse
	 * 		Flags  -> ()
	 */
	void ABP_BaseSpaceRigConsole_C::PIE_QuickUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.PIE_QuickUse");
		
		ABP_BaseSpaceRigConsole_C_PIE_QuickUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSpaceRigConsole_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		ABP_BaseSpaceRigConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BaseSpaceRigConsole_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ReceiveBeginPlay");
		
		ABP_BaseSpaceRigConsole_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ExecuteUbergraph_BP_BaseSpaceRigConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSpaceRigConsole_C::ExecuteUbergraph_BP_BaseSpaceRigConsole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ExecuteUbergraph_BP_BaseSpaceRigConsole");
		
		ABP_BaseSpaceRigConsole_C_ExecuteUbergraph_BP_BaseSpaceRigConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BaseSpaceRigConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BaseSpaceRigConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C");
		return ptr;
	}

}


