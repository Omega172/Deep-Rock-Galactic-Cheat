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
	 * Function Menu_DLC.Menu_DLC_C.AddDLC
	 */
	struct UMenu_DLC_C_AddDLC_Params
	{
	public:
		class UGameDLC*                                            InDLC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.Clear
	 */
	struct UMenu_DLC_C_Clear_Params
	{	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.PreConstruct
	 */
	struct UMenu_DLC_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.OnEntryHoverBegin
	 */
	struct UMenu_DLC_C_OnEntryHoverBegin_Params
	{
	public:
		class UITM_DLC_Entry_C*                                    InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.OnEntryHoverEnd
	 */
	struct UMenu_DLC_C_OnEntryHoverEnd_Params
	{
	public:
		class UITM_DLC_Entry_C*                                    InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.Construct
	 */
	struct UMenu_DLC_C_Construct_Params
	{	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.OnVisibilityChanged_Event
	 */
	struct UMenu_DLC_C_OnVisibilityChanged_Event_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.OnLastWindowClosed_Event
	 */
	struct UMenu_DLC_C_OnLastWindowClosed_Event_Params
	{	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.OnEntryClicked
	 */
	struct UMenu_DLC_C_OnEntryClicked_Params
	{
	public:
		class UITM_DLC_Entry_C*                                    InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_DLC.Menu_DLC_C.ExecuteUbergraph_Menu_DLC
	 */
	struct UMenu_DLC_C_ExecuteUbergraph_Menu_DLC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O8PS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
