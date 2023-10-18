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
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TrackingId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGoogleAnalyticsBlueprintLibrary::SetTrackingId(const class FString& TrackingId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId");
		
		UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Params params {};
		params.TrackingId = TrackingId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Anonymize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGoogleAnalyticsBlueprintLibrary::SetAnonymizeIP(bool Anonymize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP");
		
		UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Params params {};
		params.Anonymize = Anonymize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TimingCategory                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimingValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimingName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomDimension>                    CustomDimensions                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomMetric>                       CustomMetrics                                              (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGoogleAnalyticsBlueprintLibrary::RecordGoogleUserTiming(const class FString& TimingCategory, int32_t TimingValue, const class FString& TimingName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming");
		
		UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Params params {};
		params.TimingCategory = TimingCategory;
		params.TimingValue = TimingValue;
		params.TimingName = TimingName;
		params.CustomDimensions = CustomDimensions;
		params.CustomMetrics = CustomMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SocialNetwork                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SocialAction                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SocialTarget                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomDimension>                    CustomDimensions                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomMetric>                       CustomMetrics                                              (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGoogleAnalyticsBlueprintLibrary::RecordGoogleSocialInteraction(const class FString& SocialNetwork, const class FString& SocialAction, const class FString& SocialTarget, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction");
		
		UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Params params {};
		params.SocialNetwork = SocialNetwork;
		params.SocialAction = SocialAction;
		params.SocialTarget = SocialTarget;
		params.CustomDimensions = CustomDimensions;
		params.CustomMetrics = CustomMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScreenName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomDimension>                    CustomDimensions                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomMetric>                       CustomMetrics                                              (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGoogleAnalyticsBlueprintLibrary::RecordGoogleScreen(const class FString& ScreenName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen");
		
		UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Params params {};
		params.ScreenName = ScreenName;
		params.CustomDimensions = CustomDimensions;
		params.CustomMetrics = CustomMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventCategory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventAction                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventLabel                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomDimension>                    CustomDimensions                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCustomMetric>                       CustomMetrics                                              (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGoogleAnalyticsBlueprintLibrary::RecordGoogleEvent(const class FString& EventCategory, const class FString& EventAction, const class FString& EventLabel, int32_t EventValue, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent");
		
		UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Params params {};
		params.EventCategory = EventCategory;
		params.EventAction = EventAction;
		params.EventLabel = EventLabel;
		params.EventValue = EventValue;
		params.CustomDimensions = CustomDimensions;
		params.CustomMetrics = CustomMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
	 * 		Flags  -> ()
	 */
	class FString UGoogleAnalyticsBlueprintLibrary::GetTrackingId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId");
		
		UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGoogleAnalyticsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGoogleAnalyticsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGoogleAnalyticsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGoogleAnalyticsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GoogleAnalytics.GoogleAnalyticsSettings");
		return ptr;
	}

}


