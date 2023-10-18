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
	 * WidgetBlueprintGeneratedClass UI_PatchNotes.UI_PatchNotes_C
	 * Size -> 0x00B8 (FullSize[0x0318] - InheritedSize[0x0260])
	 */
	class UUI_PatchNotes_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_Menu_SmallWindowWithHeader_Redesign_C*        Basic_Menu_SmallWindowWithHeader;                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ScrollBarBox_C*                               Basic_ScrollBarBox;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      PatchTextBlock;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ScrollArrow_C*                                ScrollArrow_Left;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ScrollArrow_C*                                ScrollArrow_Right;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    PatchNoteIndex;                                          // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6V25[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        PatchNoteHeaders_Steam;                                  // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        PatchNotes_Steam;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        PatchNoteHeaders_Xbox;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        PatchNotes_Xbox;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        Headers;                                                 // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        Notes;                                                   // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        PatchNoteHeaders_Sony;                                   // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        PatchNotes_Sony;                                         // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		TArray<class FText> SelectByPlatform(TArray<class FText>* Default, TArray<class FText>* Xbox, TArray<class FText>* Sony);
		void UpdatePatchNotes();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void ExecuteUbergraph_UI_PatchNotes(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
