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
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed
	 */
	struct UConsoleScreenMemorialWall_C_SetLinesSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine
	 */
	struct UConsoleScreenMemorialWall_C_RemoveLine_Params
	{
	public:
		class UUI_ConsoleMemorialLine_C*                           NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed
	 */
	struct UConsoleScreenMemorialWall_C_SetAnimationSpeed_Params
	{
	public:
		bool                                                       IsFast;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSLD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine
	 */
	struct UConsoleScreenMemorialWall_C_SpawnNewLine_Params
	{	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow
	 */
	struct UConsoleScreenMemorialWall_C_GetNameFromRow_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CCY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick
	 */
	struct UConsoleScreenMemorialWall_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct
	 */
	struct UConsoleScreenMemorialWall_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall
	 */
	struct UConsoleScreenMemorialWall_C_ExecuteUbergraph_ConsoleScreenMemorialWall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CH5M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
