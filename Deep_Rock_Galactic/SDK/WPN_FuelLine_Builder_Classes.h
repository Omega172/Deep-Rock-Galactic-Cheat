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
	 * BlueprintGeneratedClass WPN_FuelLine_Builder.WPN_FuelLine_Builder_C
	 * Size -> 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
	 */
	class AWPN_FuelLine_Builder_C : public AFuelLineBuilderItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFirstPersonWidgetComponent*                         MonitorWidget;                                           // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetMonitorWidget(class UUI_FuelLine_Builder_C** MonitorUI);
		void ReceiveBeginPlaceSegment();
		void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
		void ExecuteUbergraph_WPN_FuelLine_Builder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
