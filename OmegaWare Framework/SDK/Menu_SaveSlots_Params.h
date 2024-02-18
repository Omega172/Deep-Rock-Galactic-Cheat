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
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.Set Create New Saveslot Entry
	 */
	struct UMenu_SaveSlots_C_SetCreateNewSaveslotEntry_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.BindSaveslotEvents
	 */
	struct UMenu_SaveSlots_C_BindSaveslotEvents_Params
	{
	public:
		class UITM_SaveSlot_Entry_C*                               SaveslotWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.Set Selected Save
	 */
	struct UMenu_SaveSlots_C_SetSelectedSave_Params
	{
	public:
		class UFSDSaveGame*                                        SaveSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SetColors
	 */
	struct UMenu_SaveSlots_C_SetColors_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SetInitialSelectedSave
	 */
	struct UMenu_SaveSlots_C_SetInitialSelectedSave_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.CreateSaveSlots
	 */
	struct UMenu_SaveSlots_C_CreateSaveSlots_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.OnFailure_E9E78193470C6DFEB6754298C681AA76
	 */
	struct UMenu_SaveSlots_C_OnFailure_E9E78193470C6DFEB6754298C681AA76_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.OnSuccess_E9E78193470C6DFEB6754298C681AA76
	 */
	struct UMenu_SaveSlots_C_OnSuccess_E9E78193470C6DFEB6754298C681AA76_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.Construct
	 */
	struct UMenu_SaveSlots_C_Construct_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDeleted
	 */
	struct UMenu_SaveSlots_C_SaveDeleted_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SaveConverted
	 */
	struct UMenu_SaveSlots_C_SaveConverted_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.PreConstruct
	 */
	struct UMenu_SaveSlots_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SaveDetails
	 */
	struct UMenu_SaveSlots_C_SaveDetails_Params
	{
	public:
		class UFSDSaveGame*                                        SaveSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SaveLoaded
	 */
	struct UMenu_SaveSlots_C_SaveLoaded_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.NewSaveslotCreated
	 */
	struct UMenu_SaveSlots_C_NewSaveslotCreated_Params
	{	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.ExecuteUbergraph_Menu_SaveSlots
	 */
	struct UMenu_SaveSlots_C_ExecuteUbergraph_Menu_SaveSlots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SaveSlots.Menu_SaveSlots_C.SettingsChanged__DelegateSignature
	 */
	struct UMenu_SaveSlots_C_SettingsChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
