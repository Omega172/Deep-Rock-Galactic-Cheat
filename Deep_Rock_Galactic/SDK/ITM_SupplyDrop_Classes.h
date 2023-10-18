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
	 * BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C
	 * Size -> 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
	 */
	class AITM_SupplyDrop_C : public ARessuplyPodItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AItemMarker*                                         Marker;                                                  // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOnScreenIndicator_SupplyDrop_Order_C*               Widget;                                                  // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RecieveCycledItem();
		void RecieveEquipped();
		void OnMarkerSpawned_Event(class AItemMarker* Marker);
		void UpdateWidget();
		void ReceiveItemPlacerSpawned(class UItemPlacerAggregator* InItemPlacer);
		void ExecuteUbergraph_ITM_SupplyDrop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
