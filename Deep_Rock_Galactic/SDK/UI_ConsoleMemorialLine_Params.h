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
	 * Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
	 */
	struct UUI_ConsoleMemorialLine_C_AddBoard_Params
	{
	public:
		class UConsoleScreenMemorialWall_C*                        NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
	 */
	struct UUI_ConsoleMemorialLine_C_SetSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
	 */
	struct UUI_ConsoleMemorialLine_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
	 */
	struct UUI_ConsoleMemorialLine_C_Construct_Params
	{	};

	/**
	 * Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished
	 */
	struct UUI_ConsoleMemorialLine_C_OnMoveFinished_Params
	{	};

	/**
	 * Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
	 */
	struct UUI_ConsoleMemorialLine_C_ExecuteUbergraph_UI_ConsoleMemorialLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
