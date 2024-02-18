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
	 * WidgetBlueprintGeneratedClass ITM_Modding_LoadoutSelection.ITM_Modding_LoadoutSelection_C
	 * Size -> 0x0054 (FullSize[0x02B4] - InheritedSize[0x0260])
	 */
	class UITM_Modding_LoadoutSelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_LoadoutIconSelector_C*                          ITM_LoadoutIconSelector;                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Modding_Loadout_C*                              ITM_Modding_LoadoutA;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Modding_Loadout_C*                              ITM_Modding_LoadoutB;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Modding_Loadout_C*                              ITM_Modding_LoadoutC;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Modding_Loadout_C*                              ITM_Modding_LoadoutD;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ModdingSlots;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSlotLoaded;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBasic_ToolTip_HeadlineAndText_C*                    SelectorTooltip;                                         // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentSlotNumber;                                       // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* GetSelectorTooltipWidget();
		void SetSelectorVisibility(bool IsVisible);
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_0_OnSlotLoaded__DelegateSignature();
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_1_OnSlotLoaded__DelegateSignature();
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_2_OnSlotLoaded__DelegateSignature();
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_3_OnSlotLoaded__DelegateSignature();
		void Construct();
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutB_K2Node_ComponentBoundEvent_5_IconButtonClicked__DelegateSignature(int32_t SlotNumber);
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutC_K2Node_ComponentBoundEvent_6_IconButtonClicked__DelegateSignature(int32_t SlotNumber);
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutD_K2Node_ComponentBoundEvent_7_IconButtonClicked__DelegateSignature(int32_t SlotNumber);
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_8_OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32_t ImageIndex);
		void BndEvt__ITM_Modding_LoadoutSelection_ITM_Modding_LoadoutA_K2Node_ComponentBoundEvent_9_IconButtonClicked__DelegateSignature(int32_t SlotNumber);
		void ExecuteUbergraph_ITM_Modding_LoadoutSelection(int32_t EntryPoint);
		void OnSlotLoaded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
