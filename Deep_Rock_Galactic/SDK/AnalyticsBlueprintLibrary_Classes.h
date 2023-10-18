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
	 * Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
		bool StartSession();
		void SetUserId(const class FString& UserId);
		void SetSessionId(const class FString& sessionId);
		void SetLocation(const class FString& Location);
		void SetGender(const class FString& Gender);
		void SetBuildInfo(const class FString& BuildInfo);
		void SetAge(int32_t Age);
		void RecordSimpleItemPurchaseWithAttributes(const class FString& ItemID, int32_t ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordSimpleItemPurchase(const class FString& ItemID, int32_t ItemQuantity);
		void RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int32_t GameCurrencyAmount);
		void RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, TArray<class FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordProgress(const class FString& ProgressType, const class FString& ProgressName);
		void RecordItemPurchase(const class FString& ItemID, const class FString& Currency, int32_t PerItemCost, int32_t ItemQuantity);
		void RecordEventWithAttributes(const class FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue);
		void RecordEvent(const class FString& EventName);
		void RecordErrorWithAttributes(const class FString& Error, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordError(const class FString& Error);
		void RecordCurrencyPurchase(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider);
		void RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
		void RecordCurrencyGiven(const class FString& GameCurrencyType, int32_t GameCurrencyAmount);
		struct FAnalyticsEventAttr MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue);
		class FString GetUserId();
		class FString GetSessionId();
		void FlushEvents();
		void EndSession();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
