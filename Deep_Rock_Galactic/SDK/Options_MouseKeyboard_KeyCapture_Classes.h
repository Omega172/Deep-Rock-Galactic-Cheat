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
	 * WidgetBlueprintGeneratedClass Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C
	 * Size -> 0x00E0 (FullSize[0x0380] - InheritedSize[0x02A0])
	 */
	class UOptions_MouseKeyboard_KeyCapture_C : public UInputCaptureWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             ClearButton;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FocusedImage;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          KeyLabel;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnKeyCaptureFinished;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnKeyCaptureError;                                       // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnKeyCaptureChanged;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnKeyCaptureCancelled;                                   // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FKey                                                CapturedKey;                                             // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCustomKeySetting                                   ConflictingAction;                                       // 0x0318(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKey                                                NoneKey;                                                 // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                CurrentKey;                                              // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void UpdateClearButton();
		void UpdateKeyInfo(const struct FKey& Key);
		void No_8623E71E42D4951E6FF011979EF3C667();
		void Yes_8623E71E42D4951E6FF011979EF3C667();
		void BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void PreConstruct(bool IsDesignTime);
		void OnCustomKeyBindingsChanged();
		void Construct();
		void ReceiveKeyChanged(const struct FKey& InKey);
		void ReceiveKeyCaptured(const struct FKey& InKey);
		void ReceiveCapturingChanged(bool InCapturing);
		void ExecuteUbergraph_Options_MouseKeyboard_KeyCapture(int32_t EntryPoint);
		void OnKeyCaptureCancelled__DelegateSignature();
		void OnKeyCaptureChanged__DelegateSignature();
		void OnKeyCaptureError__DelegateSignature();
		void OnKeyCaptureFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
