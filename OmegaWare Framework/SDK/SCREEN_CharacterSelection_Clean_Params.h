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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.HighlightClassChallenges
	 */
	struct USCREEN_CharacterSelection_Clean_C_HighlightClassChallenges_Params
	{
	public:
		TArray<class UObject*>                                     AssetReferences;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldHighlight;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5CE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USeasonChallenge*                                    Challenge;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnCloseMenuReleased_Params
	{
	public:
		bool                                                       Handled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass
	 */
	struct USCREEN_CharacterSelection_Clean_C_GetSelectedClass_Params
	{
	public:
		class UPlayerCharacterID*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct
	 */
	struct USCREEN_CharacterSelection_Clean_C_Construct_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed
	 */
	struct USCREEN_CharacterSelection_Clean_C_BackPressed_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnInputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnSelectedCharacterChanged_Event_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct
	 */
	struct USCREEN_CharacterSelection_Clean_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription
	 */
	struct USCREEN_CharacterSelection_Clean_C_UpdateCharacterDescription_Params
	{
	public:
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility
	 */
	struct USCREEN_CharacterSelection_Clean_C_ReceiveNewVisibility_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnShown_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnClosed_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie
	 */
	struct USCREEN_CharacterSelection_Clean_C_CreateMovie_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie
	 */
	struct USCREEN_CharacterSelection_Clean_C_StopMovie_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct USCREEN_CharacterSelection_Clean_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand
	 */
	struct USCREEN_CharacterSelection_Clean_C_ReceiveCloseCommand_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout
	 */
	struct USCREEN_CharacterSelection_Clean_C_OnNewLoadout_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show
	 */
	struct USCREEN_CharacterSelection_Clean_C_Show_Params
	{	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature
	 */
	struct USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature
	 */
	struct USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean
	 */
	struct USCREEN_CharacterSelection_Clean_C_ExecuteUbergraph_SCREEN_CharacterSelection_Clean_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5WP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature
	 */
	struct USCREEN_CharacterSelection_Clean_C_CharacterSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
