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
	 * WidgetBlueprintGeneratedClass UI_PerkIcon.UI_PerkIcon_C
	 * Size -> 0x0025 (FullSize[0x0285] - InheritedSize[0x0260])
	 */
	class UUI_PerkIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            IconSizeBox;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PerkIcon;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PerkLevel;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      ImageDimension;                                          // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       ShowPerkLevel;                                           // 0x0284(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetPerkLevelVisibility(bool InVisible);
		void ShowPerkAs(class UPerkAsset* InPerk, const struct FLinearColor& InIconColor, int32_t InRank);
		void ShowPerkByRank(class UPerkAsset* InPerk, int32_t InRank);
		void ShowAs(class UTexture2D* InIconTexture, const struct FLinearColor& InIconColor, int32_t InRank);
		void SetDimensions(float InDiminsions);
		void PreConstruct(bool IsDesignTime);
		void SetPerkAssetLastClaimed(class UPerkAsset* PerkAsset);
		void ExecuteUbergraph_UI_PerkIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
