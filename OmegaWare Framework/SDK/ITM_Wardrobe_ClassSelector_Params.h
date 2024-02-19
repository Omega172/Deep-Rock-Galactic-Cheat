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
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.HandleKeyInput
	 */
	struct UITM_Wardrobe_ClassSelector_C_HandleKeyInput_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
		bool                                                       Handled;                                                 // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDOY[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetSwitchButtonState
	 */
	struct UITM_Wardrobe_ClassSelector_C_SetSwitchButtonState_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetPrevCharacter
	 */
	struct UITM_Wardrobe_ClassSelector_C_GetPrevCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetNextCharacter
	 */
	struct UITM_Wardrobe_ClassSelector_C_GetNextCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetBPGameState
	 */
	struct UITM_Wardrobe_ClassSelector_C_GetBPGameState_Params
	{
	public:
		class ABP_GameState_C*                                     GameState;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetCharacterInfo
	 */
	struct UITM_Wardrobe_ClassSelector_C_SetCharacterInfo_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.PreConstruct
	 */
	struct UITM_Wardrobe_ClassSelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetData
	 */
	struct UITM_Wardrobe_ClassSelector_C_SetData_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             CategoryID;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UITM_Wardrobe_ClassSelector_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UITM_Wardrobe_ClassSelector_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectPrev
	 */
	struct UITM_Wardrobe_ClassSelector_C_SelectPrev_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectNext
	 */
	struct UITM_Wardrobe_ClassSelector_C_SelectNext_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SwitchToCharacter
	 */
	struct UITM_Wardrobe_ClassSelector_C_SwitchToCharacter_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.Construct
	 */
	struct UITM_Wardrobe_ClassSelector_C_Construct_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.CharacterChanged
	 */
	struct UITM_Wardrobe_ClassSelector_C_CharacterChanged_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_Wardrobe_ClassSelector_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.UpdateNotification
	 */
	struct UITM_Wardrobe_ClassSelector_C_UpdateNotification_Params
	{	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.ExecuteUbergraph_ITM_Wardrobe_ClassSelector
	 */
	struct UITM_Wardrobe_ClassSelector_C_ExecuteUbergraph_ITM_Wardrobe_ClassSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJ4M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.OnCharacterChanged__DelegateSignature
	 */
	struct UITM_Wardrobe_ClassSelector_C_OnCharacterChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
