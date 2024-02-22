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
	 * BlueprintGeneratedClass OBJ_1st_Facility.OBJ_1st_Facility_C
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class UOBJ_1st_Facility_C : public UFacilityObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class FText GetObjectiveDescription(float missionLength);
		class FText GetInMissionCounterText();
		class FText GetInMissionText();
		int32_t GetObjectiveAmount(float missionLength);
		bool IsObjectiveResource(class UResourceData* InResource);
		class UTexture2D* GetInMissionCounterIcon();
		class UTexture2D* GetObjectiveIcon();
		void ReceiveBeginPlay();
		void OnCoreDeposited();
		void Receive_AddEnemies(class AProceduralSetup* Setup);
		void OnAllRequiredReturnObjectivesCompleted_Event_1();
		void ExecuteUbergraph_OBJ_1st_Facility(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
