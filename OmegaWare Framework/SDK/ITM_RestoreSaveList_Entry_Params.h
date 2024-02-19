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
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.CreateToolTipWidget
	 */
	struct UITM_RestoreSaveList_Entry_C_CreateToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues
	 */
	struct UITM_RestoreSaveList_Entry_C_SetValues_Params
	{
	public:
		int32_t                                                    PlayerRank;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Credits;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PromotionRank;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DE4A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              slotName;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       CurrentSave;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2VEW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFSDSaveGame*                                        SaveGameInstance;                                        // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnFailure_01B969514F5C76910A60AC87B4757BE7
	 */
	struct UITM_RestoreSaveList_Entry_C_OnFailure_01B969514F5C76910A60AC87B4757BE7_Params
	{	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.OnSuccess_01B969514F5C76910A60AC87B4757BE7
	 */
	struct UITM_RestoreSaveList_Entry_C_OnSuccess_01B969514F5C76910A60AC87B4757BE7_Params
	{	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_RestoreSaveList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer
	 */
	struct UITM_RestoreSaveList_Entry_C_Answer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.PreConstruct
	 */
	struct UITM_RestoreSaveList_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry
	 */
	struct UITM_RestoreSaveList_Entry_C_ExecuteUbergraph_ITM_RestoreSaveList_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
