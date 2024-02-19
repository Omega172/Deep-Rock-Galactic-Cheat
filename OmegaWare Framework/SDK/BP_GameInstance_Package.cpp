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
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ResetTempSessions
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::ResetTempSessions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ResetTempSessions");
		
		UBP_GameInstance_C_ResetTempSessions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.CreateAndOpenModdedWidget
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::CreateAndOpenModdedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.CreateAndOpenModdedWidget");
		
		UBP_GameInstance_C_CreateAndOpenModdedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.SetModdedSession
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::SetModdedSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetModdedSession");
		
		UBP_GameInstance_C_SetModdedSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.SetupJoinVanillaDisableProgressionMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GameInstance_C::SetupJoinVanillaDisableProgressionMods(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetupJoinVanillaDisableProgressionMods");
		
		UBP_GameInstance_C_SetupJoinVanillaDisableProgressionMods_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.PromptSandboxUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GameInstance_C::PromptSandboxUser(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.PromptSandboxUser");
		
		UBP_GameInstance_C_PromptSandboxUser_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ShouldPromptSandboxUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameInstance_C::ShouldPromptSandboxUser(const struct FBlueprintSessionResult& Session, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ShouldPromptSandboxUser");
		
		UBP_GameInstance_C_ShouldPromptSandboxUser_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.SetupJoinModded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GameInstance_C::SetupJoinModded(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetupJoinModded");
		
		UBP_GameInstance_C_SetupJoinModded_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.Setup Join with Password
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GameInstance_C::SetupJoinwithPassword(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.Setup Join with Password");
		
		UBP_GameInstance_C_SetupJoinwithPassword_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EligibleForRetirementAssignment                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameInstance_C::IsEligibleForRetirementAassignment(bool* EligibleForRetirementAssignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment");
		
		UBP_GameInstance_C_IsEligibleForRetirementAassignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EligibleForRetirementAssignment != nullptr)
			*EligibleForRetirementAssignment = params.EligibleForRetirementAssignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A0D72085C
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnFailure_7B3ECFCE46627790F0C9B89A0D72085C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A0D72085C");
		
		UBP_GameInstance_C_OnFailure_7B3ECFCE46627790F0C9B89A0D72085C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C");
		
		UBP_GameInstance_C_OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A6B449207
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnFailure_7B3ECFCE46627790F0C9B89A6B449207()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A6B449207");
		
		UBP_GameInstance_C_OnFailure_7B3ECFCE46627790F0C9B89A6B449207_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A6B449207
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSuccess_7B3ECFCE46627790F0C9B89A6B449207()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A6B449207");
		
		UBP_GameInstance_C_OnSuccess_7B3ECFCE46627790F0C9B89A6B449207_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A89B12120
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnFailure_7B3ECFCE46627790F0C9B89A89B12120()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A89B12120");
		
		UBP_GameInstance_C_OnFailure_7B3ECFCE46627790F0C9B89A89B12120_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A89B12120
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSuccess_7B3ECFCE46627790F0C9B89A89B12120()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A89B12120");
		
		UBP_GameInstance_C_OnSuccess_7B3ECFCE46627790F0C9B89A89B12120_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnFailure_D72617F2470A6492F0633884F8A94A97()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97");
		
		UBP_GameInstance_C_OnFailure_D72617F2470A6492F0633884F8A94A97_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSuccess_D72617F2470A6492F0633884F8A94A97()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97");
		
		UBP_GameInstance_C_OnSuccess_D72617F2470A6492F0633884F8A94A97_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnFailure_E6A52403462766A65D96D581DEE58F2A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A");
		
		UBP_GameInstance_C_OnFailure_E6A52403462766A65D96D581DEE58F2A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSuccess_E6A52403462766A65D96D581DEE58F2A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A");
		
		UBP_GameInstance_C_OnSuccess_E6A52403462766A65D96D581DEE58F2A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB");
		
		UBP_GameInstance_C_OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB");
		
		UBP_GameInstance_C_OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveInit");
		
		UBP_GameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_GameInstance_C::JoinFriendInvite(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite");
		
		UBP_GameInstance_C_JoinFriendInvite_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::OnLoadComplete(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete");
		
		UBP_GameInstance_C_OnLoadComplete_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.SetEligableForRetirementAssignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               eligable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameInstance_C::SetEligableForRetirementAssignment(bool eligable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetEligableForRetirementAssignment");
		
		UBP_GameInstance_C_SetEligableForRetirementAssignment_Params params {};
		params.eligable = eligable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.JoinFriendInviteWithPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::JoinFriendInviteWithPassword(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.JoinFriendInviteWithPassword");
		
		UBP_GameInstance_C_JoinFriendInviteWithPassword_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnCancelJoin
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnCancelJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnCancelJoin");
		
		UBP_GameInstance_C_OnCancelJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnJoiningModded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::OnJoiningModded(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnJoiningModded");
		
		UBP_GameInstance_C_OnJoiningModded_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ModdedSaveLoaded
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::ModdedSaveLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ModdedSaveLoaded");
		
		UBP_GameInstance_C_ModdedSaveLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSandboxAnswer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GameInstance_C::OnSandboxAnswer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSandboxAnswer");
		
		UBP_GameInstance_C_OnSandboxAnswer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnSaveLoaded
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnSaveLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSaveLoaded");
		
		UBP_GameInstance_C_OnSaveLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ApplyGameUserSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDGameUserSettings*                        Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::ApplyGameUserSettings(class UFSDGameUserSettings* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ApplyGameUserSettings");
		
		UBP_GameInstance_C_ApplyGameUserSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");
		
		UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_GameInstance_C*                          GameInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GameInstance_C::OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C* GameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature");
		
		UBP_GameInstance_C_OnEligibleForRetirementAssignment__DelegateSignature_Params params {};
		params.GameInstance = GameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_GameInstance_C::OnAvailableCraftingItems__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature");
		
		UBP_GameInstance_C_OnAvailableCraftingItems__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}

}


