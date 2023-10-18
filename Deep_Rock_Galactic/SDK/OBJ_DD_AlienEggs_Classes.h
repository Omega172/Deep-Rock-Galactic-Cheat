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
	 * BlueprintGeneratedClass OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C
	 * Size -> 0x0008 (FullSize[0x01B8] - InheritedSize[0x01B0])
	 */
	class UOBJ_DD_AlienEggs_C : public UOBJ_Gather_Gems_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FObjectiveMissionIcon GetMissionIcon();
		void GetNumberOfSpeicalEggs(TArray<class AActor*> TargetArray, int32_t* Count);
		void TurnOnSpecialEggs();
		void Receive_StartTracking();
		void ExecuteUbergraph_OBJ_DD_AlienEggs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
