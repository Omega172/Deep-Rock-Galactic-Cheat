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
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.HandleKeyDown
	 */
	struct UITM_DeepDives_Start_C_HandleKeyDown_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutHandled;                                              // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P9BV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         OutReply;                                                // 0x0040(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnKeyDown
	 */
	struct UITM_DeepDives_Start_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.UpdateOptions
	 */
	struct UITM_DeepDives_Start_C_UpdateOptions_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5
	 */
	struct UITM_DeepDives_Start_C_OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5
	 */
	struct UITM_DeepDives_Start_C_OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnFailure_14795847495E51F942775B86C1C4BCCF
	 */
	struct UITM_DeepDives_Start_C_OnFailure_14795847495E51F942775B86C1C4BCCF_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnSuccess_14795847495E51F942775B86C1C4BCCF
	 */
	struct UITM_DeepDives_Start_C_OnSuccess_14795847495E51F942775B86C1C4BCCF_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Start Mission
	 */
	struct UITM_DeepDives_Start_C_StartMission_Params
	{
	public:
		class UDeepDive*                                           mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature_Params
	{
	public:
		class UDeepDive*                                           DeepDive;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature_Params
	{
	public:
		class UDeepDive*                                           DeepDive;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Open
	 */
	struct UITM_DeepDives_Start_C_Open_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature_Params
	{
	public:
		bool                                                       EliteDeepDive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature_Params
	{
	public:
		bool                                                       EliteDeepDive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.Construct
	 */
	struct UITM_DeepDives_Start_C_Construct_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.PreConstruct
	 */
	struct UITM_DeepDives_Start_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnTimeOut
	 */
	struct UITM_DeepDives_Start_C_OnTimeOut_Params
	{	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.RefreshTimeout
	 */
	struct UITM_DeepDives_Start_C_RefreshTimeout_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.ExecuteUbergraph_ITM_DeepDives_Start
	 */
	struct UITM_DeepDives_Start_C_ExecuteUbergraph_ITM_DeepDives_Start_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_Start.ITM_DeepDives_Start_C.OnJoinMission__DelegateSignature
	 */
	struct UITM_DeepDives_Start_C_OnJoinMission__DelegateSignature_Params
	{
	public:
		bool                                                       EliteDeepDive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
