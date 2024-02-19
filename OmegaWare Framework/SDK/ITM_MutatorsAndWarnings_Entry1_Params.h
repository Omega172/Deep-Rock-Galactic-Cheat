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
	 * Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct
	 */
	struct UITM_MutatorsAndWarnings_Entry1_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetMutator
	 */
	struct UITM_MutatorsAndWarnings_Entry1_C_SetMutator_Params
	{
	public:
		class UMissionMutator*                                     Mutator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetWarning
	 */
	struct UITM_MutatorsAndWarnings_Entry1_C_SetWarning_Params
	{
	public:
		class UMissionWarning*                                     Warning;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetInfo
	 */
	struct UITM_MutatorsAndWarnings_Entry1_C_SetInfo_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1
	 */
	struct UITM_MutatorsAndWarnings_Entry1_C_ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
