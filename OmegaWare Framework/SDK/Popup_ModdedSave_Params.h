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
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyUp
	 */
	struct UPopup_ModdedSave_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnKeyDown
	 */
	struct UPopup_ModdedSave_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.CancelButtonTooltip
	 */
	struct UPopup_ModdedSave_C_CancelButtonTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.SetCanCancel
	 */
	struct UPopup_ModdedSave_C_SetCanCancel_Params
	{
	public:
		bool                                                       Can;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TXGZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OptionalTooltipText;                                     // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.Reset Color on Non Selected Save
	 */
	struct UPopup_ModdedSave_C_ResetColoronNonSelectedSave_Params
	{
	public:
		class UFSDSaveGame*                                        SaveSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.BindSaveslotEvents
	 */
	struct UPopup_ModdedSave_C_BindSaveslotEvents_Params
	{
	public:
		class UITM_SaveSlot_Entry_C*                               SaveslotWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.SetColors
	 */
	struct UPopup_ModdedSave_C_SetColors_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.Set Create New Saveslot Entry
	 */
	struct UPopup_ModdedSave_C_SetCreateNewSaveslotEntry_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.Construct
	 */
	struct UPopup_ModdedSave_C_Construct_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.PreConstruct
	 */
	struct UPopup_ModdedSave_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveDeleted
	 */
	struct UPopup_ModdedSave_C_OnSaveDeleted_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveLoaded
	 */
	struct UPopup_ModdedSave_C_OnSaveLoaded_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnSaveCreated
	 */
	struct UPopup_ModdedSave_C_OnSaveCreated_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UPopup_ModdedSave_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.Cancel
	 */
	struct UPopup_ModdedSave_C_Cancel_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.ExecuteUbergraph_Popup_ModdedSave
	 */
	struct UPopup_ModdedSave_C_ExecuteUbergraph_Popup_ModdedSave_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G90O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveCancelled__DelegateSignature
	 */
	struct UPopup_ModdedSave_C_OnModdedSaveCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function Popup_ModdedSave.Popup_ModdedSave_C.OnModdedSaveLoaded__DelegateSignature
	 */
	struct UPopup_ModdedSave_C_OnModdedSaveLoaded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
