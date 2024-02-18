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
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.RefreshCanAfford
	 */
	struct UITM_Craft_ItemBox_C_RefreshCanAfford_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget
	 */
	struct UITM_Craft_ItemBox_C_FreeRenderTarget_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources
	 */
	struct UITM_Craft_ItemBox_C_CreateResources_Params
	{
	public:
		unsigned char                                              UnknownData_LHK9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor
	 */
	struct UITM_Craft_ItemBox_C_SetCostColor_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements
	 */
	struct UITM_Craft_ItemBox_C_SetRankRequirements_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon
	 */
	struct UITM_Craft_ItemBox_C_SetTextAndIcon_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock
	 */
	struct UITM_Craft_ItemBox_C_SetCanUnlock_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData
	 */
	struct UITM_Craft_ItemBox_C_SetData_Params
	{
	public:
		unsigned char                                              UnknownData_Q73Y[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Character;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct
	 */
	struct UITM_Craft_ItemBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update
	 */
	struct UITM_Craft_ItemBox_C_Update_Params
	{	};

	/**
	 * Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox
	 */
	struct UITM_Craft_ItemBox_C_ExecuteUbergraph_ITM_Craft_ItemBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
