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
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetDownloadVersionToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUGCDownloadVersion                                InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutStatus                                                  (Parm, OutParm)
	 */
	void UITM_Mod_C::GetDownloadVersionToolTip(EUGCDownloadVersion InStatus, class FText* OutStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetDownloadVersionToolTip");
		
		UITM_Mod_C_GetDownloadVersionToolTip_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatus != nullptr)
			*OutStatus = params.OutStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetDownloadVersionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUGCDownloadVersion                                InDownloadVersion                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutStatus                                                  (Parm, OutParm)
	 */
	void UITM_Mod_C::GetDownloadVersionText(EUGCDownloadVersion InDownloadVersion, class FText* OutStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetDownloadVersionText");
		
		UITM_Mod_C_GetDownloadVersionText_Params params {};
		params.InDownloadVersion = InDownloadVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatus != nullptr)
			*OutStatus = params.OutStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.CheckIfSavedInSlot
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::CheckIfSavedInSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.CheckIfSavedInSlot");
		
		UITM_Mod_C_CheckIfSavedInSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetFromPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 InPackage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::SetFromPackage(class UUGCPackage* InPackage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetFromPackage");
		
		UITM_Mod_C_SetFromPackage_Params params {};
		params.InPackage = InPackage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetDependencyCheckboxTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Mod_C::GetDependencyCheckboxTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetDependencyCheckboxTooltip");
		
		UITM_Mod_C_GetDependencyCheckboxTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.FindParentsInArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             PotentialParents                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UITM_Mod_C::FindParentsInArray(TArray<class UWidget*>* PotentialParents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.FindParentsInArray");
		
		UITM_Mod_C_FindParentsInArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PotentialParents != nullptr)
			*PotentialParents = params.PotentialParents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.CreateversionTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Mod_C::CreateversionTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.CreateversionTooltip");
		
		UITM_Mod_C_CreateversionTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.CheckGameVersionBeforeEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::CheckGameVersionBeforeEnable(bool InEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.CheckGameVersionBeforeEnable");
		
		UITM_Mod_C_CheckGameVersionBeforeEnable_Params params {};
		params.InEnabled = InEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.OnModStateDependencyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldDisableCheckmark                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasChanged                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::OnModStateDependencyChanged(bool IsChecked, bool ShouldDisableCheckmark, bool* HasChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.OnModStateDependencyChanged");
		
		UITM_Mod_C_OnModStateDependencyChanged_Params params {};
		params.IsChecked = IsChecked;
		params.ShouldDisableCheckmark = ShouldDisableCheckmark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasChanged != nullptr)
			*HasChanged = params.HasChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.ResetModEnabled
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::ResetModEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.ResetModEnabled");
		
		UITM_Mod_C_ResetModEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetModEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::SetModEnabled(bool InEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetModEnabled");
		
		UITM_Mod_C_SetModEnabled_Params params {};
		params.InEnabled = InEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.OnOverlayClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LastURL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::OnOverlayClosed(const class FString& LastURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.OnOverlayClosed");
		
		UITM_Mod_C_OnOverlayClosed_Params params {};
		params.LastURL = LastURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.HasCrashed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutHasCrashed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::HasCrashed(bool* OutHasCrashed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.HasCrashed");
		
		UITM_Mod_C_HasCrashed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHasCrashed != nullptr)
			*OutHasCrashed = params.OutHasCrashed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetCompactMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SimpleMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::SetCompactMode(bool SimpleMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetCompactMode");
		
		UITM_Mod_C_SetCompactMode_Params params {};
		params.SimpleMode = SimpleMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetStatusToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShowStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUGCApprovalStatus                                 InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutStatus                                                  (Parm, OutParm)
	 */
	void UITM_Mod_C::GetStatusToolTip(bool InShowStatus, EUGCApprovalStatus InStatus, class FText* OutStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetStatusToolTip");
		
		UITM_Mod_C_GetStatusToolTip_Params params {};
		params.InShowStatus = InShowStatus;
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatus != nullptr)
			*OutStatus = params.OutStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.OnThumbnailFetched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           ModioModThumbnail                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::OnThumbnailFetched(class UTexture2DDynamic* ModioModThumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.OnThumbnailFetched");
		
		UITM_Mod_C_OnThumbnailFetched_Params params {};
		params.ModioModThumbnail = ModioModThumbnail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetStringOrDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        InDefault                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      OutValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::GetStringOrDefault(const class FString& inString, const class FText& InDefault, class FString* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetStringOrDefault");
		
		UITM_Mod_C_GetStringOrDefault_Params params {};
		params.inString = inString;
		params.InDefault = InDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetTruncatedString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutResult                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::GetTruncatedString(const class FString& inString, int32_t InMaxLength, class FString* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetTruncatedString");
		
		UITM_Mod_C_GetTruncatedString_Params params {};
		params.inString = inString;
		params.InMaxLength = InMaxLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.GetStatusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShowStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUGCApprovalStatus                                 InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutStatus                                                  (Parm, OutParm)
	 */
	void UITM_Mod_C::GetStatusText(bool InShowStatus, EUGCApprovalStatus InStatus, class FText* OutStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.GetStatusText");
		
		UITM_Mod_C_GetStatusText_Params params {};
		params.InShowStatus = InShowStatus;
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatus != nullptr)
			*OutStatus = params.OutStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetColors
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::SetColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetColors");
		
		UITM_Mod_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InModName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InModVersion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InModURL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InModCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EUGCApprovalStatus                                 InModStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUGCDownloadVersion                                InModDownloadVersion                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InModDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InModAuthor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InModAuthorURL                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InModIsMounted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InModPendingMounted                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InModIsDeprecated                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InDependencyRemoved                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InShowStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InCrashed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InWrongVersion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::SetData(const class FString& InModName, const class FString& InModVersion, const class FString& InModURL, const class FString& InModCategory, EUGCApprovalStatus InModStatus, EUGCDownloadVersion InModDownloadVersion, const class FString& InModDescription, const class FString& InModAuthor, const class FString& InModAuthorURL, bool InModIsMounted, bool InModPendingMounted, bool InModIsDeprecated, bool InDependencyRemoved, bool InShowStatus, bool InCrashed, bool InWrongVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetData");
		
		UITM_Mod_C_SetData_Params params {};
		params.InModName = InModName;
		params.InModVersion = InModVersion;
		params.InModURL = InModURL;
		params.InModCategory = InModCategory;
		params.InModStatus = InModStatus;
		params.InModDownloadVersion = InModDownloadVersion;
		params.InModDescription = InModDescription;
		params.InModAuthor = InModAuthor;
		params.InModAuthorURL = InModAuthorURL;
		params.InModIsMounted = InModIsMounted;
		params.InModPendingMounted = InModPendingMounted;
		params.InModIsDeprecated = InModIsDeprecated;
		params.InDependencyRemoved = InDependencyRemoved;
		params.InShowStatus = InShowStatus;
		params.InCrashed = InCrashed;
		params.InWrongVersion = InWrongVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UITM_Mod_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.PreConstruct");
		
		UITM_Mod_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.Construct");
		
		UITM_Mod_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.UpdateModifed
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::UpdateModifed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.UpdateModifed");
		
		UITM_Mod_C_UpdateModifed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Mod_C_BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.Refresh");
		
		UITM_Mod_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetModActivationChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::SetModActivationChanged(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetModActivationChanged");
		
		UITM_Mod_C_SetModActivationChanged_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.SetModActivationChangedForceParents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_C::SetModActivationChangedForceParents(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.SetModActivationChangedForceParents");
		
		UITM_Mod_C_SetModActivationChangedForceParents_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.RequestDependencyNames
	 * 		Flags  -> ()
	 */
	void UITM_Mod_C::RequestDependencyNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.RequestDependencyNames");
		
		UITM_Mod_C_RequestDependencyNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.ExecuteUbergraph_ITM_Mod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::ExecuteUbergraph_ITM_Mod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.ExecuteUbergraph_ITM_Mod");
		
		UITM_Mod_C_ExecuteUbergraph_ITM_Mod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod.ITM_Mod_C.OnActivationChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Mod_C*                                  ManipulatedModItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_C::OnActivationChanged__DelegateSignature(class UITM_Mod_C* ManipulatedModItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod.ITM_Mod_C.OnActivationChanged__DelegateSignature");
		
		UITM_Mod_C_OnActivationChanged__DelegateSignature_Params params {};
		params.ManipulatedModItem = ManipulatedModItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Mod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Mod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Mod.ITM_Mod_C");
		return ptr;
	}

}


