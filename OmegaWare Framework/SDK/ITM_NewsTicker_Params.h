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
	 * Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateFluffStock
	 */
	struct UITM_NewsTicker_C_GenerateFluffStock_Params
	{
	public:
		struct FRandomStream                                       RandomStream;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateTickerText
	 */
	struct UITM_NewsTicker_C_GenerateTickerText_Params
	{	};

	/**
	 * Function ITM_NewsTicker.ITM_NewsTicker_C.Construct
	 */
	struct UITM_NewsTicker_C_Construct_Params
	{	};

	/**
	 * Function ITM_NewsTicker.ITM_NewsTicker_C.CheckForNewText
	 */
	struct UITM_NewsTicker_C_CheckForNewText_Params
	{	};

	/**
	 * Function ITM_NewsTicker.ITM_NewsTicker_C.ExecuteUbergraph_ITM_NewsTicker
	 */
	struct UITM_NewsTicker_C_ExecuteUbergraph_ITM_NewsTicker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
