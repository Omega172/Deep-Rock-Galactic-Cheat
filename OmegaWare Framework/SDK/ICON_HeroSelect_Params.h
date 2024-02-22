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
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.InternalUpdateHovered
	 */
	struct UICON_HeroSelect_C_InternalUpdateHovered_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.IsEligibleForPromotion
	 */
	struct UICON_HeroSelect_C_IsEligibleForPromotion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_16PM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable
	 */
	struct UICON_HeroSelect_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass
	 */
	struct UICON_HeroSelect_C_GetSelectedClass_Params
	{
	public:
		class UPlayerCharacterID*                                  DesiredCharacterClass;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp
	 */
	struct UICON_HeroSelect_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale
	 */
	struct UICON_HeroSelect_C_SetScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected
	 */
	struct UICON_HeroSelect_C_UpdateSelected_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected
	 */
	struct UICON_HeroSelect_C_IsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O0M0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass
	 */
	struct UICON_HeroSelect_C_SetCharacterClass_Params
	{
	public:
		class UPlayerCharacterID*                                  Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter
	 */
	struct UICON_HeroSelect_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave
	 */
	struct UICON_HeroSelect_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.On Click
	 */
	struct UICON_HeroSelect_C_OnClick_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged
	 */
	struct UICON_HeroSelect_C_SelectedCharacterChanged_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event
	 */
	struct UICON_HeroSelect_C_OnCharacterStatsChanged_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.Init
	 */
	struct UICON_HeroSelect_C_Init_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct
	 */
	struct UICON_HeroSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
	 */
	struct UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
	 */
	struct UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature
	 */
	struct UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button
	 */
	struct UICON_HeroSelect_C_UpdateRetirementButton_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.Tick
	 */
	struct UICON_HeroSelect_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.SetChallengeIcon
	 */
	struct UICON_HeroSelect_C_SetChallengeIcon_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O827[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.testselectcharacter
	 */
	struct UICON_HeroSelect_C_testselectcharacter_Params
	{	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect
	 */
	struct UICON_HeroSelect_C_ExecuteUbergraph_ICON_HeroSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnUnhovered__DelegateSignature
	 */
	struct UICON_HeroSelect_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature
	 */
	struct UICON_HeroSelect_C_OnRetireClicked__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature
	 */
	struct UICON_HeroSelect_C_OnRetirementUnhovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature
	 */
	struct UICON_HeroSelect_C_OnRetirementHovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature
	 */
	struct UICON_HeroSelect_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature
	 */
	struct UICON_HeroSelect_C_OnCharacterSelected__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
