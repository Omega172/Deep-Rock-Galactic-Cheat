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
	 * BlueprintGeneratedClass OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C
	 * Size -> 0x0018 (FullSize[0x01B8] - InheritedSize[0x01A0])
	 */
	class UOBJ_2nd_KillFleas_C : public UKillEnemiesObjective
	{
	public:
		class FText                                                MissionText;                                             // 0x01A0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance

	public:
		class UTexture2D* GetInMissionCounterIcon();
		class FText GetInMissionCounterText();
		struct FObjectiveMissionIcon GetMissionIcon();
		class UTexture2D* GetObjectiveIcon();
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetInMissionText();
		class FText GetObjectiveDescription(float missionLength);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
