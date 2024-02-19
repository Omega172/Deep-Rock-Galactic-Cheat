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
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart
	 */
	struct ABP_SpaceRig_Gamemode_C_PlayerCanRestart_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CU5O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics
	 */
	struct ABP_SpaceRig_Gamemode_C_SendMissionStartAnalytics_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass
	 */
	struct ABP_SpaceRig_Gamemode_C_SelectRandomAvailableClass_Params
	{
	public:
		class AFSDPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart
	 */
	struct ABP_SpaceRig_Gamemode_C_ChoosePlayerStart_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState
	 */
	struct ABP_SpaceRig_Gamemode_C_GetGameState_Params
	{
	public:
		class ABP_GameState_SpaceRig_C*                            GameState;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController
	 */
	struct ABP_SpaceRig_Gamemode_C_GetDefaultPawnClassForController_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55
	 */
	struct ABP_SpaceRig_Gamemode_C_OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55
	 */
	struct ABP_SpaceRig_Gamemode_C_OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_509E599D4BB91C15BA2979B190501E9F
	 */
	struct ABP_SpaceRig_Gamemode_C_OnFailure_509E599D4BB91C15BA2979B190501E9F_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_509E599D4BB91C15BA2979B190501E9F
	 */
	struct ABP_SpaceRig_Gamemode_C_OnSuccess_509E599D4BB91C15BA2979B190501E9F_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay
	 */
	struct ABP_SpaceRig_Gamemode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete
	 */
	struct ABP_SpaceRig_Gamemode_C_OnCountdownComplete_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout
	 */
	struct ABP_SpaceRig_Gamemode_C_K2_OnLogout_Params
	{
	public:
		class AController*                                         ExitingController;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer
	 */
	struct ABP_SpaceRig_Gamemode_C_K2_OnRestartPlayer_Params
	{
	public:
		class AController*                                         NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady
	 */
	struct ABP_SpaceRig_Gamemode_C_ControllerReady_Params
	{
	public:
		class AFSDPlayerController*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission
	 */
	struct ABP_SpaceRig_Gamemode_C_InstantlyStartMission_Params
	{	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.On online privilige checked
	 */
	struct ABP_SpaceRig_Gamemode_C_Ononlinepriviligechecked_Params
	{
	public:
		class APlayerState*                                        CheckedPlayerState;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintableUserPrivileges                               CheckedPrivilege;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintablePrivilegeResults                             PrivilegeResult;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode
	 */
	struct ABP_SpaceRig_Gamemode_C_ExecuteUbergraph_BP_SpaceRig_Gamemode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SN4Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
