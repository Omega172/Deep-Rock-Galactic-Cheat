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
	 * AnimBlueprintGeneratedClass ABP_MicrowaveGun_A.ABP_MicrowaveGun_A_C
	 * Size -> 0x05E8 (FullSize[0x08B8] - InheritedSize[0x02D0])
	 */
	class UABP_MicrowaveGun_A_C : public UAmmoDrivenWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0308(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0378(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0420(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0450(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0468(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0498(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0548(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0650(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0670(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0690(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0798(0x0108)
		float                                                      RotateAmount;                                            // 0x08A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotateSpeed;                                             // 0x08A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStartCharacterOverheat;                                // 0x08A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_StartCharacterOverheat();
		void ExecuteUbergraph_ABP_MicrowaveGun_A(int32_t EntryPoint);
		void OnStartCharacterOverheat__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
