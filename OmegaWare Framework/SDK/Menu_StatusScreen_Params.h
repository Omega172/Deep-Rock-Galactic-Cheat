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
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.Construct
	 */
	struct UMenu_StatusScreen_C_Construct_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.Update
	 */
	struct UMenu_StatusScreen_C_Update_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.Close
	 */
	struct UMenu_StatusScreen_C_Close_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature
	 */
	struct UMenu_StatusScreen_C_BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature
	 */
	struct UMenu_StatusScreen_C_BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature
	 */
	struct UMenu_StatusScreen_C_BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.PreConstruct
	 */
	struct UMenu_StatusScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMenu_StatusScreen_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature
	 */
	struct UMenu_StatusScreen_C_BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.RefreshShowroom
	 */
	struct UMenu_StatusScreen_C_RefreshShowroom_Params
	{	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.ExecuteUbergraph_Menu_StatusScreen
	 */
	struct UMenu_StatusScreen_C_ExecuteUbergraph_Menu_StatusScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_StatusScreen.Menu_StatusScreen_C.OpenMinersManual__DelegateSignature
	 */
	struct UMenu_StatusScreen_C_OpenMinersManual__DelegateSignature_Params
	{
	public:
		class UObject*                                             IdentifyingObject;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OpenSpecificPage;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMinersManualSinglePage                                    page;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
