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
	 * BlueprintGeneratedClass Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C
	 * Size -> 0x0018 (FullSize[0x03A8] - InheritedSize[0x0390])
	 */
	class ALoadout_GrenadeProxyBase_C : public ALoadoutItemProxy
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void RecieveEquipped();
		void RecieveUnequipped();
		void ExecuteUbergraph_Loadout_GrenadeProxyBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
