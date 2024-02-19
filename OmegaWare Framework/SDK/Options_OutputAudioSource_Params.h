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
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.GetToolTipWidget
	 */
	struct UOptions_OutputAudioSource_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.CheckForAudioDeviceFallback
	 */
	struct UOptions_OutputAudioSource_C_CheckForAudioDeviceFallback_Params
	{
	public:
		class FString                                              DeviceID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.FillAudioDevices
	 */
	struct UOptions_OutputAudioSource_C_FillAudioDevices_Params
	{	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.Construct
	 */
	struct UOptions_OutputAudioSource_C_Construct_Params
	{	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.UINeedsUpdate
	 */
	struct UOptions_OutputAudioSource_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.ShowOptions
	 */
	struct UOptions_OutputAudioSource_C_ShowOptions_Params
	{	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_OutputAudioSource_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	 */
	struct UOptions_OutputAudioSource_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.CheckForNewDevices
	 */
	struct UOptions_OutputAudioSource_C_CheckForNewDevices_Params
	{	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.Destruct
	 */
	struct UOptions_OutputAudioSource_C_Destruct_Params
	{	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.PreConstruct
	 */
	struct UOptions_OutputAudioSource_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_OutputAudioSource.Options_OutputAudioSource_C.ExecuteUbergraph_Options_OutputAudioSource
	 */
	struct UOptions_OutputAudioSource_C_ExecuteUbergraph_Options_OutputAudioSource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0XH3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
