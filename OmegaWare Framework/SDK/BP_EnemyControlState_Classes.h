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
	 * BlueprintGeneratedClass BP_EnemyControlState.BP_EnemyControlState_C
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UBP_EnemyControlState_C : public UEnemyControlStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        GetOnMontage;                                            // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName);
		void OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName);
		void OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName);
		void OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName);
		void OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName);
		void OnControllingEnemy(bool IsControlling);
		void OnControllingEnemyAttached();
		void ExecuteUbergraph_BP_EnemyControlState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
