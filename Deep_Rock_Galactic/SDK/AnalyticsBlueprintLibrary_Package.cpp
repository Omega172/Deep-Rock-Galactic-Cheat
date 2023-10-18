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
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAnalyticsBlueprintLibrary::StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes");
		
		UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params params {};
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
	 * 		Flags  -> ()
	 */
	bool UAnalyticsBlueprintLibrary::StartSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession");
		
		UAnalyticsBlueprintLibrary_StartSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::SetUserId(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId");
		
		UAnalyticsBlueprintLibrary_SetUserId_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      sessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::SetSessionId(const class FString& sessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId");
		
		UAnalyticsBlueprintLibrary_SetSessionId_Params params {};
		params.sessionId = sessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::SetLocation(const class FString& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation");
		
		UAnalyticsBlueprintLibrary_SetLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Gender                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::SetGender(const class FString& Gender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender");
		
		UAnalyticsBlueprintLibrary_SetGender_Params params {};
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BuildInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::SetBuildInfo(const class FString& BuildInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo");
		
		UAnalyticsBlueprintLibrary_SetBuildInfo_Params params {};
		params.BuildInfo = BuildInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Age                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::SetAge(int32_t Age)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge");
		
		UAnalyticsBlueprintLibrary_SetAge_Params params {};
		params.Age = Age;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(const class FString& ItemID, int32_t ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params params {};
		params.ItemID = ItemID;
		params.ItemQuantity = ItemQuantity;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(const class FString& ItemID, int32_t ItemQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase");
		
		UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params params {};
		params.ItemID = ItemID;
		params.ItemQuantity = ItemQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int32_t GameCurrencyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase");
		
		UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ProgressType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ProgressNames                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, TArray<class FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes");
		
		UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressNames = ProgressNames;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ProgressType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProgressName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressName = ProgressName;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ProgressType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProgressName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordProgress(const class FString& ProgressType, const class FString& ProgressName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress");
		
		UAnalyticsBlueprintLibrary_RecordProgress_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressName = ProgressName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerItemCost                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordItemPurchase(const class FString& ItemID, const class FString& Currency, int32_t PerItemCost, int32_t ItemQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase");
		
		UAnalyticsBlueprintLibrary_RecordItemPurchase_Params params {};
		params.ItemID = ItemID;
		params.Currency = Currency;
		params.PerItemCost = PerItemCost;
		params.ItemQuantity = ItemQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(const class FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params params {};
		params.EventName = EventName;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute");
		
		UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params params {};
		params.EventName = EventName;
		params.AttributeName = AttributeName;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordEvent(const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent");
		
		UAnalyticsBlueprintLibrary_RecordEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(const class FString& Error, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params params {};
		params.Error = Error;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordError(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError");
		
		UAnalyticsBlueprintLibrary_RecordError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RealCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RealMoneyCost                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PaymentProvider                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase");
		
		UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		params.RealCurrencyType = RealCurrencyType;
		params.RealMoneyCost = RealMoneyCost;
		params.PaymentProvider = PaymentProvider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(const class FString& GameCurrencyType, int32_t GameCurrencyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven");
		
		UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute");
		
		UAnalyticsBlueprintLibrary_MakeEventAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
	 * 		Flags  -> ()
	 */
	class FString UAnalyticsBlueprintLibrary::GetUserId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId");
		
		UAnalyticsBlueprintLibrary_GetUserId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
	 * 		Flags  -> ()
	 */
	class FString UAnalyticsBlueprintLibrary::GetSessionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId");
		
		UAnalyticsBlueprintLibrary_GetSessionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
	 * 		Flags  -> ()
	 */
	void UAnalyticsBlueprintLibrary::FlushEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents");
		
		UAnalyticsBlueprintLibrary_FlushEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
	 * 		Flags  -> ()
	 */
	void UAnalyticsBlueprintLibrary::EndSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession");
		
		UAnalyticsBlueprintLibrary_EndSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalyticsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalyticsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}

}


