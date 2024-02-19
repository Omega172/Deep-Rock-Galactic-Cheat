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
	 * Function WND_KPI.WND_KPI_C.OnKeyDown
	 */
	struct UWND_KPI_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_KPI.WND_KPI_C.SelectNextTab
	 */
	struct UWND_KPI_C_SelectNextTab_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_KPI.WND_KPI_C.OnKeyUp
	 */
	struct UWND_KPI_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_KPI.WND_KPI_C.SelectTab
	 */
	struct UWND_KPI_C_SelectTab_Params
	{
	public:
		class UBasic_ButtonTab_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_KPI_Tab_C*                                       Content;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UWND_KPI_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_KPI_C_BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_KPI_C_BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.SelectStatistics
	 */
	struct UWND_KPI_C_SelectStatistics_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature
	 */
	struct UWND_KPI_C_BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature_Params
	{
	public:
		bool                                                       HasClaimable;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_KPI.WND_KPI_C.Close Window
	 */
	struct UWND_KPI_C_CloseWindow_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.OnShown
	 */
	struct UWND_KPI_C_OnShown_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.PreConstruct
	 */
	struct UWND_KPI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_KPI.WND_KPI_C.selectperks
	 */
	struct UWND_KPI_C_selectperks_Params
	{	};

	/**
	 * Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI
	 */
	struct UWND_KPI_C_ExecuteUbergraph_WND_KPI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
