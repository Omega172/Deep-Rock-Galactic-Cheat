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
	 * Class DSTelemetry.DJSONArray
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDJSONArray : public UObject
	{
	public:
		unsigned char                                              UnknownData_YN2F[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		class UDJSONArray* CreateJSONArray(class UObject* WorldContextObject);
		bool Clear();
		class FString AsString();
		bool AddStringItem(const class FString& Item);
		bool AddStringArrayItem(TArray<class FString> Item);
		bool AddJSONObjectItem(class UDJSONObject* Item);
		bool AddJSONObjectArrayItem(TArray<class UDJSONObject*> Item);
		bool AddJSONArrayItem(class UDJSONArray* Item);
		bool AddJSONArrayArrayItem(TArray<class UDJSONArray*> Item);
		bool AddIntegerItem(int32_t Item);
		bool AddIntegerArrayItem(TArray<int32_t> Item);
		bool AddFloatItem(float Item);
		bool AddFloatArrayItem(TArray<float> Item);
		bool AddEmptyItem();
		bool AddBooleanItem(bool Item);
		bool AddBooleanArrayItem(TArray<bool> Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DSTelemetry.DJSONObject
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDJSONObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_HWPF[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		class UDJSONObject* CreateJSONObject(class UObject* WorldContextObject);
		bool Clear();
		class FString AsString();
		bool AddStringField(const class FString& Key, const class FString& Value);
		bool AddStringArrayField(const class FString& Key, TArray<class FString> Value);
		bool AddJSONObjectField(const class FString& Key, class UDJSONObject* Value);
		bool AddJSONObjectArrayField(const class FString& Key, TArray<class UDJSONObject*> Value);
		bool AddJSONArrayField(const class FString& Key, class UDJSONArray* Value);
		bool AddJSONArrayArrayField(const class FString& Key, TArray<class UDJSONArray*> Value);
		bool AddIntegerField(const class FString& Key, int32_t Value);
		bool AddIntegerArrayField(const class FString& Key, TArray<int32_t> Value);
		bool AddFloatField(const class FString& Key, float Value);
		bool AddFloatArrayField(const class FString& Key, TArray<float> Value);
		bool AddEmptyField(const class FString& Key);
		bool AddBooleanField(const class FString& Key, bool Value);
		bool AddBooleanArrayField(const class FString& Key, TArray<bool> Value);
		static UClass* StaticClass();
	};

	/**
	 * Class DSTelemetry.DSTelemetry
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDSTelemetry : public UObject
	{
	public:
		unsigned char                                              UnknownData_RPTG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void Terminate();
		bool SubmitString(const class FString& EventKey, const class FString& EventData);
		bool SubmitSerialized(const class FString& EventKey, const class FString& EventData);
		bool SubmitJSONObject(const class FString& EventKey, class UDJSONObject* EventData);
		bool SubmitJSONArray(const class FString& EventKey, class UDJSONArray* EventData);
		bool SubmitInteger(const class FString& EventKey, int32_t EventData);
		bool SubmitFloat(const class FString& EventKey, float EventData);
		bool SubmitEmpty(const class FString& EventKey);
		bool SubmitBoolean(const class FString& EventKey, bool EventData);
		bool Start(const class FString& GameId, const class FString& BuildID);
		bool SetStateString(const class FString& StateKey, const class FString& StateData);
		bool SetStateSerialized(const class FString& StateKey, const class FString& StateData);
		bool SetStateJSONObject(const class FString& StateKey, class UDJSONObject* StateData);
		bool SetStateJSONArray(const class FString& StateKey, class UDJSONArray* StateData);
		bool SetStateInteger(const class FString& StateKey, int32_t StateData);
		bool SetStateFloat(const class FString& StateKey, float StateData);
		bool SetStateEmpty(const class FString& StateKey);
		bool SetStateBoolean(const class FString& StateKey, bool StateData);
		bool SetOnlinePlatformUserID(const class FString& OnlinePlatformUserID);
		bool SetOnlinePlatformIdentifier(const class FString& OnlinePlatformIdentifier);
		void Resume();
		void Pause();
		bool IsTerminated();
		bool IsPaused();
		int64_t GetTelemetryInstanceID();
		class UDSTelemetry* CreateTelemetry(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
