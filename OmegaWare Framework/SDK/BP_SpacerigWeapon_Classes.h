﻿#pragma once

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
	 * BlueprintGeneratedClass BP_SpacerigWeapon.BP_SpacerigWeapon_C
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class ABP_SpacerigWeapon_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       NormalMesh;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       AnniversaryMesh;                                         // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_SpacerigWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif