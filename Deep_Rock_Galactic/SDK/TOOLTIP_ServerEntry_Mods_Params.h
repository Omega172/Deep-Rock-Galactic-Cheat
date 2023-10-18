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
	 * Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SplitByInstalled
	 */
	struct UTOOLTIP_ServerEntry_Mods_C_SplitByInstalled_Params
	{
	public:
		TArray<class FString>                                      InNames;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      OutPending;                                              // 0x0010(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      OutInstalled;                                            // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetModNames
	 */
	struct UTOOLTIP_ServerEntry_Mods_C_SetModNames_Params
	{
	public:
		class UVerticalBox*                                        InBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      InNames;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InInstalled;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LJ3K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetData
	 */
	struct UTOOLTIP_ServerEntry_Mods_C_SetData_Params
	{
	public:
		TArray<class FString>                                      InModNames;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UGeneratedMission*                                   InMission;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.PreConstruct
	 */
	struct UTOOLTIP_ServerEntry_Mods_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.Destruct
	 */
	struct UTOOLTIP_ServerEntry_Mods_C_Destruct_Params
	{	};

	/**
	 * Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Mods
	 */
	struct UTOOLTIP_ServerEntry_Mods_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Mods_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MHTB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
