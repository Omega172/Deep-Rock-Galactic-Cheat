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
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.ReceiveCanCloseWindow
	 */
	struct UWND_PromotionDirections_C_ReceiveCanCloseWindow_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                InKey;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       InIsMouseEvent;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.Finished_A0ADC2C4421D1470173667A7D2CBA086
	 */
	struct UWND_PromotionDirections_C_Finished_A0ADC2C4421D1470173667A7D2CBA086_Params
	{	};

	/**
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.OnShown
	 */
	struct UWND_PromotionDirections_C_OnShown_Params
	{	};

	/**
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.PreConstruct
	 */
	struct UWND_PromotionDirections_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWND_PromotionDirections_C_BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.SetCharacter
	 */
	struct UWND_PromotionDirections_C_SetCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_PromotionDirections.WND_PromotionDirections_C.ExecuteUbergraph_WND_PromotionDirections
	 */
	struct UWND_PromotionDirections_C_ExecuteUbergraph_WND_PromotionDirections_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
