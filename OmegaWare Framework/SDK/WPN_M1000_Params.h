﻿#pragma once

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
	 * Function WPN_M1000.WPN_M1000_C.GetGearStatEntry
	 */
	struct AWPN_M1000_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_M1000.WPN_M1000_C.UserConstructionScript
	 */
	struct AWPN_M1000_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay
	 */
	struct AWPN_M1000_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses
	 */
	struct AWPN_M1000_C_Recieve_UpdateMeshses_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_M1000.WPN_M1000_C.RecieveEquipped
	 */
	struct AWPN_M1000_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000
	 */
	struct AWPN_M1000_C_ExecuteUbergraph_WPN_M1000_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q7M0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
