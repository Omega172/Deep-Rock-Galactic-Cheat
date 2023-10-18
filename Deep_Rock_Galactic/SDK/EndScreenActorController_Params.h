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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EndScreenActorController.EndScreenActorController_C.Reset
	 */
	struct UEndScreenActorController_C_Reset_Params
	{	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.SpawnAttachmentIfNeeded
	 */
	struct UEndScreenActorController_C_SpawnAttachmentIfNeeded_Params
	{	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.Cleanup
	 */
	struct UEndScreenActorController_C_Cleanup_Params
	{	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.InitFXLights
	 */
	struct UEndScreenActorController_C_InitFXLights_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       Survived;                                                // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C4P5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.RandomAnimElement
	 */
	struct UEndScreenActorController_C_RandomAnimElement_Params
	{
	public:
		TArray<class UAnimSequence*>                               Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UAnimSequence*                                       Output;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.ReceiveBeginPlay
	 */
	struct UEndScreenActorController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.Play
	 */
	struct UEndScreenActorController_C_Play_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SurvivedInPod;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RI10[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FEndScreenMove                                      ESMoveSet;                                               // 0x0040(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    Seed;                                                    // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.PoseFinished
	 */
	struct UEndScreenActorController_C_PoseFinished_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.BreakFinished
	 */
	struct UEndScreenActorController_C_BreakFinished_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.WalkFinished
	 */
	struct UEndScreenActorController_C_WalkFinished_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.PropPoseDone
	 */
	struct UEndScreenActorController_C_PropPoseDone_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.CustomEvent_1
	 */
	struct UEndScreenActorController_C_CustomEvent_1_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EndScreenActorController.EndScreenActorController_C.ExecuteUbergraph_EndScreenActorController
	 */
	struct UEndScreenActorController_C_ExecuteUbergraph_EndScreenActorController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
