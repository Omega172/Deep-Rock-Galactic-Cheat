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
	 * BlueprintGeneratedClass BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C
	 * Size -> 0x0109 (FullSize[0x0381] - InheritedSize[0x0278])
	 */
	class ABP_Phys_Newsstand_FreeBeer_C : public ABP_Phys_Newsstand_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShouldUseEventTexture;                                   // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V3Z9[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnniversaryText[0x28];                                   // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EasterText[0x28];                                        // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LunarFestivalText[0x28];                                 // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              XmasText[0x28];                                          // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OktoberfestV1Text[0x28];                                 // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       UseV2Material;                                           // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IEXR[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OktoberFestV2Text[0x28];                                 // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       QueuedActivation;                                        // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void SetEventMaterial();
		void TrySetupEventText();
		void ExecuteUbergraph_BP_Phys_Newsstand_FreeBeer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
