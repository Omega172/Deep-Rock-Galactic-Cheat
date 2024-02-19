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
	 * WidgetBlueprintGeneratedClass HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class UHUD_BoscoAmmoRefillsLable_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          AmmorRefillCounterText;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x0270(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateColor                                         Color;                                                   // 0x02C8(0x0028) Edit, BlueprintVisible

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_HUD_BoscoAmmoRefillsLable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
