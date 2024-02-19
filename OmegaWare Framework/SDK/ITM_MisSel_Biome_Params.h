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
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate
	 */
	struct UITM_MisSel_Biome_C_GetSoundCoordinate_Params
	{
	public:
		struct FVector                                             SoundWorldPos;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity
	 */
	struct UITM_MisSel_Biome_C_SetCampaignVisiblity_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked
	 */
	struct UITM_MisSel_Biome_C_IsUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFEF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons
	 */
	struct UITM_MisSel_Biome_C_CreateMissionIcons_Params
	{
	public:
		TArray<class UGeneratedMission*>                           Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions
	 */
	struct UITM_MisSel_Biome_C_HasMissions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController
	 */
	struct UITM_MisSel_Biome_C_GetController_Params
	{
	public:
		class ABP_PlayerController_SpaceRig_C*                     AsBPPlayerControllerSpaceRig;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions
	 */
	struct UITM_MisSel_Biome_C_SortMissions_Params
	{
	public:
		TArray<class UGeneratedMission*>                           missions;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<class UMissionTemplate*, int32_t>                     MissionCount1;                                           // 0x0010(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome
	 */
	struct UITM_MisSel_Biome_C_GetMissionsForBiome_Params
	{
	public:
		TArray<class UGeneratedMission*>                           Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UGeneratedMission*>                           missions;                                                // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect
	 */
	struct UITM_MisSel_Biome_C_Unselect_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select
	 */
	struct UITM_MisSel_Biome_C_Select_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct
	 */
	struct UITM_MisSel_Biome_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData
	 */
	struct UITM_MisSel_Biome_C_SetData_Params
	{
	public:
		TArray<class UGeneratedMission*>                           missions;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsNewBiome;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2W0V[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BiomeIndex;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_MisSel_Biome_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick
	 */
	struct UITM_MisSel_Biome_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone
	 */
	struct UITM_MisSel_Biome_C_ShowUnlockZone_Params
	{	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowChallengeIcon
	 */
	struct UITM_MisSel_Biome_C_ShowChallengeIcon_Params
	{
	public:
		bool                                                       InShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MO3W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome
	 */
	struct UITM_MisSel_Biome_C_ExecuteUbergraph_ITM_MisSel_Biome_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5OUI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature
	 */
	struct UITM_MisSel_Biome_C_BiomeSelected__DelegateSignature_Params
	{
	public:
		class UITM_MisSel_Biome_C*                                 Biome;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
