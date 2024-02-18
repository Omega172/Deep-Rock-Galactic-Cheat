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
	 * WidgetBlueprintGeneratedClass WND_JoiningModded.WND_JoiningModded_C
	 * Size -> 0x0250 (FullSize[0x04F0] - InheritedSize[0x02A0])
	 */
	class UWND_JoiningModded_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URichTextSizable*                                    AboutToJoinModdedText;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Menu_ColorBar_C*                              Basic_Menu_ColorBar;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_PasswordField_C*                              Basic_PasswordField;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlurBackground_C*                                   BlurBackground;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            BTN_Cancel;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            BTN_Join;                                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DependenciesLoading;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ModdingProgressBar_C*                            DependenciesProgressBar;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextSizable*                                    DisclaimerModded;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     HasMods_Switcher;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Header;                                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_123;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ModsInstalledBox;                                        // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ModsPendingBox;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   SubscribtionLoading;                                     // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FBlueprintSessionResult                             Session;                                                 // 0x0328(0x0108) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             JoinModdedServer;                                        // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       EmptyMods;                                               // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CX2[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ModsToInstall;                                           // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      HostMods;                                                // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ModsToEnable;                                            // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DependencyRecusivenessDone;                              // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C6R2[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      DependencyMods;                                          // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              DependencyRequestedMod;                                  // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    NumOfDependenciesChecked;                                // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FSIC[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      OptionalMods;                                            // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TotalNumberOfDependenciesToCheck;                        // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H6NR[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBasic_ToolTip_C*                                    JoinButtonTooltip;                                       // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ModsNotToDisable;                                        // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        DependencyHideTimerHandle;                               // 0x04E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* GetJoinButtonTooltip();
		void UpdateHasModsInstalled();
		void OnGottonModDependencies(TArray<class FString> ModIds, const class FString& ParentMod);
		void UnbindEvents();
		void OnFetchedTermsOfUse(class UModioTermsWrapper* Terms);
		void StartJoinSession();
		void OnDownloadFinished(const class FString& ModName, const class FString& ModId);
		void SubscribeToMods();
		void SetDefaultModDescription();
		void SetColors();
		void SetModNames();
		void SetSession(const struct FBlueprintSessionResult& Session);
		void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ReceiveCloseCommand();
		void ReceiveOkCommand();
		void AnsweredTerms(bool Agree);
		void ReloadWorldAndJoin();
		void OnModioUserAuthenticated(bool Authenticated);
		void Construct();
		void Cancel();
		void RequestDependenciesOfDependencies();
		void OnErrorInstallingMod(const class FString& ModName, EUGCPackageError ErrorType);
		void SetHasHiddenMods();
		void OnRequiredModsFetched(TArray<class FString> ModsToEnable, TArray<class FString> ModsToInstall);
		void OnOptionalModsFetched(TArray<class FString> ModsToEnable, TArray<class FString> ModsToInstall);
		void SetupOptionalMods(TArray<class FString> OptionalModsToSetup, TArray<class FString> OptionalModsToEnable);
		void OnSwitchedDownloadStatus(bool ShouldDownload, const class FString& ModId);
		void ModdedSaveChosen();
		void RequestTermsOfUse();
		void OnHideDenpendencyLoader();
		void ExecuteUbergraph_WND_JoiningModded(int32_t EntryPoint);
		void OnCancel__DelegateSignature();
		void JoinModdedServer__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
