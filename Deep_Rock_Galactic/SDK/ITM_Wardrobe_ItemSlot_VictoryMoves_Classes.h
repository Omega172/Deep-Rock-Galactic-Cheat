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
	 * WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C
	 * Size -> 0x0026 (FullSize[0x0390] - InheritedSize[0x036A])
	 */
	class UITM_Wardrobe_ItemSlot_VictoryMoves_C : public UITM_Wardrobe_ItemSlot_Base_C
	{
	public:
		unsigned char                                              UnknownData_4KUE[0x6];                                   // 0x036A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UVictoryPose*>                                VictoryPoses;                                            // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget*                                             SelectedWidget;                                          // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveGetNumberOfItems(int32_t* Num);
		void ReceiveEquipItem(int32_t InIndex, bool* OutSuccess);
		void PreviewItem(class UVictoryPose* Item, bool Show, bool* OutSuccess);
		void ReceivePreviewItem(int32_t Index, bool Show, bool* OutSuccess);
		void ReceiveItemNotificationData(int32_t Index, TArray<class UObject*>* Array);
		void ReceiveInitialize(int32_t* AvailableItems);
		void ReceiveGetSelectedIndex(int32_t* OutIndex);
		void UpdateOrCreateItemWidget(class UVictoryPose* InVictoryMove, class UWidget* InReuseWidget, bool InShowToolTip, class UWidget** OutWidget);
		void ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets);
		void UpdateEquipped();
		void ReceivePreConstruct();
		void SetHovered(bool InSlotHovered);
		void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
