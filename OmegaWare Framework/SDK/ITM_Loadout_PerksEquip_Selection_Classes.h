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
	 * WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UITM_Loadout_PerksEquip_Selection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_Menu_ColorBar_C*                              Basic_Menu_ColorBar;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   ItemsGridBox;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SelectionTitle;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPerkClicked;                                           // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void Refresh(class UPlayerCharacterID* characterID, EPerkUsageType PerkType);
		void AddPerk(class UPerkAsset* Perk);
		void OnClicked_Event(class UITM_LoadOut_PerksEquip_Item_C* Item);
		void AddNone();
		void OnNoneClicked_Event();
		void AddWidgetToBox(class UUserWidget* InWidget);
		void ClearWidgetBox();
		void ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int32_t EntryPoint);
		void OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
