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
	 * BlueprintGeneratedClass EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C
	 * Size -> 0x0008 (FullSize[0x0468] - InheritedSize[0x0460])
	 */
	class AEVENT_DropPodDefense_Uplink_C : public AEVENT_DropPodDefense_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EventSucceded();
		void EventFailed();
		void ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
