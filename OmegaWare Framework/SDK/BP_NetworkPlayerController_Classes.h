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
	 * BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C
	 * Size -> 0x0068 (FullSize[0x0858] - InheritedSize[0x07F0])
	 */
	class ABP_NetworkPlayerController_C : public ABP_PlayerController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USCREEN_CharacterSelection_Base_C*                   CharSelectScreen;                                        // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScreen_BaseLoadLevel_C*                             LoaderScreenUI;                                          // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMenu_ServerStatus_C*                                TopBar;                                                  // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPopup_ReconnectController_C*                        ReconnectWidget;                                         // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowingReconnectcontroller;                              // 0x0818(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MTIN[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScreen_CharacterInfo_C*                             CharInfo;                                                // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimulateLateJoin;                                        // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1TUS[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CharacterSelectionClass[0x28];                           // 0x0830(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void CollapseAndRemoveFromParent(class UWidget* Widget);
		class UClass* GetLoaderScreenUIClass();
		void CleanupUI();
		void GetNonTakenHero(class UPlayerCharacterID** SelectedClass);
		void ReceiveBeginPlay();
		void OnBack();
		void OnPlayerCharacterPossesed_Event(class APawn* Pawn);
		void Server_RequestNonTakenHero();
		void Client_RecieveNonTakenHero(class UPlayerCharacterID* NewCharacter);
		void Server_SetCharacterSelected();
		void RecievePreClientTravel();
		void ReceiveDestroyed();
		void ShowReconnect(bool Show);
		void ExecuteUbergraph_BP_NetworkPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
