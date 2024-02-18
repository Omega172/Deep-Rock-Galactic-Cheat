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
	 * BlueprintGeneratedClass EWC_Base.EWC_Base_C
	 * Size -> 0x001C (FullSize[0x004C] - InheritedSize[0x0030])
	 */
	class UEWC_Base_C : public UEnemyWaveController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              Music[0x10];                                             // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FMusicHandle                                        MusicHandle;                                             // 0x0048(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnLoaded_8674B549482B9237DC5FDA941DC11E00(class UObject* Loaded);
		void OnLoaded_8674B549482B9237DC5FDA94C82046A5(class UObject* Loaded);
		void PlayWaveMusac();
		void PlayEndWaveMusic();
		void StopWaveMusac();
		void ExecuteUbergraph_EWC_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
