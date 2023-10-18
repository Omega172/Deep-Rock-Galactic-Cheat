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
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetEditorCharacterClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::GetEditorCharacterClass(class UPlayerCharacterID** CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetEditorCharacterClass");
		
		ABP_PlayerControllerBase_C_GetEditorCharacterClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterClass != nullptr)
			*CharacterClass = params.CharacterClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEscapeMenuEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerControllerBase_C::SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled");
		
		ABP_PlayerControllerBase_C_SetIsEscapeMenuEnabled_Params params {};
		params.IsEscapeMenuEnabled = IsEscapeMenuEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasShown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerControllerBase_C::SetHasShownCharacterSelector(bool HasShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector");
		
		ABP_PlayerControllerBase_C_SetHasShownCharacterSelector_Params params {};
		params.HasShown = HasShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      itemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerControllerBase_C::ItemFilter(class UClass* itemClass, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter");
		
		ABP_PlayerControllerBase_C_ItemFilter_Params params {};
		params.itemClass = itemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::SetClassAnalytics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics");
		
		ABP_PlayerControllerBase_C_SetClassAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Primary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UClass*>                              Secundary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PlayerControllerBase_C::SetUnlockAnalytics(TArray<class UClass*>* Primary, TArray<class UClass*>* Secundary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics");
		
		ABP_PlayerControllerBase_C_SetUnlockAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Primary != nullptr)
			*Primary = params.Primary;
		if (Secundary != nullptr)
			*Secundary = params.Secundary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              UnlockedItems                                              (Parm, OutParm)
	 */
	void ABP_PlayerControllerBase_C::GetUnlockedItems(EItemCategory Category, TArray<class UClass*>* UnlockedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems");
		
		ABP_PlayerControllerBase_C_GetUnlockedItems_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedItems != nullptr)
			*UnlockedItems = params.UnlockedItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::ReStartAnsel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel");
		
		ABP_PlayerControllerBase_C_ReStartAnsel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::StartAnsel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel");
		
		ABP_PlayerControllerBase_C_StartAnsel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::StopAnsel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel");
		
		ABP_PlayerControllerBase_C_StopAnsel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::CreateInviteRequestIfNotCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated");
		
		ABP_PlayerControllerBase_C_CreateInviteRequestIfNotCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3");
		
		ABP_PlayerControllerBase_C_InpActEvt_AcceptInvite_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::InpActEvt_RejectInvite_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2");
		
		ABP_PlayerControllerBase_C_InpActEvt_RejectInvite_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1");
		
		ABP_PlayerControllerBase_C_InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1");
		
		ABP_PlayerControllerBase_C_InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay");
		
		ABP_PlayerControllerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerControllerBase_C::SetPhotographyMode(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode");
		
		ABP_PlayerControllerBase_C_SetPhotographyMode_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::ReturnClientCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera");
		
		ABP_PlayerControllerBase_C_ReturnClientCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::SetupInviteHandling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling");
		
		ABP_PlayerControllerBase_C_SetupInviteHandling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::SetupRetirementNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification");
		
		ABP_PlayerControllerBase_C_SetupRetirementNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::OnCharacterCanRetire_Event(class UClass* CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event");
		
		ABP_PlayerControllerBase_C_OnCharacterCanRetire_Event_Params params {};
		params.CharacterClass = CharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::UpdateAnalytics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics");
		
		ABP_PlayerControllerBase_C_UpdateAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::AdjustCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera");
		
		ABP_PlayerControllerBase_C_AdjustCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::SetupChangeUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User");
		
		ABP_PlayerControllerBase_C_SetupChangeUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::ChangeUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser");
		
		ABP_PlayerControllerBase_C_ChangeUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerControllerBase_C::ChangeUserReply(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply");
		
		ABP_PlayerControllerBase_C_ChangeUserReply_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::ResetPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location");
		
		ABP_PlayerControllerBase_C_ResetPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CustomEvent_2");
		
		ABP_PlayerControllerBase_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SpawnHUDAsync
	 * 		Flags  -> ()
	 */
	void ABP_PlayerControllerBase_C::SpawnHUDAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SpawnHUDAsync");
		
		ABP_PlayerControllerBase_C_SpawnHUDAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnJoinRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDiscordUserDataSDK                         joinRequest                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PlayerControllerBase_C::OnJoinRequest(const struct FDiscordUserDataSDK& joinRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnJoinRequest");
		
		ABP_PlayerControllerBase_C_OnJoinRequest_Params params {};
		params.joinRequest = joinRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Reply                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::EventOnJoinRequestReply(int32_t Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply");
		
		ABP_PlayerControllerBase_C_EventOnJoinRequestReply_Params params {};
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::ExecuteUbergraph_BP_PlayerControllerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase");
		
		ABP_PlayerControllerBase_C_ExecuteUbergraph_BP_PlayerControllerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Reply                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerControllerBase_C::ReplyToInviteRequest__DelegateSignature(int32_t Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature");
		
		ABP_PlayerControllerBase_C_ReplyToInviteRequest__DelegateSignature_Params params {};
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerControllerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerControllerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C");
		return ptr;
	}

}


