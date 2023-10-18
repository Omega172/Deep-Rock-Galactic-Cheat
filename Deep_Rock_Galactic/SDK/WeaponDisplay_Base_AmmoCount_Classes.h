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
	 * WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UWeaponDisplay_Base_AmmoCount_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UItemAggregator*                                     Aggregator;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AItem*                                               Item;                                                    // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgComp;                                                // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetMaxAmmo(int32_t Value);
		void RequestRedraw();
		void SetTotalCount(int32_t Value);
		void SetClipCount(int32_t Value);
		void OnTotalAmountChanged(int32_t Amount);
		void OnClipAmountChanged(int32_t Amount);
		void OnCarriedAmountChanged(int32_t Amount);
		void OnTotalAmountChange(int32_t Amount);
		void InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp);
		void OnReloadStarted();
		void OnReloadComplete();
		void MaxAmmoChanged(int32_t Amount);
		void TotalAmmoleftchanged(int32_t Amount);
		void ReloadTimeTick(float Amount);
		void OnItemUnequipped();
		void OnItemEquipped();
		void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
