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
	 * Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry
	 */
	struct AWPN_BurstPistol_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript
	 */
	struct AWPN_BurstPistol_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay
	 */
	struct AWPN_BurstPistol_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin
	 */
	struct AWPN_BurstPistol_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd
	 */
	struct AWPN_BurstPistol_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol
	 */
	struct AWPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3QH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
