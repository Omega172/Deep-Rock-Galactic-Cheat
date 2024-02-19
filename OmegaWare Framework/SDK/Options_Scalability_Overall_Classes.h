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
	 * WidgetBlueprintGeneratedClass Options_Scalability_Overall.Options_Scalability_Overall_C
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UOptions_Scalability_Overall_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_OptionSwitcher_C*                             Basic_OptionSwitcher;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                CustomText;                                              // 0x0270(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void UINeedsUpdate();
		void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index);
		void ExecuteUbergraph_Options_Scalability_Overall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
