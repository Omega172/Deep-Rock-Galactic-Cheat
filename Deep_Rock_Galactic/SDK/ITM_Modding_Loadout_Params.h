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
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.OnMouseButtonUp
	 */
	struct UITM_Modding_Loadout_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.OnMouseButtonDown
	 */
	struct UITM_Modding_Loadout_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.SetIconFromIndex
	 */
	struct UITM_Modding_Loadout_C_SetIconFromIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.SetIcon
	 */
	struct UITM_Modding_Loadout_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.Update
	 */
	struct UITM_Modding_Loadout_C_Update_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.GetButtonToolTip
	 */
	struct UITM_Modding_Loadout_C_GetButtonToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Modding_Loadout_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.PreConstruct
	 */
	struct UITM_Modding_Loadout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Modding_Loadout_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Modding_Loadout_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.Construct
	 */
	struct UITM_Modding_Loadout_C_Construct_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.GenerateModNamesOfSlot
	 */
	struct UITM_Modding_Loadout_C_GenerateModNamesOfSlot_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.OnSettingsUpdated
	 */
	struct UITM_Modding_Loadout_C_OnSettingsUpdated_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.BndEvt__ITM_Modding_Loadout_IconButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Modding_Loadout_C_BndEvt__ITM_Modding_Loadout_IconButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.PromptClearSlot
	 */
	struct UITM_Modding_Loadout_C_PromptClearSlot_Params
	{	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.ExecuteUbergraph_ITM_Modding_Loadout
	 */
	struct UITM_Modding_Loadout_C_ExecuteUbergraph_ITM_Modding_Loadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.IconButtonClicked__DelegateSignature
	 */
	struct UITM_Modding_Loadout_C_IconButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_Loadout.ITM_Modding_Loadout_C.OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Modding_Loadout_C_OnSlotLoaded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
