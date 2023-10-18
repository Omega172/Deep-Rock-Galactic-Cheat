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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct MM_ButtonInfo.MM_ButtonInfo
	 * Size -> 0x0069
	 */
	struct FMM_ButtonInfo
	{
	public:
		class FText                                                ButtonText_7_C93F8ADD46736C76628F77AA3AD33DE5;           // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Subtext_13_6DC087A04F73C8C3B2927494E1FBE685;             // 0x0018(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          BackgroundImage_19_EE2E77574D9DB9EC1C64CC84DA7F9E53;     // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BackgroundColor_24_A3CB52A24E13F1D474D766B28D85BB08;     // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          FrontImage_21_826B5E924166775FA7E092985D207DDE;          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FObjectiveMissionIcon                               OptionalIcon_16_6545015B4B42BC1756BA12B6E09D0C83;        // 0x0050(0x0018) Edit, BlueprintVisible, NoDestructor
		E_MM_ButtonStyle                                           IsEnabled_27_37BE17024191577AE734E09951AEF83F;           // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
