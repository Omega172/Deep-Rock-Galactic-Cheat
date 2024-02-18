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
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.HighlightMissions
	 */
	struct UITM_MisSel_FullBiome_C_HighlightMissions_Params
	{
	public:
		TArray<class UObject*>                                     AssetReferences;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldHighlight;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YZWV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USeasonChallenge*                                    Challenge;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan
	 */
	struct UITM_MisSel_FullBiome_C_UpdateMapPan_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot
	 */
	struct UITM_MisSel_FullBiome_C_GetRandomFreeMissionSlot_Params
	{
	public:
		class UITM_MisSel_MissionMapIcon_C*                        Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions
	 */
	struct UITM_MisSel_FullBiome_C_ClearMissions_Params
	{	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots
	 */
	struct UITM_MisSel_FullBiome_C_GetAllAllMissionSlots_Params
	{
	public:
		TArray<class UITM_MisSel_MissionMapIcon_C*>                Items1;                                                  // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct
	 */
	struct UITM_MisSel_FullBiome_C_Construct_Params
	{	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData
	 */
	struct UITM_MisSel_FullBiome_C_SetData_Params
	{
	public:
		TArray<class UGeneratedMission*>                           missions;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UBiome*                                              Biome;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome
	 */
	struct UITM_MisSel_FullBiome_C_ExecuteUbergraph_ITM_MisSel_FullBiome_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZCT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
