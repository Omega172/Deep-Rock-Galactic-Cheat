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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass HUD_Modding_Downloads.HUD_Modding_Downloads_C
	 * Size -> 0x00B9 (FullSize[0x0319] - InheritedSize[0x0260])
	 */
	class UHUD_Modding_Downloads_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOpenClose;                                           // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        EntryBox;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextHeadline;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              PreviewName;                                             // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      PreviewPendingNames;                                     // 0x0290(0x0010) Edit, BlueprintVisible
		bool                                                       PreviewDownloading;                                      // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T1FP[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreviewProgress;                                         // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviewTotal;                                            // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J8A6[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        HideHandle;                                              // 0x02B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOpen;                                                  // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Downloading;                                             // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LHJ7[0x6];                                   // 0x02BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHUD_Modding_Downloads_Entry_C*                      CurrentEntry;                                            // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, EUGCPackageError>                      PreviewFailed;                                           // 0x02C8(0x0050) Edit, BlueprintVisible
		bool                                                       IsDesignTime;                                            // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowFailedToInstall(TMap<class FString, EUGCPackageError> InFailed);
		void SetOpen(bool InIsOpen);
		void GetEntry(const class FString& InModName, class UHUD_Modding_Downloads_Entry_C** OutEntry, class FString* OutName);
		void SetDownloadProgress(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
		void Construct();
		void OnErrorInstalling(const class FString& ModName, EUGCPackageError ErrorType);
		void PreConstruct(bool IsDesignTime);
		void OnDownloadProgress(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
		void OnAnimFinished();
		void HideFromHUD();
		void Destruct();
		void Simulate();
		void OnDownloadFinished(const class FString& ModName, const class FString& ModId);
		void ExecuteUbergraph_HUD_Modding_Downloads(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
