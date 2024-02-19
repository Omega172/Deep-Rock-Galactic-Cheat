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
	 * BlueprintGeneratedClass OBJ_DD_Elimination_Eggs.OBJ_DD_Elimination_Eggs_C
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class UOBJ_DD_Elimination_Eggs_C : public UOBJ_Eliminate_Eggs_C
	{
	public:
		struct FObjectiveMissionIcon GetMissionIcon();
		int32_t GetObjectiveAmount(float missionLength);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
