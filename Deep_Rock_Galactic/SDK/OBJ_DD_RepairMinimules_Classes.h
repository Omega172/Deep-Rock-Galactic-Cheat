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
	 * BlueprintGeneratedClass OBJ_DD_RepairMinimules.OBJ_DD_RepairMinimules_C
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UOBJ_DD_RepairMinimules_C : public URepairObjective
	{
	public:
		class UTexture2D* GetInMissionCounterIcon();
		class FText GetInMissionCounterText();
		struct FObjectiveMissionIcon GetMissionIcon();
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetInMissionText();
		class FText GetObjectiveDescription(float missionLength);
		class UTexture2D* GetObjectiveIcon();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
