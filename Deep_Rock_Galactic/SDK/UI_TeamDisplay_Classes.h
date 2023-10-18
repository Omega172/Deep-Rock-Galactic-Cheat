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
	 * WidgetBlueprintGeneratedClass UI_TeamDisplay.UI_TeamDisplay_C
	 * Size -> 0x0052 (FullSize[0x02B2] - InheritedSize[0x0260])
	 */
	class UUI_TeamDisplay_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            Holder_FriendInvite;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITEM_SpaceRig_PersonalCharacterLevel_C*             HUD_PlayerClass_SpaceRig;                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_AdvancedLabel_C*                                 InviteLabel;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITEM_SpaceRig_TeamMember_C*                         ITEM_SpaceRig_TeamMember;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITEM_SpaceRig_TeamMember_C*                         ITEM_SpaceRig_TeamMember_260;                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITEM_SpaceRig_TeamMember_C*                         ITEM_SpaceRig_TeamMember_576;                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UITEM_SpaceRig_TeamMember_C*>                 TeamIcons;                                               // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AFSDGameModeSpaceRig*                                GameMode;                                                // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSoloSession;                                           // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSessionStarted;                                        // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetParents(TArray<class FString>* Names1);
		void GetTeam(TArray<class AFSDPlayerState*>* OutTeamMembers);
		void UpdateIcons();
		void Construct();
		void OnFirstWindowOpened();
		void OnLastWindowClosed();
		void SetupInviteFriends();
		void PreConstruct(bool IsDesignTime);
		void UpdateFriendInviteVisibility();
		void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
		void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
		void OnSessionLeaderChanged(class APlayerState* PlayerState);
		void ExecuteUbergraph_UI_TeamDisplay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
