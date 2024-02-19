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
	 * WidgetBlueprintGeneratedClass Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C
	 * Size -> 0x0011 (FullSize[0x0271] - InheritedSize[0x0260])
	 */
	class UOptions_HUD_ElementPresetItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_ButtonScalable2_C*                            Button;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EHUDVisibilityPresets                                      PresetID;                                                // 0x0270(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void ExecuteUbergraph_Options_HUD_ElementPresetItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
