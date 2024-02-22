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
	 * BlueprintGeneratedClass OBJ_1st_Escort.OBJ_1st_Escort_C
	 * Size -> 0x0051 (FullSize[0x0391] - InheritedSize[0x0340])
	 */
	class UOBJ_1st_Escort_C : public UEscortObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              GarageBeacon[0x28];                                      // 0x0348(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       MuleClass;                                               // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BEVU[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     EscortMuleClass;                                         // 0x0378(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       MuleDead;                                                // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetObjectiveDescription(float missionLength);
		class FText GetInMissionText();
		class UTexture2D* GetObjectiveIcon();
		void ReceiveBeginPlay();
		void OnEscortMuleSpawnedEvent();
		void OnMuleDied(class UHealthComponentBase* HealthComponent);
		void SpawnGarage();
		void OnAllDwarvesDown();
		void ExecuteUbergraph_OBJ_1st_Escort(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
