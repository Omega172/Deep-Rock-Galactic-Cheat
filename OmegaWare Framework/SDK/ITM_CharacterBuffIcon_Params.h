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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.PreConstruct
	 */
	struct UITM_CharacterBuffIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.Construct
	 */
	struct UITM_CharacterBuffIcon_C_Construct_Params
	{	};

	/**
	 * Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.OnTemporaryBuffChanged
	 */
	struct UITM_CharacterBuffIcon_C_OnTemporaryBuffChanged_Params
	{
	public:
		class UTemporaryBuff*                                      buff;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    AffectedPlayer;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.ExecuteUbergraph_ITM_CharacterBuffIcon
	 */
	struct UITM_CharacterBuffIcon_C_ExecuteUbergraph_ITM_CharacterBuffIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HEH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
