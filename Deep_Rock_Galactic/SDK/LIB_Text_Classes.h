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
	 * BlueprintGeneratedClass LIB_Text.LIB_Text_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_Text_C : public UBlueprintFunctionLibrary
	{
	public:
		void SelectCharacterText(class APlayerCharacter* Character, const class FText& DrillerText, const class FText& GunnerText, const class FText& ScoutText, const class FText& EngineerText, const class FText& BoscoText, const class FText& NoneText, class UObject* __WorldContext, class FText* OutText);
		void SelectCharacterClassText(class UPlayerCharacterID* CharacterClass, const class FText& DrillerText, const class FText& GunnerText, const class FText& ScoutText, const class FText& EngineerText, const class FText& BoscoText, const class FText& NoneText, class UObject* __WorldContext, class FText* OutText);
		void SelectCharacterIDText(class UPlayerCharacterID* characterID, const class FText& DrillerText, const class FText& GunnerText, const class FText& ScoutText, const class FText& EngineerText, const class FText& BoscoText, const class FText& NoneText, class UObject* __WorldContext, class FText* OutText);
		void GetTimeText(float Dividend, class UObject* __WorldContext, class FText* Text);
		void SetTextCased(class UTextBlock** Target, const class FText& InText, ENU_TextCase TextCase, class UObject* __WorldContext);
		void GetFontSize(class UTextBlock** Label, class UObject* __WorldContext, int32_t* Size);
		void SetFontSize(class UTextBlock** Label, int32_t NewSize, class UObject* __WorldContext);
		void SetTextUpperCased(class UTextBlock* Target, const class FText& InText, class UObject* __WorldContext);
		void GetDisconnectReasonCaption(EDisconnectReason DisconnectReason, class UObject* __WorldContext, class FText* Text);
		void GetDisconnectReasonText(EDisconnectReason DisconnectReason, class UObject* __WorldContext, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
