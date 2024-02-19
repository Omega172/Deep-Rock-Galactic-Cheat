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
	 * BlueprintGeneratedClass MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class AMAG_Flamethrower_BottleTP_C : public AMagazine
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool OnSpawnRelease_Attached(class AActor* Parent);
		bool OnSpawnRelease_Released();
		void DoRelease();
		void OnItemSkinned(class USkinEffect* Skin);
		void ExecuteUbergraph_MAG_Flamethrower_BottleTP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
