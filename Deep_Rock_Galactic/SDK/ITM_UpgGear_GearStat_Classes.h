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
	 * WidgetBlueprintGeneratedClass ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C
	 * Size -> 0x0150 (FullSize[0x03B0] - InheritedSize[0x0260])
	 */
	class UITM_UpgGear_GearStat_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          DATA_StatAmount;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DATA_StatName;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DATA_StatUpgrade;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Background;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                StatName;                                                // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                StatValue;                                               // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                StatBaseValue;                                           // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                StatUpgradeValue;                                        // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		EItemPreviewStatus                                         ItemPreviewStatus;                                       // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4S7F[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      SpecialFont;                                             // 0x02F0(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGearStatEntry                                      GearStat;                                                // 0x0348(0x0068) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetGearStat(const struct FGearStatEntry& InStat);
		void SetData(const class FText& InStatName, const class FText& InStatValue, const class FText& InStatBaseValue, const class FText& InStatUpgradeValue, EItemPreviewStatus InItemPreviewStatus);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ITM_UpgGear_GearStat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
