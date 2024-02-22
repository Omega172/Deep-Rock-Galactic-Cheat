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
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints
	 */
	struct UUI_AvailablePerkPoints_C_CountPerkPoints_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText
	 */
	struct UUI_AvailablePerkPoints_C_SetPerkPointsText_Params
	{
	public:
		int32_t                                                    Points;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RJ1T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct
	 */
	struct UUI_AvailablePerkPoints_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct
	 */
	struct UUI_AvailablePerkPoints_C_Construct_Params
	{	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged
	 */
	struct UUI_AvailablePerkPoints_C_OnPerkPointsChanged_Params
	{
	public:
		int32_t                                                    PerkPoints;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick
	 */
	struct UUI_AvailablePerkPoints_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPingAnimFinished
	 */
	struct UUI_AvailablePerkPoints_C_OnPingAnimFinished_Params
	{	};

	/**
	 * Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints
	 */
	struct UUI_AvailablePerkPoints_C_ExecuteUbergraph_UI_AvailablePerkPoints_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LFLB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
