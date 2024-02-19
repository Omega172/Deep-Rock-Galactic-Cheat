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
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableMissions
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetAvailableMissions_Params
	{
	public:
		TArray<class UGeneratedMission*>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HighlightChallenges
	 */
	struct U_SCREEN_MissionSelectionMK3_C_HighlightChallenges_Params
	{
	public:
		TArray<class UObject*>                                     AssetReferences;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldHighlight;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCC1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USeasonChallenge*                                    Challenge;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ClearServerListMissionRestrictions_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan
	 */
	struct U_SCREEN_MissionSelectionMK3_C_UpdateMapPan_Params
	{
	public:
		bool                                                       SnapToMouse;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0UCK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones
	 */
	struct U_SCREEN_MissionSelectionMK3_C_CheckForNewZones_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetAvailableBiomes_Params
	{
	public:
		TArray<class UITM_MisSel_Biome_C*>                         AvailableBiomes1;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetMode_Params
	{
	public:
		EMissionSelection_Mode                                     Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ShouldEnableQuickJoin_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
	 */
	struct U_SCREEN_MissionSelectionMK3_C_HandleButtonVisibility_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetMission_CheckBiome_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetMission_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
	 */
	struct U_SCREEN_MissionSelectionMK3_C_IsMissionLocked_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OLHF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetActiveSelectionMode_Params
	{
	public:
		EMissionSelection_Mode                                     NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetController_Params
	{
	public:
		class ABP_PlayerController_SpaceRig_C*                     AsBPPlayerControllerSpaceRig;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
	 */
	struct U_SCREEN_MissionSelectionMK3_C_GetMissionBiome_Params
	{
	public:
		class UBiome*                                              Biome;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UITM_MisSel_Biome_C*                                 ArrayElement;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnFailure_ED6FBDF64F71976389535788275C482E_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnSuccess_ED6FBDF64F71976389535788275C482E_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
	 */
	struct U_SCREEN_MissionSelectionMK3_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
	 */
	struct U_SCREEN_MissionSelectionMK3_C_Construct_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
	 */
	struct U_SCREEN_MissionSelectionMK3_C_BiomeHovered_Params
	{
	public:
		class UITM_MisSel_Biome_C*                                 Biome;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
	 */
	struct U_SCREEN_MissionSelectionMK3_C_BiomeSelected_Params
	{
	public:
		class UITM_MisSel_Biome_C*                                 Biome;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ShowMission_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ShowPlanet_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
	 */
	struct U_SCREEN_MissionSelectionMK3_C_MissionHover_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHovering;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
	 */
	struct U_SCREEN_MissionSelectionMK3_C_StartMission_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnStartMission_Event_1_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ShowMode_Params
	{
	public:
		EMissionSelection_Mode                                     Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
	 */
	struct U_SCREEN_MissionSelectionMK3_C_Back_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ShowServerBrowser_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
	 */
	struct U_SCREEN_MissionSelectionMK3_C_InputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnShown_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
	 */
	struct U_SCREEN_MissionSelectionMK3_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
	 */
	struct U_SCREEN_MissionSelectionMK3_C_MissionSelected_Params
	{
	public:
		class UITM_MisSel_MissionMapIcon_C*                        mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission
	 */
	struct U_SCREEN_MissionSelectionMK3_C_StartSoloMission_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnClosed_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged
	 */
	struct U_SCREEN_MissionSelectionMK3_C_DifficultyChanged_Params
	{
	public:
		class UDifficultySetting*                                  NewDifficulty;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGeneratedMission*                                   mission;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan
	 */
	struct U_SCREEN_MissionSelectionMK3_C_StartupCameraPan_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartSoloMission
	 */
	struct U_SCREEN_MissionSelectionMK3_C_OnStartSoloMission_Params
	{	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature
	 */
	struct U_SCREEN_MissionSelectionMK3_C_BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature_Params
	{
	public:
		TArray<class UObject*>                                     AssetReferences;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InHovered;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J0M5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USeasonChallenge*                                    Challenge;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
	 */
	struct U_SCREEN_MissionSelectionMK3_C_ExecuteUbergraph__SCREEN_MissionSelectionMK3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5NN7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
