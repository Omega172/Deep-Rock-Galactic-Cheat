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
	 * Function Options_PersonalMetrics.Options_PersonalMetrics_C.Construct
	 */
	struct UOptions_PersonalMetrics_C_Construct_Params
	{	};

	/**
	 * Function Options_PersonalMetrics.Options_PersonalMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	 */
	struct UOptions_PersonalMetrics_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_PersonalMetrics.Options_PersonalMetrics_C.OnPersonalMetricsChanged
	 */
	struct UOptions_PersonalMetrics_C_OnPersonalMetricsChanged_Params
	{
	public:
		bool                                                       AllowPersonalMetrics;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_PersonalMetrics.Options_PersonalMetrics_C.ExecuteUbergraph_Options_PersonalMetrics
	 */
	struct UOptions_PersonalMetrics_C_ExecuteUbergraph_Options_PersonalMetrics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G6UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
