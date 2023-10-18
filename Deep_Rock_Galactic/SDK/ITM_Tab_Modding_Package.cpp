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
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.Should Modding Menu be Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::ShouldModdingMenubeEnabled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.Should Modding Menu be Enabled");
		
		UITM_Tab_Modding_C_ShouldModdingMenubeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetTermsOfUseAcesssText
	 * 		Flags  -> ()
	 */
	class FText UITM_Tab_Modding_C::GetTermsOfUseAcesssText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetTermsOfUseAcesssText");
		
		UITM_Tab_Modding_C_GetTermsOfUseAcesssText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetModSlotStatusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ModSlotStatus                                              (Parm, OutParm)
	 */
	void UITM_Tab_Modding_C::GetModSlotStatusText(class FText* ModSlotStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetModSlotStatusText");
		
		UITM_Tab_Modding_C_GetModSlotStatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModSlotStatus != nullptr)
			*ModSlotStatus = params.ModSlotStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.ApplyChangedMods
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::ApplyChangedMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.ApplyChangedMods");
		
		UITM_Tab_Modding_C_ApplyChangedMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.GatherChangedMods
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::GatherChangedMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.GatherChangedMods");
		
		UITM_Tab_Modding_C_GatherChangedMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.IsUGCSubsystemAndRegistryValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::IsUGCSubsystemAndRegistryValid(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.IsUGCSubsystemAndRegistryValid");
		
		UITM_Tab_Modding_C_IsUGCSubsystemAndRegistryValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshApplyCancelButtons
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::RefreshApplyCancelButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshApplyCancelButtons");
		
		UITM_Tab_Modding_C_RefreshApplyCancelButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.RemovePendingRequests
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::RemovePendingRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.RemovePendingRequests");
		
		UITM_Tab_Modding_C_RemovePendingRequests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.ReorderInstalledMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  InField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InAscending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::ReorderInstalledMods(EPackageSortField InField, bool InAscending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.ReorderInstalledMods");
		
		UITM_Tab_Modding_C_ReorderInstalledMods_Params params {};
		params.InField = InField;
		params.InAscending = InAscending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModOverlayClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LastURL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::OnModOverlayClosed(const class FString& LastURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModOverlayClosed");
		
		UITM_Tab_Modding_C_OnModOverlayClosed_Params params {};
		params.LastURL = LastURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.UpdateModCounter
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::UpdateModCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.UpdateModCounter");
		
		UITM_Tab_Modding_C_UpdateModCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.SetCompactMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CompactView                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::SetCompactMode(bool CompactView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.SetCompactMode");
		
		UITM_Tab_Modding_C_SetCompactMode_Params params {};
		params.CompactView = CompactView;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.SetInteractability
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::SetInteractability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.SetInteractability");
		
		UITM_Tab_Modding_C_SetInteractability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetOrCreatePendingInstallWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InModName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ENUM_ModPendingStatus                              InPendingStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_PendingMod_C*                           OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::GetOrCreatePendingInstallWidget(const class FString& InModName, ENUM_ModPendingStatus InPendingStatus, class UITM_PendingMod_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetOrCreatePendingInstallWidget");
		
		UITM_Tab_Modding_C_GetOrCreatePendingInstallWidget_Params params {};
		params.InModName = InModName;
		params.InPendingStatus = InPendingStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnDownloadExtractMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              ModsPendingDownload                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Downloading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::OnDownloadExtractMods(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnDownloadExtractMods");
		
		UITM_Tab_Modding_C_OnDownloadExtractMods_Params params {};
		params.Name = Name;
		params.ModsPendingDownload = ModsPendingDownload;
		params.Downloading = Downloading;
		params.Progress = Progress;
		params.Total = Total;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.JoinWithTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        inTitle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FString>                              Install                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      OutResult                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::JoinWithTitle(const class FText& inTitle, TArray<class FString>* Install, class FString* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.JoinWithTitle");
		
		UITM_Tab_Modding_C_JoinWithTitle_Params params {};
		params.inTitle = inTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Install != nullptr)
			*Install = params.Install;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetPendingModStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ModStatus                                                  (Parm, OutParm)
	 */
	void UITM_Tab_Modding_C::GetPendingModStatus(class FText* ModStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetPendingModStatus");
		
		UITM_Tab_Modding_C_GetPendingModStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModStatus != nullptr)
			*ModStatus = params.ModStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.On Fetched Terms and Conditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioTermsWrapper*                          Terms                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::OnFetchedTermsandConditions(class UModioTermsWrapper* Terms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.On Fetched Terms and Conditions");
		
		UITM_Tab_Modding_C_OnFetchedTermsandConditions_Params params {};
		params.Terms = Terms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnTermsAndConditionAnswered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Agree                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::OnTermsAndConditionAnswered(bool Agree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnTermsAndConditionAnswered");
		
		UITM_Tab_Modding_C_OnTermsAndConditionAnswered_Params params {};
		params.Agree = Agree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.CheckTermsAndConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Accepted                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::CheckTermsAndConditions(bool* Accepted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.CheckTermsAndConditions");
		
		UITM_Tab_Modding_C_CheckTermsAndConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Accepted != nullptr)
			*Accepted = params.Accepted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.No_EC976CB74898DAEE8DC237B1C9A04A9B
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::No_EC976CB74898DAEE8DC237B1C9A04A9B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.No_EC976CB74898DAEE8DC237B1C9A04A9B");
		
		UITM_Tab_Modding_C_No_EC976CB74898DAEE8DC237B1C9A04A9B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.Yes_EC976CB74898DAEE8DC237B1C9A04A9B
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::Yes_EC976CB74898DAEE8DC237B1C9A04A9B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.Yes_EC976CB74898DAEE8DC237B1C9A04A9B");
		
		UITM_Tab_Modding_C_Yes_EC976CB74898DAEE8DC237B1C9A04A9B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.No_EC976CB74898DAEE8DC237B1445BDAB0
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::No_EC976CB74898DAEE8DC237B1445BDAB0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.No_EC976CB74898DAEE8DC237B1445BDAB0");
		
		UITM_Tab_Modding_C_No_EC976CB74898DAEE8DC237B1445BDAB0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.Yes_EC976CB74898DAEE8DC237B1445BDAB0
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::Yes_EC976CB74898DAEE8DC237B1445BDAB0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.Yes_EC976CB74898DAEE8DC237B1445BDAB0");
		
		UITM_Tab_Modding_C_Yes_EC976CB74898DAEE8DC237B1445BDAB0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96");
		
		UITM_Tab_Modding_C_OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96");
		
		UITM_Tab_Modding_C_OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.Construct");
		
		UITM_Tab_Modding_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.Destruct
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.Destruct");
		
		UITM_Tab_Modding_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.ConstructModUI
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::ConstructModUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.ConstructModUI");
		
		UITM_Tab_Modding_C_ConstructModUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModManagementChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::OnModManagementChanged(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModManagementChanged");
		
		UITM_Tab_Modding_C_OnModManagementChanged_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModDownloadFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::OnModDownloadFinished(const class FString& ModName, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModDownloadFinished");
		
		UITM_Tab_Modding_C_OnModDownloadFinished_Params params {};
		params.ModName = ModName;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshInstallModsButton
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::RefreshInstallModsButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshInstallModsButton");
		
		UITM_Tab_Modding_C_RefreshInstallModsButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshModUI
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::RefreshModUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshModUI");
		
		UITM_Tab_Modding_C_RefreshModUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  InField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InAscending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature_Params params {};
		params.InField = InField;
		params.InAscending = InAscending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnableAll                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Tab_Modding_C::BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature(bool InEnableAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature_Params params {};
		params.InEnableAll = InEnableAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.UpdateButtonsAndCounter
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::UpdateButtonsAndCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.UpdateButtonsAndCounter");
		
		UITM_Tab_Modding_C_UpdateButtonsAndCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModActivationChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Mod_C*                                  ManipulatedModItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::OnModActivationChanged(class UITM_Mod_C* ManipulatedModItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModActivationChanged");
		
		UITM_Tab_Modding_C_OnModActivationChanged_Params params {};
		params.ManipulatedModItem = ManipulatedModItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature");
		
		UITM_Tab_Modding_C_BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModioRequestHandled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioRequestType                                  requestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::OnModioRequestHandled(EModioRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModioRequestHandled");
		
		UITM_Tab_Modding_C_OnModioRequestHandled_Params params {};
		params.requestType = requestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnShouldRemoveDependencyProgress
	 * 		Flags  -> ()
	 */
	void UITM_Tab_Modding_C::OnShouldRemoveDependencyProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnShouldRemoveDependencyProgress");
		
		UITM_Tab_Modding_C_OnShouldRemoveDependencyProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Tab_Modding.ITM_Tab_Modding_C.ExecuteUbergraph_ITM_Tab_Modding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Tab_Modding_C::ExecuteUbergraph_ITM_Tab_Modding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Tab_Modding.ITM_Tab_Modding_C.ExecuteUbergraph_ITM_Tab_Modding");
		
		UITM_Tab_Modding_C_ExecuteUbergraph_ITM_Tab_Modding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Tab_Modding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Tab_Modding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Tab_Modding.ITM_Tab_Modding_C");
		return ptr;
	}

}


