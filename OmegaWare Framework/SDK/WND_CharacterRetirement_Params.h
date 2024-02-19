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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnKeyUp
	 */
	struct UWND_CharacterRetirement_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio
	 */
	struct UWND_CharacterRetirement_C_StopAudio_Params
	{
	public:
		class UAudioComponent*                                     InAudioComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished
	 */
	struct UWND_CharacterRetirement_C_IsAudioFinished_Params
	{
	public:
		class UAudioComponent*                                     InAudioComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList
	 */
	struct UWND_CharacterRetirement_C_BuildCostList_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnFailure_8D7CEF664ECE349247F068951073F0FE
	 */
	struct UWND_CharacterRetirement_C_OnFailure_8D7CEF664ECE349247F068951073F0FE_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnSuccess_8D7CEF664ECE349247F068951073F0FE
	 */
	struct UWND_CharacterRetirement_C_OnSuccess_8D7CEF664ECE349247F068951073F0FE_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_CharacterRetirement_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData
	 */
	struct UWND_CharacterRetirement_C_SetData_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_CharacterRetirement_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct
	 */
	struct UWND_CharacterRetirement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown
	 */
	struct UWND_CharacterRetirement_C_OnShown_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor
	 */
	struct UWND_CharacterRetirement_C_HideMouseCursor_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature
	 */
	struct UWND_CharacterRetirement_C_BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire
	 */
	struct UWND_CharacterRetirement_C_Retire_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground
	 */
	struct UWND_CharacterRetirement_C_FadeInBackground_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio
	 */
	struct UWND_CharacterRetirement_C_StopCharacterAudio_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed
	 */
	struct UWND_CharacterRetirement_C_OnClosed_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWND_CharacterRetirement_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.AfterMissionControlSpeak
	 */
	struct UWND_CharacterRetirement_C_AfterMissionControlSpeak_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.TestRetire
	 */
	struct UWND_CharacterRetirement_C_TestRetire_Params
	{	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed
	 */
	struct UWND_CharacterRetirement_C_OnRewardsClosed_Params
	{
	public:
		class UWindowWidget*                                       Window;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement
	 */
	struct UWND_CharacterRetirement_C_ExecuteUbergraph_WND_CharacterRetirement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2MYW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
