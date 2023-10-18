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
	 * Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents
	 */
	struct UITM_DeepDiveHeaderElite_C_SetEliteContents_Params
	{
	public:
		class FText                                                EliteContents;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct
	 */
	struct UITM_DeepDiveHeaderElite_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite
	 */
	struct UITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
