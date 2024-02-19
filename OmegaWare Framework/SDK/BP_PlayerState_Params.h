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
	 * Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward
	 */
	struct ABP_PlayerState_C_GetDeepDiveCreditsReward_Params
	{
	public:
		int32_t                                                    StagesCompleted;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    goldCollected;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FCreditsReward>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass
	 */
	struct ABP_PlayerState_C_GetRessupyBeaconClass_Params
	{
	public:
		class UClass*                                              PodSpawnClass;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass
	 */
	struct ABP_PlayerState_C_GetRessuplySpawnClass_Params
	{
	public:
		class UClass*                                              PodSpawnClass;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod
	 */
	struct ABP_PlayerState_C_SpawnPlayerInPod_Params
	{
	public:
		class AFSDPlayerController*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly
	 */
	struct ABP_PlayerState_C_SpawnPlayerDirectly_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946
	 */
	struct ABP_PlayerState_C_OnLoaded_E2B28351414D5B2A20966496F0955946_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857
	 */
	struct ABP_PlayerState_C_OnLoaded_97A4F0694E71C770F24EA6A654B14857_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished
	 */
	struct ABP_PlayerState_C_OnLateJoinFinished_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.LogState
	 */
	struct ABP_PlayerState_C_LogState_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.CharacterSelected
	 */
	struct ABP_PlayerState_C_CharacterSelected_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.TestLatjoin
	 */
	struct ABP_PlayerState_C_TestLatjoin_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer
	 */
	struct ABP_PlayerState_C_RespawnPlayer_Params
	{	};

	/**
	 * Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
	 */
	struct ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K93[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
