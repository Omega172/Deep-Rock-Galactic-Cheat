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
	 * BlueprintGeneratedClass TSK_FleeFrom.TSK_FleeFrom_C
	 * Size -> 0x003C (FullSize[0x00E4] - InheritedSize[0x00A8])
	 */
	class UTSK_FleeFrom_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              DangerKey;                                               // 0x00B0(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      Distance;                                                // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitAfterFleeing;                                        // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomWaitTime;                                          // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FVector GetDanagerLocation();
		void SetFleeFalse(class AController* Controller);
		void OutsideDanger(class AActor* Pawn, bool* res);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void PathDone(bool success);
		void RefreshDest();
		void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_TSK_FleeFrom(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
