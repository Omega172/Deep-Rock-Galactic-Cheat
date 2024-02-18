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
	 * Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.Construct
	 */
	struct UITM_Trading_ResourcePoster_C_Construct_Params
	{	};

	/**
	 * Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.SetData
	 */
	struct UITM_Trading_ResourcePoster_C_SetData_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_ResourcePoster.ITM_Trading_ResourcePoster_C.ExecuteUbergraph_ITM_Trading_ResourcePoster
	 */
	struct UITM_Trading_ResourcePoster_C_ExecuteUbergraph_ITM_Trading_ResourcePoster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JMDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
