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
	 * Function PLS_Base.PLS_Base_C.EnsureSafelandingsite
	 */
	struct APLS_Base_C_EnsureSafelandingsite_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.GetProceduralController
	 */
	struct APLS_Base_C_GetProceduralController_Params
	{
	public:
		class UProceduralController*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.SpawnCriticalItems
	 */
	struct APLS_Base_C_SpawnCriticalItems_Params
	{
	public:
		ECriticalItemPass                                          pass;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.HasSelectedCharacter
	 */
	struct APLS_Base_C_HasSelectedCharacter_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6BLR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PLS_Base.PLS_Base_C.CallGenerationComplete
	 */
	struct APLS_Base_C_CallGenerationComplete_Params
	{
	public:
		int32_t                                                    pass;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPLS_Passes                                                PLSPass;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
	 */
	struct APLS_Base_C_PlayMusicAndAmbient_Params
	{
	public:
		int32_t                                                    musicIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8LJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PLS_Base.PLS_Base_C.SaveInitialState
	 */
	struct APLS_Base_C_SaveInitialState_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.CreateCaveGraph
	 */
	struct APLS_Base_C_CreateCaveGraph_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.GetRandomRoom
	 */
	struct APLS_Base_C_GetRandomRoom_Params
	{
	public:
		TArray<class URoomGenerator*>                              Rooms;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       RemoveRoom;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LX8D[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URoomGenerator*                                      Room;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF
	 */
	struct APLS_Base_C_OnLoaded_11827D59481E498DEC10999DAE2915BF_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
	 */
	struct APLS_Base_C_OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
	 */
	struct APLS_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
	 */
	struct APLS_Base_C_BaseLayerCommitDone_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.FinalCommitDone
	 */
	struct APLS_Base_C_FinalCommitDone_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.CreateSpawn
	 */
	struct APLS_Base_C_CreateSpawn_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Graph
	 */
	struct APLS_Base_C_Generate_Graph_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_2
	 */
	struct APLS_Base_C_Generate_Pass_2_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_4
	 */
	struct APLS_Base_C_Generate_Pass_4_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Final Pass
	 */
	struct APLS_Base_C_FinalPass_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_5_Server
	 */
	struct APLS_Base_C_Generate_Pass_5_Server_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_5_Clients
	 */
	struct APLS_Base_C_Generate_Pass_5_Clients_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.GenerateLandscape
	 */
	struct APLS_Base_C_GenerateLandscape_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_5
	 */
	struct APLS_Base_C_Generate_Pass_5_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_8
	 */
	struct APLS_Base_C_Generate_Pass_8_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.BeginLiveGeneration
	 */
	struct APLS_Base_C_BeginLiveGeneration_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
	 */
	struct APLS_Base_C_OnPLSDataRecieved_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.AddRoomToInitialState
	 */
	struct APLS_Base_C_AddRoomToInitialState_Params
	{
	public:
		struct FRoomNode                                           RoomNode;                                                // 0x0000(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.CreateGraphSecondPass
	 */
	struct APLS_Base_C_CreateGraphSecondPass_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Tunnels
	 */
	struct APLS_Base_C_Generate_Tunnels_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.StartGenerationOnClient
	 */
	struct APLS_Base_C_StartGenerationOnClient_Params
	{
	public:
		class AFSDPlayerController*                                client;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.GenerateLandscapeFromData
	 */
	struct APLS_Base_C_GenerateLandscapeFromData_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NW2H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRoomNode>                                   Rooms;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FPathObstacle>                               Obstacles;                                               // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.CarveTunnels
	 */
	struct APLS_Base_C_CarveTunnels_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_1
	 */
	struct APLS_Base_C_Generate_Pass_1_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_0_Client
	 */
	struct APLS_Base_C_Generate_Pass_0_Client_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.OnCarverDataRecieved
	 */
	struct APLS_Base_C_OnCarverDataRecieved_Params
	{
	public:
		EDebrisItemPass                                            pass;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_3
	 */
	struct APLS_Base_C_Generate_Pass_3_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_Pass_7
	 */
	struct APLS_Base_C_Generate_Pass_7_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass
	 */
	struct APLS_Base_C_Generate_CriticalLargePass_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass_Client
	 */
	struct APLS_Base_C_Generate_CriticalLargePass_Client_Params
	{	};

	/**
	 * Function PLS_Base.PLS_Base_C.StartMusicAndAmbient
	 */
	struct APLS_Base_C_StartMusicAndAmbient_Params
	{
	public:
		int32_t                                                    Music;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
	 */
	struct APLS_Base_C_ExecuteUbergraph_PLS_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PLS_Base.PLS_Base_C.CompletedGenerationPass__DelegateSignature
	 */
	struct APLS_Base_C_CompletedGenerationPass__DelegateSignature_Params
	{
	public:
		int32_t                                                    pass;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPLS_Passes                                                PLSPass;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
