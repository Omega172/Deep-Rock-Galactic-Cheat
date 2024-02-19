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
	 * Function BP_GameMode.BP_GameMode_C.GetEditorCharacterClass
	 */
	struct ABP_GameMode_C_GetEditorCharacterClass_Params
	{
	public:
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.PreloadMuleClass
	 */
	struct ABP_GameMode_C_PreloadMuleClass_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu
	 */
	struct ABP_GameMode_C_TryPreloadCheatMenu_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation
	 */
	struct ABP_GameMode_C_GetEscapepodLocation_Params
	{
	public:
		struct FTransform                                          Location;                                                // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.EnableMuleButton
	 */
	struct ABP_GameMode_C_EnableMuleButton_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors
	 */
	struct ABP_GameMode_C_DestroyNetworkedActors_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.LoadToMission
	 */
	struct ABP_GameMode_C_LoadToMission_Params
	{
	public:
		class UMissionTemplate*                                    mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController
	 */
	struct ABP_GameMode_C_GetDefaultPawnClassForController_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart
	 */
	struct ABP_GameMode_C_ChoosePlayerStart_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.RecieveEndLevel
	 */
	struct ABP_GameMode_C_RecieveEndLevel_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
	 */
	struct ABP_GameMode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.WaitForGeneration
	 */
	struct ABP_GameMode_C_WaitForGeneration_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded
	 */
	struct ABP_GameMode_C_Recieve_ContinueTimerEnded_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.Call DropPod
	 */
	struct ABP_GameMode_C_CallDropPod_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.Trigger End Wave
	 */
	struct ABP_GameMode_C_TriggerEndWave_Params
	{
	public:
		bool                                                       cancelAllWaves;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.SpawnBosco
	 */
	struct ABP_GameMode_C_SpawnBosco_Params
	{
	public:
		struct FTransform                                          Location;                                                // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.RemoveBosco
	 */
	struct ABP_GameMode_C_RemoveBosco_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn
	 */
	struct ABP_GameMode_C_HandleBoscoRespawn_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.OnPlayerLeave
	 */
	struct ABP_GameMode_C_OnPlayerLeave_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.Loaded
	 */
	struct ABP_GameMode_C_Loaded_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed
	 */
	struct ABP_GameMode_C_DonkeyButtonPressed_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.LoadSpaceRig
	 */
	struct ABP_GameMode_C_LoadSpaceRig_Params
	{	};

	/**
	 * Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
	 */
	struct ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHJO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
