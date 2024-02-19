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
	 * WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector.ITM_Wardrobe_ItemSelector_C
	 * Size -> 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
	 */
	class UITM_Wardrobe_ItemSelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOpen;                                                // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBasic_ScrollBarBox_C*                               Basic_ScrollBarBox;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MenuBackground_C*                               ITM_MenuBackground;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   SelectorGrid;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    MaxColumns;                                              // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinimumRows;                                             // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CellSize;                                                // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             InnerPadding;                                            // 0x0294(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LeftSide;                                                // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DesignTime;                                              // 0x02A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SelectorOpen;                                            // 0x02A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3BKZ[0x1];                                   // 0x02A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemClicked;                                           // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UITM_Wardrobe_ItemSlot_Base_C*                       ItemSlot;                                                // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimOpenProgress;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6ZTD[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectorOpenChanged;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UITM_Wardrobe_ItemSelector_C*                        OtherSelector;                                           // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ItemUnhovered(int32_t Index, class UWidget* Widget);
		void ItemHovered(int32_t Index, class UWidget* Widget);
		void SetAnimOpenProgress(float InProgress);
		void ItemClicked(int32_t Index, class UWidget* Widget);
		void SetOpen(bool InOpen);
		void PadRowWithBlanks();
		void ShowSlot(class UITM_Wardrobe_ItemSlot_Base_C* InSlot);
		void ClearItems();
		void AddItem(class UWidget* InChildWidget, bool InSelected, bool IsNewItem, class UDLCBase* FromDLC, class UITM_Wardrobe_ItemSelector_Entry_C** OutEntry, class UWidget** OutItemWidget);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnAnimOpenStarted();
		void OnAnimOpenFinished();
		void OnOtherSelectorOpen(bool IsOpen);
		void ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32_t EntryPoint);
		void OnSelectorOpenChanged__DelegateSignature(bool IsOpen);
		void OnItemClicked__DelegateSignature(int32_t Index, class UWidget* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
