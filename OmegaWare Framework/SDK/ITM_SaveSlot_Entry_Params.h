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
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateDeleteButtonToolTip
	 */
	struct UITM_SaveSlot_Entry_C_CreateDeleteButtonToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.CreateLoadButtonToolTip
	 */
	struct UITM_SaveSlot_Entry_C_CreateLoadButtonToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetIfSaveIsActive
	 */
	struct UITM_SaveSlot_Entry_C_SetIfSaveIsActive_Params
	{
	public:
		bool                                                       IsMainSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBG3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SaveNameExists
	 */
	struct UITM_SaveSlot_Entry_C_SaveNameExists_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Exists;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5KGA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetSelectedColor
	 */
	struct UITM_SaveSlot_Entry_C_SetSelectedColor_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetHeroRanks
	 */
	struct UITM_SaveSlot_Entry_C_SetHeroRanks_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.GetSaveSlotName
	 */
	struct UITM_SaveSlot_Entry_C_GetSaveSlotName_Params
	{
	public:
		class UFSDSaveGame*                                        SaveGame;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnEmptyOnNonUser;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PFIB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutSaveSlotName;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.SetValues
	 */
	struct UITM_SaveSlot_Entry_C_SetValues_Params
	{
	public:
		class UFSDSaveGame*                                        SaveGameInstance;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MainSlot;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.LoadAnswer
	 */
	struct UITM_SaveSlot_Entry_C_LoadAnswer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.DeleteAnswer
	 */
	struct UITM_SaveSlot_Entry_C_DeleteAnswer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.PreConstruct
	 */
	struct UITM_SaveSlot_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.ExecuteUbergraph_ITM_SaveSlot_Entry
	 */
	struct UITM_SaveSlot_Entry_C_ExecuteUbergraph_ITM_SaveSlot_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeletedWithReference__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_OnSaveDeletedWithReference__DelegateSignature_Params
	{
	public:
		class UFSDSaveGame*                                        save;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveLoaded__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_OnSaveLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDetails__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_OnSaveDetails__DelegateSignature_Params
	{
	public:
		class UFSDSaveGame*                                        SaveSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveConverted__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_OnSaveConverted__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SaveSlot_Entry.ITM_SaveSlot_Entry_C.OnSaveDeleted__DelegateSignature
	 */
	struct UITM_SaveSlot_Entry_C_OnSaveDeleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
