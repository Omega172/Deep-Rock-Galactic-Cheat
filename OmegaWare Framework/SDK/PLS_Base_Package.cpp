/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.EnsureSafelandingsite
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::EnsureSafelandingsite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.EnsureSafelandingsite");
		
		APLS_Base_C_EnsureSafelandingsite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.GetProceduralController
	 * 		Flags  -> ()
	 */
	class UProceduralController* APLS_Base_C::GetProceduralController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetProceduralController");
		
		APLS_Base_C_GetProceduralController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.SpawnCriticalItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECriticalItemPass                                  pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::SpawnCriticalItems(ECriticalItemPass pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SpawnCriticalItems");
		
		APLS_Base_C_SpawnCriticalItems_Params params {};
		params.pass = pass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.HasSelectedCharacter
	 * 		Flags  -> ()
	 */
	bool APLS_Base_C::HasSelectedCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.HasSelectedCharacter");
		
		APLS_Base_C_HasSelectedCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.CallGenerationComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPLS_Passes                                        PLSPass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::CallGenerationComplete(int32_t pass, EPLS_Passes PLSPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CallGenerationComplete");
		
		APLS_Base_C_CallGenerationComplete_Params params {};
		params.pass = pass;
		params.PLSPass = PLSPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            musicIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::PlayMusicAndAmbient(int32_t musicIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient");
		
		APLS_Base_C_PlayMusicAndAmbient_Params params {};
		params.musicIndex = musicIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.SaveInitialState
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::SaveInitialState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SaveInitialState");
		
		APLS_Base_C_SaveInitialState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.CreateCaveGraph
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::CreateCaveGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CreateCaveGraph");
		
		APLS_Base_C_CreateCaveGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.GetRandomRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class URoomGenerator*>                      Rooms                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               RemoveRoom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class URoomGenerator*                              Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::GetRandomRoom(TArray<class URoomGenerator*>* Rooms, bool RemoveRoom, class URoomGenerator** Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRandomRoom");
		
		APLS_Base_C_GetRandomRoom_Params params {};
		params.RemoveRoom = RemoveRoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rooms != nullptr)
			*Rooms = params.Rooms;
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void APLS_Base_C::OnLoaded_11827D59481E498DEC10999DAE2915BF(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF");
		
		APLS_Base_C_OnLoaded_11827D59481E498DEC10999DAE2915BF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void APLS_Base_C::OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8");
		
		APLS_Base_C_OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ReceiveBeginPlay");
		
		APLS_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::BaseLayerCommitDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.BaseLayerCommitDone");
		
		APLS_Base_C_BaseLayerCommitDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.FinalCommitDone
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::FinalCommitDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.FinalCommitDone");
		
		APLS_Base_C_FinalCommitDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.CreateSpawn
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::CreateSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CreateSpawn");
		
		APLS_Base_C_CreateSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Graph
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Graph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Graph");
		
		APLS_Base_C_Generate_Graph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_2
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_2");
		
		APLS_Base_C_Generate_Pass_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_4
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_4");
		
		APLS_Base_C_Generate_Pass_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Final Pass
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::FinalPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Final Pass");
		
		APLS_Base_C_FinalPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_5_Server
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_5_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_5_Server");
		
		APLS_Base_C_Generate_Pass_5_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_5_Clients
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_5_Clients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_5_Clients");
		
		APLS_Base_C_Generate_Pass_5_Clients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.GenerateLandscape
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::GenerateLandscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GenerateLandscape");
		
		APLS_Base_C_GenerateLandscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_5
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_5");
		
		APLS_Base_C_Generate_Pass_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_8
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_8");
		
		APLS_Base_C_Generate_Pass_8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.BeginLiveGeneration
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::BeginLiveGeneration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.BeginLiveGeneration");
		
		APLS_Base_C_BeginLiveGeneration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::OnPLSDataRecieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnPLSDataRecieved");
		
		APLS_Base_C_OnPLSDataRecieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.AddRoomToInitialState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRoomNode                                   RoomNode                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APLS_Base_C::AddRoomToInitialState(const struct FRoomNode& RoomNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.AddRoomToInitialState");
		
		APLS_Base_C_AddRoomToInitialState_Params params {};
		params.RoomNode = RoomNode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.CreateGraphSecondPass
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::CreateGraphSecondPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CreateGraphSecondPass");
		
		APLS_Base_C_CreateGraphSecondPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Tunnels
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Tunnels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Tunnels");
		
		APLS_Base_C_Generate_Tunnels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.StartGenerationOnClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerController*                        client                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::StartGenerationOnClient(class AFSDPlayerController* client)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.StartGenerationOnClient");
		
		APLS_Base_C_StartGenerationOnClient_Params params {};
		params.client = client;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.GenerateLandscapeFromData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FRoomNode>                           Rooms                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FPathObstacle>                       Obstacles                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APLS_Base_C::GenerateLandscapeFromData(int32_t Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GenerateLandscapeFromData");
		
		APLS_Base_C_GenerateLandscapeFromData_Params params {};
		params.Seed = Seed;
		params.Rooms = Rooms;
		params.Obstacles = Obstacles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.CarveTunnels
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::CarveTunnels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CarveTunnels");
		
		APLS_Base_C_CarveTunnels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_1
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_1");
		
		APLS_Base_C_Generate_Pass_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_0_Client
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_0_Client()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_0_Client");
		
		APLS_Base_C_Generate_Pass_0_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.OnCarverDataRecieved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebrisItemPass                                    pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::OnCarverDataRecieved(EDebrisItemPass pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnCarverDataRecieved");
		
		APLS_Base_C_OnCarverDataRecieved_Params params {};
		params.pass = pass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_3
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_3");
		
		APLS_Base_C_Generate_Pass_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_Pass_7
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_Pass_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_7");
		
		APLS_Base_C_Generate_Pass_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_CriticalLargePass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass");
		
		APLS_Base_C_Generate_CriticalLargePass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass_Client
	 * 		Flags  -> ()
	 */
	void APLS_Base_C::Generate_CriticalLargePass_Client()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass_Client");
		
		APLS_Base_C_Generate_CriticalLargePass_Client_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.StartMusicAndAmbient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Music                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::StartMusicAndAmbient(int32_t Music)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.StartMusicAndAmbient");
		
		APLS_Base_C_StartMusicAndAmbient_Params params {};
		params.Music = Music;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::ExecuteUbergraph_PLS_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base");
		
		APLS_Base_C_ExecuteUbergraph_PLS_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PLS_Base.PLS_Base_C.CompletedGenerationPass__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPLS_Passes                                        PLSPass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APLS_Base_C::CompletedGenerationPass__DelegateSignature(int32_t pass, EPLS_Passes PLSPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CompletedGenerationPass__DelegateSignature");
		
		APLS_Base_C_CompletedGenerationPass__DelegateSignature_Params params {};
		params.pass = pass;
		params.PLSPass = PLSPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APLS_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APLS_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PLS_Base.PLS_Base_C");
		return ptr;
	}

}


