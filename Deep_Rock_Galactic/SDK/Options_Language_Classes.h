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
	 * WidgetBlueprintGeneratedClass Options_Language.Options_Language_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UOptions_Language_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_OptionSwitcher_C*                             Basic_OptionSwitcher;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 WorkInProgress;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      Locales;                                                 // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLocalizedLanguageInfo>                      Languages;                                               // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnLanguageChanged;                                       // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      FullySupportedLanguagesSteam;                            // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      FullySupportedLanguagesMS;                               // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      FullySupportedLanguagesPS;                               // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateWorkInProgressLabel(const class FString& languageCode);
		TArray<struct FLocalizedLanguageInfo> GetFilteredLanguages();
		class FText GetLanguageName(const class FString& InName, const class FString& InCode);
		void Construct();
		void UINeedsUpdate();
		void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Options_Language(int32_t EntryPoint);
		void OnLanguageChanged__DelegateSignature(const struct FLocalizedLanguageInfo& SelectedLanguage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
