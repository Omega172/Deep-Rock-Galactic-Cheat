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
	 * BlueprintGeneratedClass OBJ_WRN_Plague.OBJ_WRN_Plague_C
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UOBJ_WRN_Plague_C : public UPlagueObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnRep_CurrPlagueCount();
		class UTexture2D* GetInMissionCounterIcon();
		class FText GetInMissionCounterText();
		class FText GetObjectiveDescription(float missionLength);
		class FText GetInMissionText();
		class UTexture2D* GetObjectiveIcon();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_OBJ_WRN_Plague(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
