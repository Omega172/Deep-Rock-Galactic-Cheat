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
	 * BlueprintGeneratedClass WPN_Crossbow.WPN_Crossbow_C
	 * Size -> 0x0028 (FullSize[0x0910] - InheritedSize[0x08E8])
	 */
	class AWPN_Crossbow_C : public ACrossbow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFirstPersonWidgetComponent*                         FirstPersonWidget;                                       // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x08F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileLauncherComponent*                        projectileLauncher;                                      // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetReloadStat(class AFSDPlayerState* PlayerState, struct FGearStatEntry* GearStatEntry);
		void GetEquippedSpecialArrow(class AFSDPlayerState* Player, class UClass** Projectile);
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void ReceiveBeginPlay();
		void UpdateRecallProgress();
		void SetAnimatedFPMeshComponentFromBP(class AActor* animatedArrow);
		void SetAnimatedTPMeshComponentFromBP(class AActor* animatedArrow);
		void ExecuteUbergraph_WPN_Crossbow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
