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
	 * Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
	 */
	struct UITM_DeepDiveHeader_C_FromActiveDeepDive_Params
	{	};

	/**
	 * Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
	 */
	struct UITM_DeepDiveHeader_C_FromDeepDive_Params
	{
	public:
		class UDeepDive*                                           InDeepDive;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
	 */
	struct UITM_DeepDiveHeader_C_SetEliteActive_Params
	{
	public:
		bool                                                       EliteActive;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
	 */
	struct UITM_DeepDiveHeader_C_SetHeaderContents_Params
	{
	public:
		class FText                                                HeaderContents;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
	 */
	struct UITM_DeepDiveHeader_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
	 */
	struct UITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
