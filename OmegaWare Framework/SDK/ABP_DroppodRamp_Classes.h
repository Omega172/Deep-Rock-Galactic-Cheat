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
	 * AnimBlueprintGeneratedClass ABP_DroppodRamp.ABP_DroppodRamp_C
	 * Size -> 0x03E8 (FullSize[0x06A8] - InheritedSize[0x02C0])
	 */
	class UABP_DroppodRamp_C : public UMiningPodAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0370(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x0398(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x03E8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0418(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0468(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0498(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0518(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0548(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x05C8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x05F8(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_41AF7652437F3C10561791958CD250B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_4C3FEBDE4E195AF67C9CDBA7D7290FAA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_D963559D4F7D338C844A7B8D11940AE4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_B178AD27426F23F1EE7CCFBBAE4B7D38();
		void ExecuteUbergraph_ABP_DroppodRamp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
