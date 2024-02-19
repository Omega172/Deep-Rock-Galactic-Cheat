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
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetWarning
	 */
	struct UITM_MisDesMutator_C_SetWarning_Params
	{
	public:
		class UMissionWarning*                                     Warning;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetAnomaly
	 */
	struct UITM_MisDesMutator_C_SetAnomaly_Params
	{
	public:
		class UMissionMutator*                                     Mutator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.SetVisuals
	 */
	struct UITM_MisDesMutator_C_SetVisuals_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            Color;                                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.PreConstruct
	 */
	struct UITM_MisDesMutator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_MisDesMutator_C_BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_MisDesMutator_C_BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_MisDesMutator_C_BndEvt__ITM_MisDesMutator_Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisDesMutator.ITM_MisDesMutator_C.ExecuteUbergraph_ITM_MisDesMutator
	 */
	struct UITM_MisDesMutator_C_ExecuteUbergraph_ITM_MisDesMutator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
