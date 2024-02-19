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
	 * BlueprintGeneratedClass BP_TipJarUsable.BP_TipJarUsable_C
	 * Size -> 0x000C (FullSize[0x017C] - InheritedSize[0x0170])
	 */
	class UBP_TipJarUsable_C : public UBPInstantUsable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    TipAmount;                                               // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetUseText(class APlayerCharacter* User);
		bool BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider);
		void SetTipAmount(int32_t Credits);
		void ExecuteUbergraph_BP_TipJarUsable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
