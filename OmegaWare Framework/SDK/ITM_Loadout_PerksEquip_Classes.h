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
	 * WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UITM_Loadout_PerksEquip_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        ActiveSlotsBox;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Loadout_PerksEquip_Selection_C*                 ITM_Loadout_PerksEquip_Selection;                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PassiveSlotsBox;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PerkStar;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UITM_LoadOut_PerksEquip_Slot_C*                      SelectedSlot;                                            // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetEquippedPerksByType(class UPlayerCharacterID* InCharacterClass, EPerkUsageType InType, TArray<class UPerkAsset*>* OutPerks);
		void SelectSlot(class UITM_LoadOut_PerksEquip_Slot_C* InSlot);
		void CreateSlots(class UVerticalBox* InSlotsBox, class UPlayerCharacterID* InCharacter, EPerkUsageType InType);
		void UpdateSlots();
		class UWidget* Get_PerkStar_ToolTipWidget_1();
		void GetEquippedPerkAt(int32_t Index, TArray<class UPerkAsset*> TargetArray, class UPerkAsset** Perk);
		void UpdateEquippedPerks();
		void SetCharacterClass(class UPlayerCharacterID* characterID);
		void BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ITM_Loadout_PerksEquip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
