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
	 * WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C
	 * Size -> 0x0055 (FullSize[0x02B5] - InheritedSize[0x0260])
	 */
	class UHUD_DefaultLabel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Label;                                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0270(0x0018) Edit, BlueprintVisible
		int32_t                                                    FontSize;                                                // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENUM_AcuminCondensedTypeface                               Typeface;                                                // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETextJustify                                               Justification;                                           // 0x028D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UD8U[0x2];                                   // 0x028E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFontOutlineSettings                                OutlineSettings;                                         // 0x0290(0x0020) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		float                                                      MinDesiredWidth;                                         // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENUM_MenuColors                                            TextColor;                                               // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTextColor(ENUM_MenuColors ColorSelector);
		void SetOutlineSettings(const struct FFontOutlineSettings& InFontInfo_OutlineSettings);
		void SetJustification(ETextJustify InJustification);
		void SetTypeFace(ENUM_AcuminCondensedTypeface Typeface);
		void SetFontSize(int32_t inFontSize);
		void SetText(const class FText& NewText);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_HUD_DefaultLabel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
