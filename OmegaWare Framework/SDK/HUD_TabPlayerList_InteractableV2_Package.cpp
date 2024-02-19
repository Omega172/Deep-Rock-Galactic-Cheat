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
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AFSDPlayerState*>                     OutPlayers                                                 (Parm, OutParm)
	 */
	void UHUD_TabPlayerList_InteractableV2_C::FindPlayerList(TArray<class AFSDPlayerState*>* OutPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList");
		
		UHUD_TabPlayerList_InteractableV2_C_FindPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayers != nullptr)
			*OutPlayers = params.OutPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnFailure_BB3F54234323B8FC909E35A9D25E3656
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::OnFailure_BB3F54234323B8FC909E35A9D25E3656()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnFailure_BB3F54234323B8FC909E35A9D25E3656");
		
		UHUD_TabPlayerList_InteractableV2_C_OnFailure_BB3F54234323B8FC909E35A9D25E3656_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnSuccess_BB3F54234323B8FC909E35A9D25E3656
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::OnSuccess_BB3F54234323B8FC909E35A9D25E3656()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnSuccess_BB3F54234323B8FC909E35A9D25E3656");
		
		UHUD_TabPlayerList_InteractableV2_C_OnSuccess_BB3F54234323B8FC909E35A9D25E3656_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct");
		
		UHUD_TabPlayerList_InteractableV2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerList_InteractableV2_C::AddPlayer(class AFSDPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer");
		
		UHUD_TabPlayerList_InteractableV2_C_AddPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update");
		
		UHUD_TabPlayerList_InteractableV2_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerList_InteractableV2_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event");
		
		UHUD_TabPlayerList_InteractableV2_C_OnPlayerJoined_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerList_InteractableV2_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event");
		
		UHUD_TabPlayerList_InteractableV2_C_OnPlayerLeave_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::InviteFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends");
		
		UHUD_TabPlayerList_InteractableV2_C_InviteFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TabPlayerList_InteractableV2_C::BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_TabPlayerList_InteractableV2_C_BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TabPlayerList_InteractableV2_C::ExecuteUbergraph_HUD_TabPlayerList_InteractableV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2");
		
		UHUD_TabPlayerList_InteractableV2_C_ExecuteUbergraph_HUD_TabPlayerList_InteractableV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_TabPlayerList_InteractableV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_TabPlayerList_InteractableV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C");
		return ptr;
	}

}


