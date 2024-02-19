#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * WidgetBlueprintGeneratedClass Options_InputAudioSource.Options_InputAudioSource_C
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UOptions_InputAudioSource_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_OptionSwitcher_C*                             Basic_OptionSwitcher;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Slider_C*                                     MicAmplitudeSlider;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        NewDevicesTimerHandle;                                   // 0x0278(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumOfDevices;                                            // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YFTM[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBasic_ToolTip_C*                                    MicAmplitudeTooltip;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                CurrentDeviceName;                                       // 0x0290(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* GetMicAmplitudeSliderTooltip();
		void FillAudioDevices();
		void Construct();
		void UINeedsUpdate();
		void ShowOptions();
		void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index);
		void CheckForNewDevices();
		void Destruct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ReenableSlider();
		void ExecuteUbergraph_Options_InputAudioSource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
