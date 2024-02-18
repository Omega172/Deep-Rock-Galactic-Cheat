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
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Handle Key Input
	 */
	struct UITM_CharacterSwitcherBar_C_HandleKeyInput_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
		bool                                                       Handled;                                                 // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks
	 */
	struct UITM_CharacterSwitcherBar_C_CheckArmorUnlocks_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext
	 */
	struct UITM_CharacterSwitcherBar_C_GotoNext_Params
	{
	public:
		bool                                                       Next;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlaySound;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYUL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState
	 */
	struct UITM_CharacterSwitcherBar_C_SetSwitchButtonState_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter
	 */
	struct UITM_CharacterSwitcherBar_C_GetPrevCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter
	 */
	struct UITM_CharacterSwitcherBar_C_GetNextCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo
	 */
	struct UITM_CharacterSwitcherBar_C_SetCharacterInfo_Params
	{
	public:
		class UPlayerCharacterID*                                  playerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct
	 */
	struct UITM_CharacterSwitcherBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData
	 */
	struct UITM_CharacterSwitcherBar_C_SetData_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UITM_CharacterSwitcherBar_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UITM_CharacterSwitcherBar_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev
	 */
	struct UITM_CharacterSwitcherBar_C_SelectPrev_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext
	 */
	struct UITM_CharacterSwitcherBar_C_SelectNext_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter
	 */
	struct UITM_CharacterSwitcherBar_C_SwitchToCharacter_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct
	 */
	struct UITM_CharacterSwitcherBar_C_Construct_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged
	 */
	struct UITM_CharacterSwitcherBar_C_CharacterChanged_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_CharacterSwitcherBar_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification
	 */
	struct UITM_CharacterSwitcherBar_C_UpdateNotification_Params
	{	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar
	 */
	struct UITM_CharacterSwitcherBar_C_ExecuteUbergraph_ITM_CharacterSwitcherBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0DFG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature
	 */
	struct UITM_CharacterSwitcherBar_C_OnCharacterChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
