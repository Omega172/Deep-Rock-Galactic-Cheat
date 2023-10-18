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
	 * Function HUD_PlayerPerks.HUD_PlayerPerks_C.SetCharacter
	 */
	struct UHUD_PlayerPerks_C_SetCharacter_Params
	{
	public:
		class APlayerCharacter*                                    InPlayerCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerPerks.HUD_PlayerPerks_C.Construct
	 */
	struct UHUD_PlayerPerks_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerPerks.HUD_PlayerPerks_C.ExecuteUbergraph_HUD_PlayerPerks
	 */
	struct UHUD_PlayerPerks_C_ExecuteUbergraph_HUD_PlayerPerks_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DCRC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
