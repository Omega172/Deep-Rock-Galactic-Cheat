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
	 * WidgetBlueprintGeneratedClass Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UOptions_FullScreen_Resolutions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_OptionSwitcher_C*                             Basic_OptionSwitcher;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FIntPoint>                                   NonPrimaryMonitorResolution;                             // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddNonPrimaryMonitorResolutions();
		bool ShouldResolutionBeEnabled(class UFSDGameUserSettings* usersettings);
		void StringToRes(const class FString& String, struct FIntPoint* IntPoint);
		void ResToString(struct FIntPoint* IntPoint, class FString* String);
		void Construct();
		void UINeedsUpdate();
		void ShowUI();
		void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index);
		void ExecuteUbergraph_Options_FullScreen_Resolutions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
