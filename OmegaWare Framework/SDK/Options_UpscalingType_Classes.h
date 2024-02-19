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
	 * WidgetBlueprintGeneratedClass Options_UpscalingType.Options_UpscalingType_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UOptions_UpscalingType_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_OptionSwitcher_C*                             Basic_OptionSwitcher;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<int32_t>                                            IndexMap;                                                // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddIndex(const class FText& Option, int32_t ID);
		void IdToIndex(int32_t ID, int32_t* Index);
		void IndexToId(int32_t Index, int32_t* ID);
		void Construct();
		void UINeedsUpdate();
		void ShowOptions();
		void BndEvt__Options_UpscalingType_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index);
		void ExecuteUbergraph_Options_UpscalingType(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
