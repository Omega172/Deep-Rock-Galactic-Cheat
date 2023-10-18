#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C
	 * Size -> 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
	 */
	class UEndScreenActorController_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPlayerTPAnimInstance*                               AnimInstance;                                            // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkPlayRate;                                            // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LME6[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_MisComp_FXspawner_C*                             FX;                                                      // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       RandomStream;                                            // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		class UClass*                                              AttachmentClass;                                         // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              AttachmentActor;                                         // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PosePlayRate;                                            // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7VSW[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransfrom;                                          // 0x00F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLooping;                                               // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZLW[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEndScreenMove                                      ActiveMoveSet;                                           // 0x0128(0x0048) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void Reset();
		void SpawnAttachmentIfNeeded();
		void Cleanup();
		void InitFXLights(const struct FTransform& SpawnTransform, bool Survived);
		void RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output);
		void ReceiveBeginPlay();
		void Play(class APlayerCharacter* PlayerCharacter, bool SurvivedInPod, const struct FTransform& SpawnTransform, const struct FEndScreenMove& ESMoveSet, int32_t Seed);
		void PoseFinished(class UAnimMontage* Montage, bool bInterrupted);
		void BreakFinished(class UAnimMontage* Montage, bool bInterrupted);
		void WalkFinished(class UAnimMontage* Montage, bool bInterrupted);
		void PropPoseDone(class UAnimMontage* Montage, bool bInterrupted);
		void CustomEvent_1(class UAnimMontage* Montage, bool bInterrupted);
		void ExecuteUbergraph_EndScreenActorController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
