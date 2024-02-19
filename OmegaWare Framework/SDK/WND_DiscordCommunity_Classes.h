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
	 * WidgetBlueprintGeneratedClass WND_DiscordCommunity.WND_DiscordCommunity_C
	 * Size -> 0x0040 (FullSize[0x02E0] - InheritedSize[0x02A0])
	 */
	class UWND_DiscordCommunity_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_ButtonScalable_C*                             Basic_ButtonScalable;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable_C*                             Basic_ButtonScalable_C_1;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable_C*                             Basic_ButtonScalable_C_2;                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMENU_SpaceRigTemplate_C*                            MENU_TopBar;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScreen_DiscordScreen_C*                             Screen_DiscordScreen;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonTab_C*                                  ActiveTab;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCommunityGoal*                                      Goal;                                                    // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CloseWindow();
		void OnShown();
		void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void ExecuteUbergraph_WND_DiscordCommunity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
