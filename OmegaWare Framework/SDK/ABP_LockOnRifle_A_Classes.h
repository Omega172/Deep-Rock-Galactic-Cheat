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
	 * AnimBlueprintGeneratedClass ABP_LockOnRifle_A.ABP_LockOnRifle_A_C
	 * Size -> 0x0328 (FullSize[0x05E0] - InheritedSize[0x02B8])
	 */
	class UABP_LockOnRifle_A_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_BVC1[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0320(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0348(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0368(0x0108)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0470(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x04A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x04D0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0580(0x0048)
		struct FRotator                                            FrontRotation;                                           // 0x05C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasLockedTarget;                                         // 0x05D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AGUJ[0x3];                                   // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALockOnWeapon*                                       test;                                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetHasLockedTarget(bool HasLockedTarget);
		void SetRotation(const struct FRotator& WorldRotation);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206();
		void BlueprintBeginPlay();
		void OnRotationUpdated(bool hasTargetLockon, const struct FRotator& socketRotation);
		void ExecuteUbergraph_ABP_LockOnRifle_A(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
