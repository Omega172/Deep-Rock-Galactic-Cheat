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
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnKeyUp
	 */
	struct UWND_MisSel_MissionOptions_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleKeyUp
	 */
	struct UWND_MisSel_MissionOptions_C_HandleKeyUp_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutHandled;                                              // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DM9[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         OutReply;                                                // 0x0040(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty
	 */
	struct UWND_MisSel_MissionOptions_C_GetSelectedDifficulty_Params
	{
	public:
		class UDifficultySetting*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton
	 */
	struct UWND_MisSel_MissionOptions_C_UpdateConfirmButton_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked
	 */
	struct UWND_MisSel_MissionOptions_C_SetMissionLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4BRD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Explanation;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange
	 */
	struct UWND_MisSel_MissionOptions_C_HandleModeChange_Params
	{
	public:
		EMissionSelection_Mode                                     Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword
	 */
	struct UWND_MisSel_MissionOptions_C_GetPassword_Params
	{
	public:
		class FText                                                Password;                                                // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       HasPassword;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NUUA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly
	 */
	struct UWND_MisSel_MissionOptions_C_IsFriendsOnly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus
	 */
	struct UWND_MisSel_MissionOptions_C_UpdateHazardBonus_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78
	 */
	struct UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA994BEDE78_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78
	 */
	struct UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA994BEDE78_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D
	 */
	struct UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA9DC34619D_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D
	 */
	struct UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA9DC34619D_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct
	 */
	struct UWND_MisSel_MissionOptions_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct
	 */
	struct UWND_MisSel_MissionOptions_C_Construct_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode
	 */
	struct UWND_MisSel_MissionOptions_C_ShowMode_Params
	{
	public:
		EMissionSelection_Mode                                     Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission
	 */
	struct UWND_MisSel_MissionOptions_C_SetMission_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty
	 */
	struct UWND_MisSel_MissionOptions_C_ResetSelectedDifficulty_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetFocusDependentOnInputDevice
	 */
	struct UWND_MisSel_MissionOptions_C_SetFocusDependentOnInputDevice_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions
	 */
	struct UWND_MisSel_MissionOptions_C_ExecuteUbergraph_WND_MisSel_MissionOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartSoloMission__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_OnStartSoloMission__DelegateSignature_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_OnDifficultyChanged__DelegateSignature_Params
	{
	public:
		class UDifficultySetting*                                  NewDifficulty;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGeneratedMission*                                   mission;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_OnJoinMission__DelegateSignature_Params
	{	};

	/**
	 * Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature
	 */
	struct UWND_MisSel_MissionOptions_C_OnStartMission__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
