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
	 * WidgetBlueprintGeneratedClass HUD_TutorialWidget.HUD_TutorialWidget_C
	 * Size -> 0x0039 (FullSize[0x02C1] - InheritedSize[0x0288])
	 */
	class UHUD_TutorialWidget_C : public UTutorialWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Exit;                                                    // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UITM_BasicTutorialWindow_C*                          ITM_BasicTutorialWindow;                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      AnimationSpeed;                                          // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MEVZ[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultHeader;                                           // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsChangingHintText;                                      // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnShow(const class FText& Text, const class FText& Title, const class FText& TaskText, class UTexture2D* Image);
		void Construct();
		void OnHide(bool watched);
		void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature();
		void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature();
		void ContinueChange();
		void ExecuteUbergraph_HUD_TutorialWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
