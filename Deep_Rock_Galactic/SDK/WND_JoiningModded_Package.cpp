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
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.GetJoinButtonTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UWND_JoiningModded_C::GetJoinButtonTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.GetJoinButtonTooltip");
		
		UWND_JoiningModded_C_GetJoinButtonTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.UpdateHasModsInstalled
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::UpdateHasModsInstalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.UpdateHasModsInstalled");
		
		UWND_JoiningModded_C_UpdateHasModsInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnGottonModDependencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ModIds                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      ParentMod                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::OnGottonModDependencies(TArray<class FString> ModIds, const class FString& ParentMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnGottonModDependencies");
		
		UWND_JoiningModded_C_OnGottonModDependencies_Params params {};
		params.ModIds = ModIds;
		params.ParentMod = ParentMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.UnbindEvents
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::UnbindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.UnbindEvents");
		
		UWND_JoiningModded_C_UnbindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnFetchedTermsOfUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioTermsWrapper*                          Terms                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::OnFetchedTermsOfUse(class UModioTermsWrapper* Terms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnFetchedTermsOfUse");
		
		UWND_JoiningModded_C_OnFetchedTermsOfUse_Params params {};
		params.Terms = Terms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.StartJoinSession
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::StartJoinSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.StartJoinSession");
		
		UWND_JoiningModded_C_StartJoinSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnDownloadFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::OnDownloadFinished(const class FString& ModName, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnDownloadFinished");
		
		UWND_JoiningModded_C_OnDownloadFinished_Params params {};
		params.ModName = ModName;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SubscribeToMods
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::SubscribeToMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SubscribeToMods");
		
		UWND_JoiningModded_C_SubscribeToMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SetDefaultModDescription
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::SetDefaultModDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SetDefaultModDescription");
		
		UWND_JoiningModded_C_SetDefaultModDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SetColors
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::SetColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SetColors");
		
		UWND_JoiningModded_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SetModNames
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::SetModNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SetModNames");
		
		UWND_JoiningModded_C_SetModNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SetSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWND_JoiningModded_C::SetSession(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SetSession");
		
		UWND_JoiningModded_C_SetSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");
		
		UWND_JoiningModded_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");
		
		UWND_JoiningModded_C_BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_JoiningModded_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.PreConstruct");
		
		UWND_JoiningModded_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.ReceiveCloseCommand
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::ReceiveCloseCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.ReceiveCloseCommand");
		
		UWND_JoiningModded_C_ReceiveCloseCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.ReceiveOkCommand
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::ReceiveOkCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.ReceiveOkCommand");
		
		UWND_JoiningModded_C_ReceiveOkCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.AnsweredTerms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Agree                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_JoiningModded_C::AnsweredTerms(bool Agree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.AnsweredTerms");
		
		UWND_JoiningModded_C_AnsweredTerms_Params params {};
		params.Agree = Agree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.ReloadWorldAndJoin
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::ReloadWorldAndJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.ReloadWorldAndJoin");
		
		UWND_JoiningModded_C_ReloadWorldAndJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnModioUserAuthenticated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Authenticated                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_JoiningModded_C::OnModioUserAuthenticated(bool Authenticated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnModioUserAuthenticated");
		
		UWND_JoiningModded_C_OnModioUserAuthenticated_Params params {};
		params.Authenticated = Authenticated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.Construct");
		
		UWND_JoiningModded_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.Cancel
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.Cancel");
		
		UWND_JoiningModded_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.RequestDependenciesOfDependencies
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::RequestDependenciesOfDependencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.RequestDependenciesOfDependencies");
		
		UWND_JoiningModded_C_RequestDependenciesOfDependencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnErrorInstallingMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EUGCPackageError                                   ErrorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::OnErrorInstallingMod(const class FString& ModName, EUGCPackageError ErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnErrorInstallingMod");
		
		UWND_JoiningModded_C_OnErrorInstallingMod_Params params {};
		params.ModName = ModName;
		params.ErrorType = ErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SetHasHiddenMods
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::SetHasHiddenMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SetHasHiddenMods");
		
		UWND_JoiningModded_C_SetHasHiddenMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnRequiredModsFetched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ModsToEnable                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              ModsToInstall                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWND_JoiningModded_C::OnRequiredModsFetched(TArray<class FString> ModsToEnable, TArray<class FString> ModsToInstall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnRequiredModsFetched");
		
		UWND_JoiningModded_C_OnRequiredModsFetched_Params params {};
		params.ModsToEnable = ModsToEnable;
		params.ModsToInstall = ModsToInstall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnOptionalModsFetched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ModsToEnable                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              ModsToInstall                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWND_JoiningModded_C::OnOptionalModsFetched(TArray<class FString> ModsToEnable, TArray<class FString> ModsToInstall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnOptionalModsFetched");
		
		UWND_JoiningModded_C_OnOptionalModsFetched_Params params {};
		params.ModsToEnable = ModsToEnable;
		params.ModsToInstall = ModsToInstall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.SetupOptionalMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              OptionalModsToSetup                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              OptionalModsToEnable                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWND_JoiningModded_C::SetupOptionalMods(TArray<class FString> OptionalModsToSetup, TArray<class FString> OptionalModsToEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.SetupOptionalMods");
		
		UWND_JoiningModded_C_SetupOptionalMods_Params params {};
		params.OptionalModsToSetup = OptionalModsToSetup;
		params.OptionalModsToEnable = OptionalModsToEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnSwitchedDownloadStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDownload                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::OnSwitchedDownloadStatus(bool ShouldDownload, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnSwitchedDownloadStatus");
		
		UWND_JoiningModded_C_OnSwitchedDownloadStatus_Params params {};
		params.ShouldDownload = ShouldDownload;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.ModdedSaveChosen
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::ModdedSaveChosen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.ModdedSaveChosen");
		
		UWND_JoiningModded_C_ModdedSaveChosen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.RequestTermsOfUse
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::RequestTermsOfUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.RequestTermsOfUse");
		
		UWND_JoiningModded_C_RequestTermsOfUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnHideDenpendencyLoader
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::OnHideDenpendencyLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnHideDenpendencyLoader");
		
		UWND_JoiningModded_C_OnHideDenpendencyLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.ExecuteUbergraph_WND_JoiningModded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::ExecuteUbergraph_WND_JoiningModded(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.ExecuteUbergraph_WND_JoiningModded");
		
		UWND_JoiningModded_C_ExecuteUbergraph_WND_JoiningModded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_JoiningModded_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.OnCancel__DelegateSignature");
		
		UWND_JoiningModded_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_JoiningModded.WND_JoiningModded_C.JoinModdedServer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWND_JoiningModded_C::JoinModdedServer__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_JoiningModded.WND_JoiningModded_C.JoinModdedServer__DelegateSignature");
		
		UWND_JoiningModded_C_JoinModdedServer__DelegateSignature_Params params {};
		params.Session = Session;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_JoiningModded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_JoiningModded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_JoiningModded.WND_JoiningModded_C");
		return ptr;
	}

}


