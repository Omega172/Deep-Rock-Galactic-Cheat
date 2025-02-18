﻿#pragma once

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
	 * BlueprintGeneratedClass OBJ_Extraction_Base.OBJ_Extraction_Base_C
	 * Size -> 0x0000 (FullSize[0x01C8] - InheritedSize[0x01C8])
	 */
	class UOBJ_Extraction_Base_C : public UResourceObjective
	{
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
