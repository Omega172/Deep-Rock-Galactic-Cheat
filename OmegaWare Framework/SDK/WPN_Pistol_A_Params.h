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
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetTPAnimationEventMesh
	 */
	struct AWPN_Pistol_A_C_Receive_GetTPAnimationEventMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetFPAnimationEventMesh
	 */
	struct AWPN_Pistol_A_C_Receive_GetFPAnimationEventMesh_Params
	{
	public:
		class UFirstPersonStaticMeshComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.GetGearStatEntry
	 */
	struct AWPN_Pistol_A_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.UserConstructionScript
	 */
	struct AWPN_Pistol_A_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.ReceiveBeginPlay
	 */
	struct AWPN_Pistol_A_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadBegin
	 */
	struct AWPN_Pistol_A_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadEnd
	 */
	struct AWPN_Pistol_A_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.OnSkinChanged
	 */
	struct AWPN_Pistol_A_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Pistol_A.WPN_Pistol_A_C.ExecuteUbergraph_WPN_Pistol_A
	 */
	struct AWPN_Pistol_A_C_ExecuteUbergraph_WPN_Pistol_A_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6JPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
