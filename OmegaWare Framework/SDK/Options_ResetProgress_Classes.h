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
	 * WidgetBlueprintGeneratedClass Options_ResetProgress.Options_ResetProgress_C
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UOptions_ResetProgress_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_ButtonWithControls_C*                         Basic_ButtonWithControls;                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224();
		void OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224();
		void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
		void Answer(bool Yes);
		void TutorialAnswer(bool Yes);
		void ExecuteUbergraph_Options_ResetProgress(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
