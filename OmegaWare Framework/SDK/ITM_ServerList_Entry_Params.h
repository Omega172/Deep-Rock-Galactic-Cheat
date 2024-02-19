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
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetServerID
	 */
	struct UITM_ServerList_Entry_C_GetServerID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetHovered
	 */
	struct UITM_ServerList_Entry_C_SetHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OpenProfile
	 */
	struct UITM_ServerList_Entry_C_OpenProfile_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetServername
	 */
	struct UITM_ServerList_Entry_C_SetServername_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnMouseButtonUp
	 */
	struct UITM_ServerList_Entry_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnKeyUp
	 */
	struct UITM_ServerList_Entry_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionNameWidth
	 */
	struct UITM_ServerList_Entry_C_SetMissionNameWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetVisibleElements
	 */
	struct UITM_ServerList_Entry_C_SetVisibleElements_Params
	{
	public:
		bool                                                       InShowComplexity;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InShowDifficulty;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InShowLength;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InShowTime;                                              // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InShowWarningsAndMutators;                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip
	 */
	struct UITM_ServerList_Entry_C_GetMissionToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths
	 */
	struct UITM_ServerList_Entry_C_SetColumnWidths_Params
	{
	public:
		TArray<float>                                              InWidths;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails
	 */
	struct UITM_ServerList_Entry_C_ToggleMissionDetails_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission
	 */
	struct UITM_ServerList_Entry_C_SetNoMission_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon
	 */
	struct UITM_ServerList_Entry_C_SetBiomeIcon_Params
	{
	public:
		class UBiome*                                              Biome;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetupWarningsMutators
	 */
	struct UITM_ServerList_Entry_C_SetupWarningsMutators_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime
	 */
	struct UITM_ServerList_Entry_C_UpdateMissionTime_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession
	 */
	struct UITM_ServerList_Entry_C_SetSession_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct
	 */
	struct UITM_ServerList_Entry_C_Construct_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1
	 */
	struct UITM_ServerList_Entry_C_CustomEvent_1_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct
	 */
	struct UITM_ServerList_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_ServerList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry
	 */
	struct UITM_ServerList_Entry_C_ExecuteUbergraph_ITM_ServerList_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnUnhovered__DelegateSignature
	 */
	struct UITM_ServerList_Entry_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UITM_ServerList_Entry_C*                             InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.OnHovered__DelegateSignature
	 */
	struct UITM_ServerList_Entry_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UITM_ServerList_Entry_C*                             InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature
	 */
	struct UITM_ServerList_Entry_C_JoinServer__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
