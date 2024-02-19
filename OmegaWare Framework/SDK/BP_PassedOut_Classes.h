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
	 * BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
	 * Size -> 0x0041 (FullSize[0x0151] - InheritedSize[0x0110])
	 */
	class UBP_PassedOut_C : public UPassedOutStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_V5LZ[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartTransform;                                          // 0x0120(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WakeInBed;                                               // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AllPassedOut(bool* AllPassedOut);
		void ReceiveBeginPlay();
		void BeginFadeToBlack();
		void ReceiveStateEnter();
		void ReceiveStateExit();
		void TurnOffJukeBox();
		void RemoveDrinkingMugs();
		void ReceiveTeamPassedOut();
		void ExecuteUbergraph_BP_PassedOut(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
