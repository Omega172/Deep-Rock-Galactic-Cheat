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
	 * WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C
	 * Size -> 0x00D0 (FullSize[0x0368] - InheritedSize[0x0298])
	 */
	class UUI_AdvancedLabel_C : public UFSDAdvancedLabel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        Lines;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x02A8(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class UHorizontalBox*                                      CurrentLine;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IconSize;                                                // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextTint;                                                // 0x030C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyNameTint;                                             // 0x031C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PCIconTint;                                              // 0x032C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ControllerIconTint;                                      // 0x033C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IconSize_ControllerOverride;                             // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ShadowColor;                                             // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ShadowOffset;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetFont(const struct FSlateFontInfo& InFont, bool InKeepFontSize);
		void SetIconSize(int32_t IconSize, int32_t IconSize_ControllerOverride);
		void SetFontSize(int32_t FontSize);
		void SetPreviewAs(unsigned char PreviewAs);
		void SetTints(const struct FLinearColor& TextTint, const struct FLinearColor& KeyNameTint, const struct FLinearColor& PCIconTint, const struct FLinearColor& ControllerIconTint);
		void SetKeyNameTint(const struct FLinearColor& KeyNameTint);
		void SetIconTint(const struct FLinearColor& PCIconTint, const struct FLinearColor& ControllerIconTint);
		void SetTextTint(const struct FLinearColor& TextTint);
		void OnNewLine(int32_t Index);
		void OnAddIcon(const class FString& Name, const struct FActionIconMapping& Icon);
		void OnAddKeyName(const class FString& Name);
		void OnAddString(const class FString& Value);
		void OnReset();
		void ExecuteUbergraph_UI_AdvancedLabel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
