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
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnMovieLoaded
	 */
	struct UITM_DeepDives_Launcher_C_OnMovieLoaded_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetBestTime
	 */
	struct UITM_DeepDives_Launcher_C_SetBestTime_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetPersonalBest
	 */
	struct UITM_DeepDives_Launcher_C_SetPersonalBest_Params
	{
	public:
		int32_t                                                    TotalSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.UpdateBiomeQuote
	 */
	struct UITM_DeepDives_Launcher_C_UpdateBiomeQuote_Params
	{
	public:
		class UDeepDive*                                           InDeepDive;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetButtonsEnabled
	 */
	struct UITM_DeepDives_Launcher_C_SetButtonsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TRK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisabledExplanation;                                     // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Refresh
	 */
	struct UITM_DeepDives_Launcher_C_Refresh_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.GetDeepDive
	 */
	struct UITM_DeepDives_Launcher_C_GetDeepDive_Params
	{
	public:
		class UDeepDive*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetMovie
	 */
	struct UITM_DeepDives_Launcher_C_SetMovie_Params
	{
	public:
		class UMediaSource*                                        InMovie;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.PreConstruct
	 */
	struct UITM_DeepDives_Launcher_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.Construct
	 */
	struct UITM_DeepDives_Launcher_C_Construct_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.SetHovered
	 */
	struct UITM_DeepDives_Launcher_C_SetHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnFocusLost
	 */
	struct UITM_DeepDives_Launcher_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.ExecuteUbergraph_ITM_DeepDives_Launcher
	 */
	struct UITM_DeepDives_Launcher_C_ExecuteUbergraph_ITM_DeepDives_Launcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZI2U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnRefresh__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_OnRefresh__DelegateSignature_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnJoinMission__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_OnJoinMission__DelegateSignature_Params
	{
	public:
		bool                                                       EliteDeepDive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C.OnStartMission__DelegateSignature
	 */
	struct UITM_DeepDives_Launcher_C_OnStartMission__DelegateSignature_Params
	{
	public:
		class UDeepDive*                                           DeepDive;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
