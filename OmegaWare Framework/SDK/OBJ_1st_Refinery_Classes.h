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
	 * BlueprintGeneratedClass OBJ_1st_Refinery.OBJ_1st_Refinery_C
	 * Size -> 0x0008 (FullSize[0x0218] - InheritedSize[0x0210])
	 */
	class UOBJ_1st_Refinery_C : public URefineryObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetObjectiveDescription(float missionLength);
		class FText GetInMissionText();
		class UTexture2D* GetObjectiveIcon();
		void ReceiveRefinerySpawned(class AFSDRefinery* InRefinery);
		void OnRefineryStateChangedBP(ERefineryState InRefineryState);
		void ExecuteUbergraph_OBJ_1st_Refinery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
