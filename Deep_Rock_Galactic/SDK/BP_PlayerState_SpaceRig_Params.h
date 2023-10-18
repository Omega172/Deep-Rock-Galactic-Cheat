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
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue
	 */
	struct ABP_PlayerState_SpaceRig_C_GetMissionStatValue_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                StatValue;                                               // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       Valid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E6SD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData
	 */
	struct ABP_PlayerState_SpaceRig_C_SendMissionStatData_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GULA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat
	 */
	struct ABP_PlayerState_SpaceRig_C_UpdateMissionStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K5DJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat
	 */
	struct ABP_PlayerState_SpaceRig_C_IsListeningToMissionStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasStat;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_254H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats
	 */
	struct ABP_PlayerState_SpaceRig_C_OnRep_MissionStats_Params
	{	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
	 */
	struct ABP_PlayerState_SpaceRig_C_GetHealthInsuranceStatus_Params
	{
	public:
		int32_t                                                    HealthInsuranceStatus;                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
	 */
	struct ABP_PlayerState_SpaceRig_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
	 */
	struct ABP_PlayerState_SpaceRig_C_WatchStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerState_SpaceRig_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
	 */
	struct ABP_PlayerState_SpaceRig_C_CheckCampaign_Params
	{	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged
	 */
	struct ABP_PlayerState_SpaceRig_C_OnMissionStatChanged_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionStat*                                        MissionStat;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat
	 */
	struct ABP_PlayerState_SpaceRig_C_Server_UpdateStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StatValue;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
	 */
	struct ABP_PlayerState_SpaceRig_C_ExecuteUbergraph_BP_PlayerState_SpaceRig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XRWG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
	 */
	struct ABP_PlayerState_SpaceRig_C_OnStatChange__DelegateSignature_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                StatValue;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
