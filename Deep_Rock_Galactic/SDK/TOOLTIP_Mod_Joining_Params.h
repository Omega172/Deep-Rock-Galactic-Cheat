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
	 * Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.SetData
	 */
	struct UTOOLTIP_Mod_Joining_C_SetData_Params
	{
	public:
		class FString                                              InModID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InName;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InVersion;                                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InDescription;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InAuthor;                                                // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EUGCApprovalStatus                                         InApprovalState;                                         // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InFetchThumbnail;                                        // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.FromMetaData
	 */
	struct UTOOLTIP_Mod_Joining_C_FromMetaData_Params
	{
	public:
		class UModioModInfoWrapper*                                InMetaData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.PreConstruct
	 */
	struct UTOOLTIP_Mod_Joining_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.LoadThumbnail
	 */
	struct UTOOLTIP_Mod_Joining_C_LoadThumbnail_Params
	{	};

	/**
	 * Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.ExecuteUbergraph_TOOLTIP_Mod_Joining
	 */
	struct UTOOLTIP_Mod_Joining_C_ExecuteUbergraph_TOOLTIP_Mod_Joining_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BN0A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
