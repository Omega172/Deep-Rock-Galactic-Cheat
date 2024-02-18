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
	 * BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class UOBJ_Elimination_Base_C : public UEliminationObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                Title;                                                   // 0x0228(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Description;                                             // 0x0240(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UTexture2D* GetInMissionCounterIcon();
		class FText GetInMissionCounterText();
		class UTexture2D* GetObjectiveIcon();
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetInMissionText();
		class FText GetObjectiveDescription(float missionLength);
		void ReceiveTargetKilled();
		void ReceiveTargetSpawned();
		void ExecuteUbergraph_OBJ_Elimination_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
