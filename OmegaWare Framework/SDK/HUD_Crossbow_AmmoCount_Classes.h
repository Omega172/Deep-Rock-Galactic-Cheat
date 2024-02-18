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
	 * WidgetBlueprintGeneratedClass HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C
	 * Size -> 0x0032 (FullSize[0x029A] - InheritedSize[0x0268])
	 */
	class UHUD_Crossbow_AmmoCount_C : public UCustomAmmoCountWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimSwap;                                                // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHUD_Crossbow_AmmoCount_Row_C*                       Arrow_Active;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Crossbow_AmmoCount_Row_C*                       Arrow_Inactive;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ACrossbow*                                           Crossbow;                                                // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAmmoDriveWeaponAggregator*                          AmmoAggregator;                                          // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DefaultEquipped;                                         // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasSpecialArrow;                                         // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetArrowIcon(bool InDefaultArrow, class UTexture2D** OutTexture, bool* OutValid);
		void Refresh();
		void Finished_7D5D15E24B34D3D4466E3BA129F1FC49();
		void ReceiveItemSet();
		void OnAmmoCountChanged(int32_t Amount);
		void OnArrowTypeChanged(bool InDefaultArrow);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_HUD_Crossbow_AmmoCount(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
