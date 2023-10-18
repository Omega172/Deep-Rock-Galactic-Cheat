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
	 * Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim
	 */
	struct UEndScreenSetups_C_GetRandomWalkAnim_Params
	{
	public:
		class UVictoryPose*                                        VicPose;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRandomStream                                       RandStream;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_A41Q[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims
	 */
	struct UEndScreenSetups_C_LoadVictoryAnims_Params
	{
	public:
		class UVictoryPose*                                        InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRandomStream                                       RandStream;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FEndScreenMove                                      EndScreenMove;                                           // 0x0010(0x0048)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.LoadActorClass
	 */
	struct UEndScreenSetups_C_LoadActorClass_Params
	{
	public:
		unsigned char                                              UnknownData_LMRD[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Hard;                                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray
	 */
	struct UEndScreenSetups_C_LoadAnimSeqArray_Params
	{
	public:
		unsigned char                                              UnknownData_73AN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimSequence*>                               Hard;                                                    // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq
	 */
	struct UEndScreenSetups_C_LoadAnimSeq_Params
	{
	public:
		unsigned char                                              UnknownData_23WX[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Hard;                                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims
	 */
	struct UEndScreenSetups_C_SplitMoveSetAnims_Params
	{
	public:
		unsigned char                                              UnknownData_EHBG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Selected1;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WOK4[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.ResetMovesets
	 */
	struct UEndScreenSetups_C_ResetMovesets_Params
	{
	public:
		int32_t                                                    NewSeed;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet
	 */
	struct UEndScreenSetups_C_RandomWeightedMoveSet_Params
	{
	public:
		TArray<struct FEndScreenMoveSet>                           Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEndScreenMove                                      Selected;                                                // 0x0010(0x0048)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet
	 */
	struct UEndScreenSetups_C_GetEndScreenMoveSet_Params
	{
	public:
		bool                                                       Survived;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TURL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVictoryPose*                                        VictPose;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRandomStream                                       RandStream;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FEndScreenMove                                      Selected;                                                // 0x0018(0x0048)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement
	 */
	struct UEndScreenSetups_C_RandomAnimElement_Params
	{
	public:
		TArray<class UAnimSequence*>                               Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UAnimSequence*                                       Output;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
