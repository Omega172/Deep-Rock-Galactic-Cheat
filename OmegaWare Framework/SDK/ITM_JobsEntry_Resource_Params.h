﻿#pragma once

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
	 * Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct
	 */
	struct UITM_JobsEntry_Resource_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData
	 */
	struct UITM_JobsEntry_Resource_C_SetData_Params
	{
	public:
		int32_t                                                    RequiredLevel;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource
	 */
	struct UITM_JobsEntry_Resource_C_ExecuteUbergraph_ITM_JobsEntry_Resource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
