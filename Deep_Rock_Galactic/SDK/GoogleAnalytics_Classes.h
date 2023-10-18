#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetTrackingId(const class FString& TrackingId);
		void SetAnonymizeIP(bool Anonymize);
		void RecordGoogleUserTiming(const class FString& TimingCategory, int32_t TimingValue, const class FString& TimingName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
		void RecordGoogleSocialInteraction(const class FString& SocialNetwork, const class FString& SocialAction, const class FString& SocialTarget, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
		void RecordGoogleScreen(const class FString& ScreenName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
		void RecordGoogleEvent(const class FString& EventCategory, const class FString& EventAction, const class FString& EventLabel, int32_t EventValue, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
		class FString GetTrackingId();
		static UClass* StaticClass();
	};

	/**
	 * Class GoogleAnalytics.GoogleAnalyticsSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGoogleAnalyticsSettings : public UObject
	{
	public:
		bool                                                       bEnableIDFACollection;                                   // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HL2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
