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
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible
	 */
	struct UMENU_SpaceRigTemplate_C_IsCloseButtonVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode
	 */
	struct UMENU_SpaceRigTemplate_C_SetBackMode_Params
	{
	public:
		bool                                                       CloseIsBack;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
	 */
	struct UMENU_SpaceRigTemplate_C_UpdatePlayerCount_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
	 */
	struct UMENU_SpaceRigTemplate_C_SetCloseButtonVisible_Params
	{
	public:
		bool                                                       ShowCloseButton;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Finished_ED75AEDE411AF062E427D788A257F78D
	 */
	struct UMENU_SpaceRigTemplate_C_Finished_ED75AEDE411AF062E427D788A257F78D_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
	 */
	struct UMENU_SpaceRigTemplate_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
	 */
	struct UMENU_SpaceRigTemplate_C_Construct_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
	 */
	struct UMENU_SpaceRigTemplate_C_Refresh_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UMENU_SpaceRigTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
	 */
	struct UMENU_SpaceRigTemplate_C_OnCreditsChanged_Event_Params
	{
	public:
		int32_t                                                    Credits;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
	 */
	struct UMENU_SpaceRigTemplate_C_OnPlayerJoined_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
	 */
	struct UMENU_SpaceRigTemplate_C_OnPlayerLeave_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event
	 */
	struct UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Event_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events
	 */
	struct UMENU_SpaceRigTemplate_C_SetupPlayerEvents_Params
	{
	public:
		class APlayerState*                                        NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
	 */
	struct UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button
	 */
	struct UMENU_SpaceRigTemplate_C_ClickCloseButton_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn
	 */
	struct UMENU_SpaceRigTemplate_C_PlayFadeIn_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.AnimateTopBarVisible
	 */
	struct UMENU_SpaceRigTemplate_C_AnimateTopBarVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
	 */
	struct UMENU_SpaceRigTemplate_C_ExecuteUbergraph_MENU_SpaceRigTemplate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature
	 */
	struct UMENU_SpaceRigTemplate_C_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
	 */
	struct UMENU_SpaceRigTemplate_C_OnClosedClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
