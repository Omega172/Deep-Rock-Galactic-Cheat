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
	 * WidgetBlueprintGeneratedClass ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UITM_Loadout_UpgradeBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_UpgGear_UpgIconSingle_C*                        ITM_UpgGear_UpgIconSingle;                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_UpgGear_UpgIconSingle_C*                        ITM_UpgGear_UpgIconSingle_1;                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_UpgGear_UpgIconSingle_C*                        ITM_UpgGear_UpgIconSingle_2;                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_UpgGear_UpgIconSingle_C*                        ITM_UpgGear_UpgIconSingle_3;                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_UpgGear_UpgIconSingle_C*                        ITM_UpgGear_UpgIconSingle_4;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UITM_UpgGear_UpgIconSingle_C*>                UpgradeWidgets;                                          // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void ShowItemUpgrades(class UPlayerCharacterID* InCharacterID, class UClass* InItemClass, class AFSDPlayerState* InPlayerState, bool EnableHoverTooltip);
		void GetUpgradeFromList(int32_t Index, TArray<class UItemUpgrade*>* upgrades, class UItemUpgrade** Output);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
