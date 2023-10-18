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
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CreateCurrentProgressButtonToolTip
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_CreateCurrentProgressButtonToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CheckForIlligalChars
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_CheckForIlligalChars_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsIlligal;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ChangeSave
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_ChangeSave_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StartTutorial;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveSlotNameExists
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_SaveSlotNameExists_Params
	{
	public:
		bool                                                       Exists;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZZ3G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveNameInputError
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_SaveNameInputError_Params
	{	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.Answer
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_Answer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.TutorialAnswer
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_TutorialAnswer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.OnSaveslotCreated__DelegateSignature
	 */
	struct UITM_CreateNewSaveSlot_Entry_C_OnSaveslotCreated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
