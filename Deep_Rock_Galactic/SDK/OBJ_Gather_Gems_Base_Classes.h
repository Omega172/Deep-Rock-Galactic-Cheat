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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass OBJ_Gather_Gems_Base.OBJ_Gather_Gems_Base_C
	 * Size -> 0x0018 (FullSize[0x01B0] - InheritedSize[0x0198])
	 */
	class UOBJ_Gather_Gems_Base_C : public UGatherGemsObjective
	{
	public:
		class FText                                                ObjectiveDescription;                                    // 0x0198(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UTexture2D* GetInMissionCounterIcon();
		class FText GetInMissionCounterText();
		class UTexture2D* GetObjectiveIcon();
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetInMissionText();
		class FText GetObjectiveDescription(float missionLength);
		bool IsObjectiveResource(class UResourceData* InResource);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
