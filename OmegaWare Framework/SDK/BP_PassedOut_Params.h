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
	 * Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
	 */
	struct UBP_PassedOut_C_AllPassedOut_Params
	{
	public:
		bool                                                       AllPassedOut;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YYI3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay
	 */
	struct UBP_PassedOut_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack
	 */
	struct UBP_PassedOut_C_BeginFadeToBlack_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter
	 */
	struct UBP_PassedOut_C_ReceiveStateEnter_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit
	 */
	struct UBP_PassedOut_C_ReceiveStateExit_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box
	 */
	struct UBP_PassedOut_C_TurnOffJukeBox_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs
	 */
	struct UBP_PassedOut_C_RemoveDrinkingMugs_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut
	 */
	struct UBP_PassedOut_C_ReceiveTeamPassedOut_Params
	{	};

	/**
	 * Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
	 */
	struct UBP_PassedOut_C_ExecuteUbergraph_BP_PassedOut_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
