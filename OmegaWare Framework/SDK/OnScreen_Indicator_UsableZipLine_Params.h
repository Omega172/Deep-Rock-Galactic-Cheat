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
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_Refresh_Params
	{	};

	/**
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_Construct_Params
	{	};

	/**
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_OnCharacterStateChanged_Event_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_OnInputSourceChanged_Event_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine
	 */
	struct UOnScreen_Indicator_UsableZipLine_C_ExecuteUbergraph_OnScreen_Indicator_UsableZipLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
