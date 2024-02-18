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
	 * WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C
	 * Size -> 0x0056 (FullSize[0x03C0] - InheritedSize[0x036A])
	 */
	class UITM_Wardrobe_ItemSlot_Vanity_C : public UITM_Wardrobe_ItemSlot_Base_C
	{
	public:
		unsigned char                                              UnknownData_PX1E[0x6];                                   // 0x036A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EVanitySlot                                                VanitySlot;                                              // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_VD8L[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UITM_GeneratedIcon_Item_C*                           SelectedIcon;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UVanityItem*>                                 VanityItems;                                             // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UVanityItem*                                         DefaultItem;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          DefaultItemIcon;                                         // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DefaultItemName;                                         // 0x03A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly

	public:
		void GetVanityItemsForWidget(TArray<class UVanityItem*>* Items);
		void ReceiveGetNumberOfItems(int32_t* Num);
		void ReceiveItemDLC(int32_t Index, class UDLCBase** FromDLC);
		class FText GetItemName(class UVanityItem* InVanityItem);
		void UpdateItemWidget(class UITM_GeneratedIcon_Item_C* InWidget, class UVanityItem* InVanityItem, bool InShowToolTip);
		void ReceiveEquipItem(int32_t InIndex, bool* OutSuccess);
		void ReceivePreviewItem(int32_t Index, bool Show, bool* OutSuccess);
		void ReceiveItemNotificationData(int32_t Index, TArray<class UObject*>* Array);
		void ReceiveInitialize(int32_t* AvailableItems);
		void ReceiveGetSelectedIndex(int32_t* OutIndex);
		void CreateItemWidget(class UVanityItem* InVanityItem, bool InBackgroundVisible, bool InShowToolTip, class UITM_GeneratedIcon_Item_C** OutItemWidget);
		void SetSelectedItem(class UVanityItem* Item, bool Equip);
		void ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets);
		void ReceiveReleaseResource(class UWidget* InWidget);
		void ReceivePreConstruct();
		void OnInitialized();
		void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
