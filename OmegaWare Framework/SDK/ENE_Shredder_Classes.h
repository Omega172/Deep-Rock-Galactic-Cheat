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
	 * BlueprintGeneratedClass ENE_Shredder.ENE_Shredder_C
	 * Size -> 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
	 */
	class AENE_Shredder_C : public AENE_Shredder_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEnemyComponent*                                     enemy;                                                   // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnFrozen(class AActor* Source);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_ENE_Shredder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
