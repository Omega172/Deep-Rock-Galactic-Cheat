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
	 * Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.SetupSequence
	 */
	struct UUI_FrozenInputSequence_C_SetupSequence_Params
	{
	public:
		TArray<EThawInputDirection>                                Sequence;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       First;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.Construct
	 */
	struct UUI_FrozenInputSequence_C_Construct_Params
	{	};

	/**
	 * Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.PreConstruct
	 */
	struct UUI_FrozenInputSequence_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.OnInputSuccess
	 */
	struct UUI_FrozenInputSequence_C_OnInputSuccess_Params
	{	};

	/**
	 * Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.OnInputFailed
	 */
	struct UUI_FrozenInputSequence_C_OnInputFailed_Params
	{	};

	/**
	 * Function UI_FrozenInputSequence.UI_FrozenInputSequence_C.ExecuteUbergraph_UI_FrozenInputSequence
	 */
	struct UUI_FrozenInputSequence_C_ExecuteUbergraph_UI_FrozenInputSequence_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
