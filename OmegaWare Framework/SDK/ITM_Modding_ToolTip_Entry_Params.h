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
	 * Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.SetMetaData
	 */
	struct UITM_Modding_ToolTip_Entry_C_SetMetaData_Params
	{
	public:
		class UModioModInfoWrapper*                                InMetaData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.PreConstruct
	 */
	struct UITM_Modding_ToolTip_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.Construct
	 */
	struct UITM_Modding_ToolTip_Entry_C_Construct_Params
	{	};

	/**
	 * Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.ExecuteUbergraph_ITM_Modding_ToolTip_Entry
	 */
	struct UITM_Modding_ToolTip_Entry_C_ExecuteUbergraph_ITM_Modding_ToolTip_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PIQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
