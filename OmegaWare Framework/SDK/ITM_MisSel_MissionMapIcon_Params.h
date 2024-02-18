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
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutators
	 */
	struct UITM_MisSel_MissionMapIcon_C_SetMutators_Params
	{
	public:
		class UGeneratedMission*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState
	 */
	struct UITM_MisSel_MissionMapIcon_C_SetButtonState_Params
	{
	public:
		class UBasic_ButtonScalable2_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMissionSelection_Mode                                     Mode;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0CL2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton
	 */
	struct UITM_MisSel_MissionMapIcon_C_ShouldEnableSoloButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton
	 */
	struct UITM_MisSel_MissionMapIcon_C_ShouldEnableHostButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BXKR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton
	 */
	struct UITM_MisSel_MissionMapIcon_C_ShouldEnableJoinButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController
	 */
	struct UITM_MisSel_MissionMapIcon_C_GetPlayerController_Params
	{
	public:
		class ABP_PlayerController_SpaceRig_C*                     AsBPPlayerControllerSpaceRig;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions
	 */
	struct UITM_MisSel_MissionMapIcon_C_SelectOptions_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode
	 */
	struct UITM_MisSel_MissionMapIcon_C_GetActiveSelectionMode_Params
	{
	public:
		EMissionSelection_Mode                                     NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions
	 */
	struct UITM_MisSel_MissionMapIcon_C_GetNumberOfActiveMissions_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    sessions;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission
	 */
	struct UITM_MisSel_MissionMapIcon_C_HasMission_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData
	 */
	struct UITM_MisSel_MissionMapIcon_C_SetData_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UITM_MisSel_FullBiome_C*                             BiomeController;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset
	 */
	struct UITM_MisSel_MissionMapIcon_C_Reset_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect
	 */
	struct UITM_MisSel_MissionMapIcon_C_Unselect_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct
	 */
	struct UITM_MisSel_MissionMapIcon_C_Construct_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate
	 */
	struct UITM_MisSel_MissionMapIcon_C_ServerUpdate_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct
	 */
	struct UITM_MisSel_MissionMapIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
	 */
	struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent
	 */
	struct UITM_MisSel_MissionMapIcon_C_OnTeamMemberCampaignMissionChangedEvent_Params
	{	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShowChallengeIcon
	 */
	struct UITM_MisSel_MissionMapIcon_C_ShowChallengeIcon_Params
	{
	public:
		bool                                                       InHighlight;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TY1A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon
	 */
	struct UITM_MisSel_MissionMapIcon_C_ExecuteUbergraph_ITM_MisSel_MissionMapIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
