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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.MakeVanity
	 */
	struct ALVL_CharacterSelection_C_MakeVanity_Params
	{
	public:
		bool                                                       UseSleves;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SZ8B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEquippedVanity                                     UseSleveless;                                            // 0x0008(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence
	 */
	struct ALVL_CharacterSelection_C_PlaySpecificSequence_Params
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
	 */
	struct ALVL_CharacterSelection_C_StopPlayer_Params
	{	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
	 */
	struct ALVL_CharacterSelection_C_StartPlayer_Params
	{
	public:
		ECharselectionCameraLocation                               CamSetting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YC2T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
	 */
	struct ALVL_CharacterSelection_C_StopPlay_Params
	{	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay
	 */
	struct ALVL_CharacterSelection_C_StartPlay_Params
	{
	public:
		ECharselectionCameraLocation                               selectionLocation;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq
	 */
	struct ALVL_CharacterSelection_C_StartLevelSeq_Params
	{
	public:
		class ULevelSequence*                                      CharacterLevelSequence;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
	 */
	struct ALVL_CharacterSelection_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveDestroyed
	 */
	struct ALVL_CharacterSelection_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
	 */
	struct ALVL_CharacterSelection_C_ExecuteUbergraph_LVL_CharacterSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J4SI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
