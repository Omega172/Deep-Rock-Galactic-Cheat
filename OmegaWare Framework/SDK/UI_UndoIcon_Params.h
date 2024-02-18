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
	 * Function UI_UndoIcon.UI_UndoIcon_C.PreConstruct
	 */
	struct UUI_UndoIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_UndoIcon.UI_UndoIcon_C.PlayActivateAnimation
	 */
	struct UUI_UndoIcon_C_PlayActivateAnimation_Params
	{	};

	/**
	 * Function UI_UndoIcon.UI_UndoIcon_C.SetHovered
	 */
	struct UUI_UndoIcon_C_SetHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_UndoIcon.UI_UndoIcon_C.ExecuteUbergraph_UI_UndoIcon
	 */
	struct UUI_UndoIcon_C_ExecuteUbergraph_UI_UndoIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
