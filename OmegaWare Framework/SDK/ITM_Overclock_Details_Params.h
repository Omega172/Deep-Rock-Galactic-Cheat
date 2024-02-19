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
	 * Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear
	 */
	struct UITM_Overclock_Details_C_Clear_Params
	{	};

	/**
	 * Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat
	 */
	struct UITM_Overclock_Details_C_AddStat_Params
	{
	public:
		struct FItemUpgradeStatText                                InStat;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData
	 */
	struct UITM_Overclock_Details_C_SetData_Params
	{
	public:
		class UItemUpgrade*                                        InUpgrade;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct
	 */
	struct UITM_Overclock_Details_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details
	 */
	struct UITM_Overclock_Details_C_ExecuteUbergraph_ITM_Overclock_Details_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
