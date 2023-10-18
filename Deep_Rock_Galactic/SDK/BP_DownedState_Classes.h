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
	 * BlueprintGeneratedClass BP_DownedState.BP_DownedState_C
	 * Size -> 0x0058 (FullSize[0x01A8] - InheritedSize[0x0150])
	 */
	class UBP_DownedState_C : public UDownedStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0150(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              SeeYouInHell_Particles[0x28];                            // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SeeYOuInHell_Charge_Particles[0x28];                     // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(class UObject* Loaded);
		void OnLoaded_5277138148709B6872AFA8AE00BD1B01(class UObject* Loaded);
		void OnLoaded_EE490F594C2547CD96CB63943EA06475(class UObject* Loaded);
		void OnLoaded_369215DE4E9E3D75961755AB344B6937(class UObject* Loaded);
		void ReceiveBeginPlay();
		void Receive_TriggerDownedBomb();
		void All_ShowDownedBomb();
		void All_ShowBombIntro();
		void Server_SpawnDBField();
		void ExecuteUbergraph_BP_DownedState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
