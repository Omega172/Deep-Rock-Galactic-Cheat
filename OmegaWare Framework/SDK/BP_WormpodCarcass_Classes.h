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
	 * BlueprintGeneratedClass BP_WormpodCarcass.BP_WormpodCarcass_C
	 * Size -> 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
	 */
	class ABP_WormpodCarcass_C : public ABP_DropToTerrainDebris_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOutlineComponent*                                   outline;                                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USimpleHealthComponent*                              SimpleHealth;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__BP_WormpodCarcas_DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_WormpodCarcass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
