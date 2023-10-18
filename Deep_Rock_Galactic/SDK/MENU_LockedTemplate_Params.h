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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsUnlocked
	 */
	struct UMENU_LockedTemplate_C_GetIsUnlocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsLocked
	 */
	struct UMENU_LockedTemplate_C_GetIsLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.RequireOnePromotedCharacter
	 */
	struct UMENU_LockedTemplate_C_RequireOnePromotedCharacter_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5WYV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetLockIcon
	 */
	struct UMENU_LockedTemplate_C_SetLockIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMessaqe
	 */
	struct UMENU_LockedTemplate_C_SetMessaqe_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMenuLocked
	 */
	struct UMENU_LockedTemplate_C_SetMenuLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Locked;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7P77[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.OnKeyUp
	 */
	struct UMENU_LockedTemplate_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UMENU_LockedTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.Close
	 */
	struct UMENU_LockedTemplate_C_Close_Params
	{	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.Construct
	 */
	struct UMENU_LockedTemplate_C_Construct_Params
	{	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.PreConstruct
	 */
	struct UMENU_LockedTemplate_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.LockAnimFinished
	 */
	struct UMENU_LockedTemplate_C_LockAnimFinished_Params
	{	};

	/**
	 * Function MENU_LockedTemplate.MENU_LockedTemplate_C.ExecuteUbergraph_MENU_LockedTemplate
	 */
	struct UMENU_LockedTemplate_C_ExecuteUbergraph_MENU_LockedTemplate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
