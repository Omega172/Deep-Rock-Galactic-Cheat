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
	 * AnimBlueprintGeneratedClass ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C
	 * Size -> 0x040C (FullSize[0x06EC] - InheritedSize[0x02E0])
	 */
	class UABP_SentryGun_Engineer_C : public USentryGunAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02E8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0318(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0368(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0398(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0448(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0550(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0570(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0590(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0698(0x0048)
		class UAnimSequenceBase*                                   FoldOutSequence;                                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoldOutLength;                                           // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C();
		void BlueprintBeginPlay();
		void ExecuteUbergraph_ABP_SentryGun_Engineer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
