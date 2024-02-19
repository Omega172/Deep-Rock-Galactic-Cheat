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
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.GetMicAmplitudeSliderTooltip
	 */
	struct UOptions_InputAudioSource_C_GetMicAmplitudeSliderTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.FillAudioDevices
	 */
	struct UOptions_InputAudioSource_C_FillAudioDevices_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.Construct
	 */
	struct UOptions_InputAudioSource_C_Construct_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.UINeedsUpdate
	 */
	struct UOptions_InputAudioSource_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.ShowOptions
	 */
	struct UOptions_InputAudioSource_C_ShowOptions_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_InputAudioSource_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.CheckForNewDevices
	 */
	struct UOptions_InputAudioSource_C_CheckForNewDevices_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.Destruct
	 */
	struct UOptions_InputAudioSource_C_Destruct_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.Tick
	 */
	struct UOptions_InputAudioSource_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.ReenableSlider
	 */
	struct UOptions_InputAudioSource_C_ReenableSlider_Params
	{	};

	/**
	 * Function Options_InputAudioSource.Options_InputAudioSource_C.ExecuteUbergraph_Options_InputAudioSource
	 */
	struct UOptions_InputAudioSource_C_ExecuteUbergraph_Options_InputAudioSource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PRYO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
