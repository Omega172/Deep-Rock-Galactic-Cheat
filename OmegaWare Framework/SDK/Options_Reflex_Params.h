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
	 * Function Options_Reflex.Options_Reflex_C.AddIndex
	 */
	struct UOptions_Reflex_C_AddIndex_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    ID;                                                      // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RGZD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.IdToIndex
	 */
	struct UOptions_Reflex_C_IdToIndex_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.IndexToId
	 */
	struct UOptions_Reflex_C_IndexToId_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.Construct
	 */
	struct UOptions_Reflex_C_Construct_Params
	{	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.UINeedsUpdate
	 */
	struct UOptions_Reflex_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.ShowOptions
	 */
	struct UOptions_Reflex_C_ShowOptions_Params
	{	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.BndEvt__Options_UpscalingType_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_Reflex_C_BndEvt__Options_UpscalingType_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Reflex.Options_Reflex_C.ExecuteUbergraph_Options_Reflex
	 */
	struct UOptions_Reflex_C_ExecuteUbergraph_Options_Reflex_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
