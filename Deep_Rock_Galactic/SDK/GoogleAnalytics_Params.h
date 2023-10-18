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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
	 */
	struct UGoogleAnalyticsBlueprintLibrary_SetTrackingId_Params
	{
	public:
		class FString                                              TrackingId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
	 */
	struct UGoogleAnalyticsBlueprintLibrary_SetAnonymizeIP_Params
	{
	public:
		bool                                                       Anonymize;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
	 */
	struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleUserTiming_Params
	{
	public:
		class FString                                              TimingCategory;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TimingValue;                                             // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MO5R[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TimingName;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FCustomDimension>                            CustomDimensions;                                        // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FCustomMetric>                               CustomMetrics;                                           // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
	 */
	struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleSocialInteraction_Params
	{
	public:
		class FString                                              SocialNetwork;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SocialAction;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SocialTarget;                                            // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FCustomDimension>                            CustomDimensions;                                        // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FCustomMetric>                               CustomMetrics;                                           // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
	 */
	struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleScreen_Params
	{
	public:
		class FString                                              ScreenName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FCustomDimension>                            CustomDimensions;                                        // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FCustomMetric>                               CustomMetrics;                                           // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
	 */
	struct UGoogleAnalyticsBlueprintLibrary_RecordGoogleEvent_Params
	{
	public:
		class FString                                              EventCategory;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventAction;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventLabel;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EventValue;                                              // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_79NN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCustomDimension>                            CustomDimensions;                                        // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FCustomMetric>                               CustomMetrics;                                           // 0x0048(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
	 */
	struct UGoogleAnalyticsBlueprintLibrary_GetTrackingId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
