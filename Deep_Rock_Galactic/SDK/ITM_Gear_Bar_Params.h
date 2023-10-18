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
	 * Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus
	 */
	struct UITM_Gear_Bar_C_SetStageStatus_Params
	{
	public:
		class UITM_DeepDive_StageIcon_C*                           Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       claimed;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress
	 */
	struct UITM_Gear_Bar_C_SetDeepDiveProgress_Params
	{
	public:
		class UDeepDive*                                           DeepDive;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress
	 */
	struct UITM_Gear_Bar_C_SetActiveProgress_Params
	{	};

	/**
	 * Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress
	 */
	struct UITM_Gear_Bar_C_SetCustomProgress_Params
	{
	public:
		bool                                                       Stage1Complete;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Stage2Complete;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Stage3Complete;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct
	 */
	struct UITM_Gear_Bar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar
	 */
	struct UITM_Gear_Bar_C_ExecuteUbergraph_ITM_Gear_Bar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
