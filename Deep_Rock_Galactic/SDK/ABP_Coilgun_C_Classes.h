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
	 * AnimBlueprintGeneratedClass ABP_Coilgun_C.ABP_Coilgun_C_C
	 * Size -> 0x0770 (FullSize[0x0AA0] - InheritedSize[0x0330])
	 */
	class UABP_Coilgun_C_C : public UCoilGunAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0338(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0368(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0470(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0490(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0598(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x06A0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x07A8(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x08B0(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x08F8(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0A00(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0A20(0x0080)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_47411E17468213778CE3CE90FB18B314();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_A234B9AB4187E4A72FF01880C8DF0BD1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_D52000684142EB812F43BBB2086C2382();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_93D5A0324101FDB427C876A962A971C3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_320E84354C147DA7739F42BD90C518D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_EC77A07D4B86C19CD1E3239DD8B86070();
		void ExecuteUbergraph_ABP_Coilgun_C(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
