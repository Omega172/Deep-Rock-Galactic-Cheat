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
	 * Function Options_VolumeSlider.Options_VolumeSlider_C.Construct
	 */
	struct UOptions_VolumeSlider_C_Construct_Params
	{	};

	/**
	 * Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct
	 */
	struct UOptions_VolumeSlider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 */
	struct UOptions_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate
	 */
	struct UOptions_VolumeSlider_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text
	 */
	struct UOptions_VolumeSlider_C_UpdatePercentageText_Params
	{	};

	/**
	 * Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider
	 */
	struct UOptions_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q1AD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
