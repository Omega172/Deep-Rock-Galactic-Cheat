#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
	{
	public:
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
	 */
	struct UAnalyticsBlueprintLibrary_StartSession_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
	 */
	struct UAnalyticsBlueprintLibrary_SetUserId_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
	 */
	struct UAnalyticsBlueprintLibrary_SetSessionId_Params
	{
	public:
		class FString                                              sessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
	 */
	struct UAnalyticsBlueprintLibrary_SetLocation_Params
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
	 */
	struct UAnalyticsBlueprintLibrary_SetGender_Params
	{
	public:
		class FString                                              Gender;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
	 */
	struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
	{
	public:
		class FString                                              BuildInfo;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
	 */
	struct UAnalyticsBlueprintLibrary_SetAge_Params
	{
	public:
		int32_t                                                    Age;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
	{
	public:
		class FString                                              ItemID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemQuantity;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BN1E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
	 */
	struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
	{
	public:
		class FString                                              ItemID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemQuantity;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
	{
	public:
		class FString                                              GameCurrencyType;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameCurrencyAmount;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SIOP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
	 */
	struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
	{
	public:
		class FString                                              GameCurrencyType;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameCurrencyAmount;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
	{
	public:
		class FString                                              ProgressType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ProgressNames;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
	{
	public:
		class FString                                              ProgressType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProgressName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
	 */
	struct UAnalyticsBlueprintLibrary_RecordProgress_Params
	{
	public:
		class FString                                              ProgressType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProgressName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
	 */
	struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
	{
	public:
		class FString                                              ItemID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Currency;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PerItemCost;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemQuantity;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
	 */
	struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AttributeName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AttributeValue;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
	 */
	struct UAnalyticsBlueprintLibrary_RecordEvent_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
	 */
	struct UAnalyticsBlueprintLibrary_RecordError_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
	 */
	struct UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
	{
	public:
		class FString                                              GameCurrencyType;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameCurrencyAmount;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7J46[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RealCurrencyType;                                        // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RealMoneyCost;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4C29[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PaymentProvider;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
	 */
	struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
	{
	public:
		class FString                                              GameCurrencyType;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameCurrencyAmount;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_51V6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAnalyticsEventAttr>                         Attributes;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
	 */
	struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
	{
	public:
		class FString                                              GameCurrencyType;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameCurrencyAmount;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
	 */
	struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
	{
	public:
		class FString                                              AttributeName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AttributeValue;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAnalyticsEventAttr                                 ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
	 */
	struct UAnalyticsBlueprintLibrary_GetUserId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
	 */
	struct UAnalyticsBlueprintLibrary_GetSessionId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
	 */
	struct UAnalyticsBlueprintLibrary_FlushEvents_Params
	{	};

	/**
	 * Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
	 */
	struct UAnalyticsBlueprintLibrary_EndSession_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
