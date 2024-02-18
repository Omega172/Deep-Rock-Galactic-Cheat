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
	 * WidgetBlueprintGeneratedClass Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UFilter_ServerWorkEnvironment_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        EntryBox;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ExpandableMenu_C*                             MenuWorkEnvironment;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UCheck_ServerWorkEnvironment_C*>              Entries;                                                 // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OpenMenu(bool Open);
		void GetSelectedDifficulties(TArray<class UDifficultySetting*>* Difficulties);
		void IsDifficultySelected(class UDifficultySetting* InDifficulty, bool* Selected);
		void UpdateSubheader();
		void AddWorkEnvironment(class UDifficultySetting* Difficulty, class UCheck_ServerWorkEnvironment_C** OutWidget, bool* OutIsChecked);
		void PreConstruct(bool IsDesignTime);
		void OnCheckedChanged(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked);
		void Reset();
		void ExecuteUbergraph_Filter_ServerWorkEnvironment(int32_t EntryPoint);
		void OnSelectionChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
