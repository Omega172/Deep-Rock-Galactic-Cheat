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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C
	 * Size -> 0x0029 (FullSize[0x0289] - InheritedSize[0x0260])
	 */
	class UITM_MisSel_FullBiome_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            Overlay_1;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PlayerSpeaking_List_C*                           UI_PlayerSpeaking_List;                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBiome*                                              Biome;                                                   // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UITM_MisSel_BiomeBase_C*                             BiomeMapWidget;                                          // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInSeasonEventZone;                                     // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HighlightMissions(TArray<class UObject*>* AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge);
		void UpdateMapPan(const struct FVector2D& InPosition);
		void GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C** Output);
		void ClearMissions();
		void GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>* Items1);
		void Construct();
		void SetData(TArray<class UGeneratedMission*> missions, class UBiome* Biome);
		void ExecuteUbergraph_ITM_MisSel_FullBiome(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
