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
	 * WidgetBlueprintGeneratedClass UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C
	 * Size -> 0x0054 (FullSize[0x02B4] - InheritedSize[0x0260])
	 */
	class UUI_Forge_Rewards_Selector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimPing;                                                // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimBeginSelection;                                      // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBackgroundBlur*                                     FadeBlur;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Forge_Rewards_SelectorItem_C*                    Item_Left;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Forge_Rewards_SelectorItem_C*                    Item_Right;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      Selection_Panel;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnRewardSelected;                                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Level;                                                   // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Offset;                                                  // 0x02AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Reset();
		void EndPickReward(class USchematic* InReward);
		void PopRandomReward(TMap<class UPlayerCharacterID*, class USchematic*> Rewards, const struct FRandomStream& Random, class UPlayerCharacterID** OutCharacter, class USchematic** OutReward);
		void BeginPickReward(int32_t InLevel, int32_t InSeed);
		void Construct();
		void OnClicked(class USchematic* InSchematic);
		void OnIntroStarted();
		void OnIntroEnded();
		void TryPing();
		void BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature();
		void BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature();
		void BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature();
		void BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature();
		void OnPingEnded();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_Forge_Rewards_Selector(int32_t EntryPoint);
		void OnRewardSelected__DelegateSignature(class USchematic* InReward);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
