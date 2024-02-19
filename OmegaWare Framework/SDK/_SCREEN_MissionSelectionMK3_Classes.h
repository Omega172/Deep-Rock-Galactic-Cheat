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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C
	 * Size -> 0x0220 (FullSize[0x04C0] - InheritedSize[0x02A0])
	 */
	class U_SCREEN_MissionSelectionMK3_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimatedStaticOverlay_WithScanlines_C*              AnimatedStaticOverlay_WithScanlines;                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            BTN_Close;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            BTN_Join;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            BTN_ServerList;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_PannerOuter;                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageClouds01;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageClouds02;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_AzureWeald;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Crystal;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Dense;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Fungus;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Glacial;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_HollowBough;                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Magma;                                        // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Radioactive;                                  // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Salt;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 ITEM_Biome_Sandblasted;                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_BG_Planet_C*                             ITEM_MissionSelection_BG;                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_FullBiome_C*                             ITEM_MissionSelection_FullBiome;                         // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_Timer_C*                                 ITEM_MissionSelection_Timer;                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_CampaignProgress_C*                             ITM_CampaignProgressMain;                                // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Challenge_InfoBox_C*                            ITM_Challenge_InfoBox;                                   // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_PlanetZone_C*                            ITM_LockZone_2;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_PlanetZone_C*                            ITM_LockZone_3;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_PlanetZone_C*                            ITM_LockZone_4;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_PlanetZone_C*                            ITM_LockZone_5;                                          // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULobby_BarTop_Countdown_C*                           Lobby_BarTop_Countdown;                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           PlatformSafeZone;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_AzureWeald;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_CrystallineCaverns;                               // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_DenseBiozone;                                     // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_FungusBogs;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_GlacialStrata;                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_HollowBough;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_MagmaCore;                                        // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_Radioactive;                                      // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_SaltPits;                                         // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_MisSel_RegionImage_C*                           Region_Sandblasted;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SelectionBox_Active;                                     // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 UI_AdvancedLabel;                                        // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PlayerSpeaking_List_C*                           UI_PlayerSpeaking_List;                                  // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWND_MisSel_BiomeDescription_C*                      WINDOW_MissionSelection_BiomeDescription;                // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWND_MisSel_MissionDescription_C*                    WINDOW_MissionSelection_MissionDescription;              // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWND_MisSel_MissionOptions_C*                        WINDOW_MissionSelection_MissionOptions;                  // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone1_AnimatedPlague;                                    // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone1_Outline;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone2_AnimatedPlague;                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone2_Outline;                                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone3_AnimatedPlague;                                    // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone3_Outline;                                           // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone4_AnimatedPlague;                                    // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone4_Outline;                                           // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Zone_Outlines;                                           // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ZoneBorders;                                             // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UITM_MisSel_Biome_C*>                         Biomes;                                                  // 0x0458(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference
		class UITM_MisSel_MissionMapIcon_C*                        SelectedMissionIcon;                                     // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UITM_MisSel_Biome_C*                                 SelectedBiome;                                           // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UITM_MisSel_PlanetZone_C*>                    ZoneLocks;                                               // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBiome*>                                      NewBiomes;                                               // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           CurrPos;                                                 // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           TargetPos;                                               // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBiomeHovered;                                          // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanParalaxCamera;                                        // 0x04A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PMEY[0x2];                                   // 0x04AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BiomeHoverStartTime;                                     // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UImage*>                                      ZoneOutlines;                                            // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		TArray<class UGeneratedMission*> GetAvailableMissions();
		void HighlightChallenges(TArray<class UObject*> AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge);
		void ClearServerListMissionRestrictions();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdateMapPan(bool SnapToMouse);
		void CheckForNewZones();
		void GetAvailableBiomes(TArray<class UITM_MisSel_Biome_C*>* AvailableBiomes1);
		void GetMode(EMissionSelection_Mode* Mode);
		void ShouldEnableQuickJoin(bool* Show);
		void HandleButtonVisibility();
		void GetMission_CheckBiome(class UGeneratedMission** mission);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetMission(class UGeneratedMission** mission);
		bool IsMissionLocked(class UGeneratedMission* mission);
		void GetActiveSelectionMode(EMissionSelection_Mode* NewParam);
		void GetController(class ABP_PlayerController_SpaceRig_C** AsBPPlayerControllerSpaceRig);
		void GetMissionBiome(class UBiome* Biome, class UITM_MisSel_Biome_C** ArrayElement);
		void OnFailure_ED6FBDF64F71976389535788275C482E();
		void OnSuccess_ED6FBDF64F71976389535788275C482E();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BiomeHovered(class UITM_MisSel_Biome_C* Biome);
		void BiomeSelected(class UITM_MisSel_Biome_C* Biome);
		void ShowMission();
		void ShowPlanet();
		void MissionHover(class UGeneratedMission* mission, bool IsHovering);
		void StartMission();
		void OnStartMission_Event_1();
		void ShowMode(EMissionSelection_Mode Mode);
		void Back();
		void ShowServerBrowser();
		void BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void InputSourceChanged(EFSDInputSource InputSource);
		void OnShown();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void MissionSelected(class UITM_MisSel_MissionMapIcon_C* mission);
		void StartSoloMission();
		void OnClosed();
		void DifficultyChanged(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission);
		void StartupCameraPan();
		void OnStartSoloMission();
		void BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature(TArray<class UObject*>* AssetReferences, bool InHovered, class USeasonChallenge* Challenge);
		void ExecuteUbergraph__SCREEN_MissionSelectionMK3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
