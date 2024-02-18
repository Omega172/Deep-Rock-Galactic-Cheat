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
	 * Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar
	 */
	struct ULCD_MissionReadout_HazCompLen_C_AdjustCLBar_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar
	 */
	struct ULCD_MissionReadout_HazCompLen_C_AdjustBar_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission
	 */
	struct ULCD_MissionReadout_HazCompLen_C_SetGeneratedMission_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick
	 */
	struct ULCD_MissionReadout_HazCompLen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
	 */
	struct ULCD_MissionReadout_HazCompLen_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen
	 */
	struct ULCD_MissionReadout_HazCompLen_C_ExecuteUbergraph_LCD_MissionReadout_HazCompLen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9M4N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
