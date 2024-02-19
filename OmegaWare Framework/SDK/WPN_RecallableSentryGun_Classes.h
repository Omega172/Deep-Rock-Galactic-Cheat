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
	 * BlueprintGeneratedClass WPN_RecallableSentryGun.WPN_RecallableSentryGun_C
	 * Size -> 0x0009 (FullSize[0x0499] - InheritedSize[0x0490])
	 */
	class AWPN_RecallableSentryGun_C : public ARecallableSentryGunItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ArcIndicatorActive;                                      // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void SetArcIndicatorActive(bool Active);
		void BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature(class AItemMarker* Marker);
		void ExecuteUbergraph_WPN_RecallableSentryGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
