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
	 * BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C
	 * Size -> 0x0018 (FullSize[0x0288] - InheritedSize[0x0270])
	 */
	class UOBJ_1st_Salvage_C : public USalvageObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnAllActorsSalvaged;                                     // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class UTexture2D* GetInMissionCounterIcon();
		class FText GetInMissionCounterText();
		int32_t GetObjectiveAmount(float missionLength);
		class FText GetInMissionText();
		class FText GetObjectiveDescription(float missionLength);
		class UTexture2D* GetObjectiveIcon();
		void AllActorsSalvaged();
		void ExecuteUbergraph_OBJ_1st_Salvage(int32_t EntryPoint);
		void OnAllActorsSalvaged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
