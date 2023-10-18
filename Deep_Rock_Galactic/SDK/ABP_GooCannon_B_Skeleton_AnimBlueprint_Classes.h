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
	 * AnimBlueprintGeneratedClass ABP_GooCannon_B_Skeleton_AnimBlueprint.ABP_GooCannon_B_Skeleton_AnimBlueprint_C
	 * Size -> 0x0A40 (FullSize[0x0D10] - InheritedSize[0x02D0])
	 */
	class UABP_GooCannon_B_Skeleton_AnimBlueprint_C : public UGooGunAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0308(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x0350(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0418(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x0498(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x0560(0x0050)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x05B0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0678(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x06F8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x07C0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x0840(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0890(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x08B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x08E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0908(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0930(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x09B0(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x09E0(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0A30(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0A60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0AE0(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0B10(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0B60(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0B90(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0C40(0x00C8)
		class UAnimMontage*                                        BarrelBoostMontage;                                      // 0x0D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E259F76345A0B619B66F21BD90BAE003();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_ApplyAdditive_7E5D13D445D959147B41D991B0367056();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2B74B9364BCD8EE1EE5CF1B04A9D384F();
		void AnimNotify_BarrelBoostBegin();
		void AnimNotify_BarrelBoostEnd();
		void BlueprintBeginPlay();
		void OnMontageEnded_Event_1(class UAnimMontage* Montage, bool bInterrupted);
		void ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
