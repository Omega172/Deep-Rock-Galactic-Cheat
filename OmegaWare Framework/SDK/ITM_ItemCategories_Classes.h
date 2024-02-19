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
	 * WidgetBlueprintGeneratedClass ITM_ItemCategories.ITM_ItemCategories_C
	 * Size -> 0x00E0 (FullSize[0x0340] - InheritedSize[0x0260])
	 */
	class UITM_ItemCategories_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_Menu_ColorBar_C*                              Basic_Menu_ColorBar_C_5;                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlurBackground_C*                                   BlurBackground_C_2;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_Armor;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_Beard;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_Eyebrows;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_HairColor;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_Headwear;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_Moustache;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_Sideburns;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBTN_ItemCategory_C*                                 BTN_SkinColor;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DATA_CategoryName;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BTN_ArmorClicked;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_BeardClicked;                                        // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_EyebrowsClicked;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_SkinColorClicked;                                    // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_HeadwearClicked;                                     // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_SideburnsClicked;                                    // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_MoustacheClicked;                                    // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BTN_HairColorClicked;                                    // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetButton(EVanitySlot Slot, class UBTN_ItemCategory_C** Button);
		void BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
		void BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
		void BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
		void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
		void BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
		void BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature();
		void BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature();
		void SetData(class UPlayerCharacterID* characterID);
		void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
		void OnClosed();
		void ExecuteUbergraph_ITM_ItemCategories(int32_t EntryPoint);
		void BTN_HairColorClicked__DelegateSignature();
		void BTN_MoustacheClicked__DelegateSignature();
		void BTN_SideburnsClicked__DelegateSignature();
		void BTN_HeadwearClicked__DelegateSignature();
		void BTN_SkinColorClicked__DelegateSignature();
		void BTN_EyebrowsClicked__DelegateSignature();
		void BTN_BeardClicked__DelegateSignature();
		void BTN_ArmorClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
