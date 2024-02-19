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
	 * WidgetBlueprintGeneratedClass CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C
	 * Size -> 0x00C8 (FullSize[0x0328] - InheritedSize[0x0260])
	 */
	class UCharSelect_HeroSelect_Clean_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UICON_HeroSelect_C*                                  ICON_HeroSelect_66;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UICON_HeroSelect_C*                                  ICON_HeroSelect_C_67;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UICON_HeroSelect_C*                                  ICON_HeroSelect_C_68;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UICON_HeroSelect_C*                                  ICON_HeroSelect_C_69;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SelectionBox;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCharacterSelected;                                     // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UAudioComponent*                                     ShoutAudioComponent;                                     // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCharacterHovered;                                      // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DoSelectedShouts;                                        // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QEPF[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharacterUnhovered;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRetirementHovered;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRetirementUnhovered;                                   // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRetireCharacter;                                       // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       OnlyShowCharactersNotInUse;                              // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanSelectCharacters;                                     // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       CanPromote;                                              // 0x0302(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_N7KA[0x5];                                   // 0x0303(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UICON_HeroSelect_C*>                          HeroWidgets;                                             // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FMargin                                             IconPadding;                                             // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HighlightClassChallenge(TArray<class UObject*>* ClassRefs, bool ShouldHighlight, class USeasonChallenge* Challenge);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetSelectedIndex(int32_t Index, bool* Valid);
		void GetSelectedIndex(int32_t* Index);
		struct FEventReply HandleKeyEvent(struct FKeyEvent* InKeyEvent, bool IsDown, bool* Handled);
		void Select();
		void Prev();
		void Next();
		void OnCharacterSelected_Event(class UPlayerCharacterID* Character);
		void Update();
		void OnHovered_Event_1(class UPlayerCharacterID* Character);
		void OnSelect();
		void RetirementHovered(class UPlayerCharacterID* Character);
		void RetirementUnHovered(class UPlayerCharacterID* Character);
		void RetireCharacter(class UPlayerCharacterID* Character);
		void OnUnHoveredEvent(class UPlayerCharacterID* characterID);
		void ExecuteUbergraph_CharSelect_HeroSelect_Clean(int32_t EntryPoint);
		void OnCharacterUnhovered__DelegateSignature(class UPlayerCharacterID* characterID);
		void OnRetireCharacter__DelegateSignature(class UPlayerCharacterID* Character);
		void OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character);
		void OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character);
		void OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
		void OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
