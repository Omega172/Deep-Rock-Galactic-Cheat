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
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry
	 */
	struct AWPN_DetPack_Detonator_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript
	 */
	struct AWPN_DetPack_Detonator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing
	 */
	struct AWPN_DetPack_Detonator_C_RecieveStartUsing_Params
	{	};

	/**
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped
	 */
	struct AWPN_DetPack_Detonator_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply
	 */
	struct AWPN_DetPack_Detonator_C_ReceiveResupply_Params
	{
	public:
		float                                                      percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut
	 */
	struct AWPN_DetPack_Detonator_C_Receive_OnRep_IsDetonatorOut_Params
	{	};

	/**
	 * Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator
	 */
	struct AWPN_DetPack_Detonator_C_ExecuteUbergraph_WPN_DetPack_Detonator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
