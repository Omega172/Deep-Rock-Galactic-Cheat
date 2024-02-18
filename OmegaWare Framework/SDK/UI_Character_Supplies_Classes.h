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
	 * WidgetBlueprintGeneratedClass UI_Character_Supplies.UI_Character_Supplies_C
	 * Size -> 0x001A (FullSize[0x027A] - InheritedSize[0x0260])
	 */
	class UUI_Character_Supplies_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_SupplyBar_C*                                    ITM_SupplyBar_Ammo;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_SupplyBar_C*                                    ITM_SupplyBar_Health;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       SuppliesVisible;                                         // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HealthVisible;                                           // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HandleVisiblity();
		void SetData(class AFSDPlayerState* Player);
		void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_Character_Supplies(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
