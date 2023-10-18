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
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Names1                                                     (Parm, OutParm)
	 */
	void UUI_TeamDisplay_C::GetParents(TArray<class FString>* Names1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents");
		
		UUI_TeamDisplay_C_GetParents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names1 != nullptr)
			*Names1 = params.Names1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AFSDPlayerState*>                     OutTeamMembers                                             (Parm, OutParm)
	 */
	void UUI_TeamDisplay_C::GetTeam(TArray<class AFSDPlayerState*>* OutTeamMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam");
		
		UUI_TeamDisplay_C_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTeamMembers != nullptr)
			*OutTeamMembers = params.OutTeamMembers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
	 * 		Flags  -> ()
	 */
	void UUI_TeamDisplay_C::UpdateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons");
		
		UUI_TeamDisplay_C_UpdateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_TeamDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.Construct");
		
		UUI_TeamDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
	 * 		Flags  -> ()
	 */
	void UUI_TeamDisplay_C::OnFirstWindowOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened");
		
		UUI_TeamDisplay_C_OnFirstWindowOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
	 * 		Flags  -> ()
	 */
	void UUI_TeamDisplay_C::OnLastWindowClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed");
		
		UUI_TeamDisplay_C_OnLastWindowClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
	 * 		Flags  -> ()
	 */
	void UUI_TeamDisplay_C::SetupInviteFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends");
		
		UUI_TeamDisplay_C_SetupInviteFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TeamDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct");
		
		UUI_TeamDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
	 * 		Flags  -> ()
	 */
	void UUI_TeamDisplay_C::UpdateFriendInviteVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility");
		
		UUI_TeamDisplay_C_UpdateFriendInviteVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TeamDisplay_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event");
		
		UUI_TeamDisplay_C_OnPlayerJoined_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TeamDisplay_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event");
		
		UUI_TeamDisplay_C_OnPlayerLeave_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.OnSessionLeaderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TeamDisplay_C::OnSessionLeaderChanged(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnSessionLeaderChanged");
		
		UUI_TeamDisplay_C_OnSessionLeaderChanged_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TeamDisplay_C::ExecuteUbergraph_UI_TeamDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay");
		
		UUI_TeamDisplay_C_ExecuteUbergraph_UI_TeamDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TeamDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TeamDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TeamDisplay.UI_TeamDisplay_C");
		return ptr;
	}

}


