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
	 * Function BP_GameState.BP_GameState_C.GetAnimSharingAssets
	 */
	struct ABP_GameState_C_GetAnimSharingAssets_Params
	{
	public:
		unsigned char                                              UnknownData_GO5V[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_DKRT[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameState.BP_GameState_C.GetPlayableCharacterIDs
	 */
	struct ABP_GameState_C_GetPlayableCharacterIDs_Params
	{
	public:
		TArray<class UPlayerCharacterID*>                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.GetRandomIntialHero
	 */
	struct ABP_GameState_C_GetRandomIntialHero_Params
	{
	public:
		class UPlayerCharacterID*                                  HeroClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.UserConstructionScript
	 */
	struct ABP_GameState_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
	 */
	struct ABP_GameState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.StartGame
	 */
	struct ABP_GameState_C_StartGame_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent
	 */
	struct ABP_GameState_C_HandleSeamlessTravelEvent_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ReceiveTick
	 */
	struct ABP_GameState_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.CustomEvent_1
	 */
	struct ABP_GameState_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
	 */
	struct ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W7XS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
