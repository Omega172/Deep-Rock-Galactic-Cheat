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
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState
	 */
	struct UITM_TopBar_CharacterLevel_C_FromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel
	 */
	struct UITM_TopBar_CharacterLevel_C_SetCharacterLevel_Params
	{
	public:
		int32_t                                                    CharacterLevel;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OBAP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct
	 */
	struct UITM_TopBar_CharacterLevel_C_Construct_Params
	{	};

	/**
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned
	 */
	struct UITM_TopBar_CharacterLevel_C_OnPlayerCharacterSpawned_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event
	 */
	struct UITM_TopBar_CharacterLevel_C_OnCharacterStatsChanged_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct
	 */
	struct UITM_TopBar_CharacterLevel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel
	 */
	struct UITM_TopBar_CharacterLevel_C_ExecuteUbergraph_ITM_TopBar_CharacterLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
