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
	 * BlueprintGeneratedClass PRJ_BigGooProjectile.PRJ_BigGooProjectile_C
	 * Size -> 0x0028 (FullSize[0x03E0] - InheritedSize[0x03B8])
	 */
	class APRJ_BigGooProjectile_C : public APRJ_BaseBigGooProjectile_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_NewTrack_0_74F2130944154F0318A73A910B7DD01B;  // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_74F2130944154F0318A73A910B7DD01B;  // 0x03C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EQ28[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClusterEjectionForce;                                    // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0JNZ[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FragmentClass;                                           // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnSmallGoo(const struct FVector& InVec);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void SpawnSmallGooBalls(const struct FVector& ImpactNormal);
		void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
		void OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult);
		void OnInitialized();
		void ExecuteUbergraph_PRJ_BigGooProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
