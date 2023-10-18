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
	 * Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.GetGearStatEntry
	 */
	struct AWPN_SawedOffShotgun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.UserConstructionScript
	 */
	struct AWPN_SawedOffShotgun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ReceiveBeginPlay
	 */
	struct AWPN_SawedOffShotgun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ExecuteUbergraph_WPN_SawedOffShotgun
	 */
	struct AWPN_SawedOffShotgun_C_ExecuteUbergraph_WPN_SawedOffShotgun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NIFB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
