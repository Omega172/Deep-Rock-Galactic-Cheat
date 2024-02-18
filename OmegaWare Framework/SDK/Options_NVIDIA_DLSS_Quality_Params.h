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
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.Add Index
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_AddIndex_Params
	{
	public:
		EUDLSSMode                                                 Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JXAK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ModeToIndex
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_ModeToIndex_Params
	{
	public:
		EUDLSSMode                                                 Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GMAQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.IndexToMode
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_IndexToMode_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUDLSSMode                                                 Mode;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_66YV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.GetDLSSModeName
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_GetDLSSModeName_Params
	{
	public:
		EUDLSSMode                                                 Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_17D7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.Construct
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_Construct_Params
	{	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.UINeedsUpdate
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ShowOptions
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_ShowOptions_Params
	{	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ExecuteUbergraph_Options_NVIDIA_DLSS_Quality
	 */
	struct UOptions_NVIDIA_DLSS_Quality_C_ExecuteUbergraph_Options_NVIDIA_DLSS_Quality_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SFN0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
