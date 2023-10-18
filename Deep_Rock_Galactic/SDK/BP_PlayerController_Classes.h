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
	 * BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
	 * Size -> 0x0060 (FullSize[0x07B0] - InheritedSize[0x0750])
	 */
	class ABP_PlayerController_C : public ABP_PlayerControllerBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0750(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ProceduralController_C*                          ProceduralController;                                    // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MainMenuRequested;                                       // 0x0760(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HUD_Visible;                                             // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9O5Q[0x3];                                   // 0x0771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CheatCounter;                                            // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CheatMenuRequested;                                      // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              MouseCursor_DO_NOT_DELETE;                               // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ToggleFPS;                                               // 0x0790(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             QuickCheatMenuRequested;                                 // 0x07A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateTutorialComplete();
		bool ShouldSkipEndscreen();
		void DestroyCharacter();
		void IsHUDVisible(bool* Visible);
		void OnLoaded_0556572242FB261AF5947C9A16CF353A(class UObject* Loaded);
		void InpActEvt_O_K2Node_InputKeyEvent_17(const struct FKey& Key);
		void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_PushToTalk_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_MenuButton_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Eight_K2Node_InputKeyEvent_16(const struct FKey& Key);
		void InpActEvt_Eight_K2Node_InputKeyEvent_15(const struct FKey& Key);
		void InpActEvt_Nine_K2Node_InputKeyEvent_14(const struct FKey& Key);
		void InpActEvt_Nine_K2Node_InputKeyEvent_13(const struct FKey& Key);
		void InpActEvt_Zero_K2Node_InputKeyEvent_12(const struct FKey& Key);
		void InpActEvt_Zero_K2Node_InputKeyEvent_11(const struct FKey& Key);
		void InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_H_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Subtract_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Add_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Multiply_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_CtrlAlt_N_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_CtrlAlt_O_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void SelectNewHero(class UPlayerCharacterID* Hero);
		void ReceiveBeginPlay();
		void OnGenerationDone();
		void Server_RestartLevel();
		void ReceiveEndLevel();
		void Server_ClientReady();
		void SelectLateJoinCharacter(class UPlayerCharacterID* Hero);
		void RequestLoadScreen();
		void ShowSelectCharacterScreen();
		void ShowLoadingScrren();
		void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32_t numberOfPlayersInPod);
		void Server_SetLag();
		void ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint);
		void QuickCheatMenuRequested__DelegateSignature();
		void ToggleFPS__DelegateSignature();
		void CheatMenuRequested__DelegateSignature();
		void MainMenuRequested__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
