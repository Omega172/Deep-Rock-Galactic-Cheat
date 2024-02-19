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
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.GetSelectorTooltipWidget
	 */
	struct UITM_Modding_LoadoutSelection_C_GetSelectorTooltipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.SetSelectorVisibility
	 */
	struct UITM_Modding_LoadoutSelection_C_SetSelectorVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.Construct
	 */
	struct UITM_Modding_LoadoutSelection_C_Construct_Params
	{	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.ExecuteUbergraph_ITM_Modding_LoadoutSelection
	 */
	struct UITM_Modding_LoadoutSelection_C_ExecuteUbergraph_ITM_Modding_LoadoutSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C.OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Modding_LoadoutSelection_C_OnSlotLoaded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
