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
	 * BlueprintGeneratedClass BP_PickaxeRandomizer.BP_PickaxeRandomizer_C
	 * Size -> 0x00E8 (FullSize[0x0308] - InheritedSize[0x0220])
	 */
	class ABP_PickaxeRandomizer_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Mesh_BladeFront;                                         // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Shaft;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Pommel;                                             // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Head;                                               // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Handle;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_BladeBack;                                          // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MeshesToLoad[0x10];                                      // 0x0260(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BladesFront[0x10];                                       // 0x0270(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BladesBack[0x10];                                        // 0x0280(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Heads[0x10];                                             // 0x0290(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Shafts[0x10];                                            // 0x02A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Handles[0x10];                                           // 0x02B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Pommels[0x10];                                           // 0x02C0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Materials[0x10];                                         // 0x02D0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ChosenMaterial[0x28];                                    // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SetStaticMesh(class UStaticMeshComponent* MeshComponent, int32_t Index);
		void SelectRandomMesh();
		void ReceiveBeginPlay();
		void Loaded();
		void LoadedMaterial();
		void ExecuteUbergraph_BP_PickaxeRandomizer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
