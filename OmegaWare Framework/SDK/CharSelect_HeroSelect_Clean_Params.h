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
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.HighlightClassChallenge
	 */
	struct UCharSelect_HeroSelect_Clean_C_HighlightClassChallenge_Params
	{
	public:
		TArray<class UObject*>                                     ClassRefs;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldHighlight;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OS2F[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USeasonChallenge*                                    Challenge;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyUp
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyDown
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.SetSelectedIndex
	 */
	struct UCharSelect_HeroSelect_Clean_C_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2X2M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.GetSelectedIndex
	 */
	struct UCharSelect_HeroSelect_Clean_C_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_350K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.HandleKeyEvent
	 */
	struct UCharSelect_HeroSelect_Clean_C_HandleKeyEvent_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsDown;                                                  // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4FJJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
		bool                                                       Handled;                                                 // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENDL[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Select
	 */
	struct UCharSelect_HeroSelect_Clean_C_Select_Params
	{	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Prev
	 */
	struct UCharSelect_HeroSelect_Clean_C_Prev_Params
	{	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Next
	 */
	struct UCharSelect_HeroSelect_Clean_C_Next_Params
	{	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected_Event
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnCharacterSelected_Event_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Update
	 */
	struct UCharSelect_HeroSelect_Clean_C_Update_Params
	{	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnHovered_Event_1
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnHovered_Event_1_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnSelect
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnSelect_Params
	{	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementHovered
	 */
	struct UCharSelect_HeroSelect_Clean_C_RetirementHovered_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementUnHovered
	 */
	struct UCharSelect_HeroSelect_Clean_C_RetirementUnHovered_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetireCharacter
	 */
	struct UCharSelect_HeroSelect_Clean_C_RetireCharacter_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnUnHoveredEvent
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnUnHoveredEvent_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.ExecuteUbergraph_CharSelect_HeroSelect_Clean
	 */
	struct UCharSelect_HeroSelect_Clean_C_ExecuteUbergraph_CharSelect_HeroSelect_Clean_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NLCF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterUnhovered__DelegateSignature
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnCharacterUnhovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetireCharacter__DelegateSignature
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnRetireCharacter__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementUnhovered__DelegateSignature
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnRetirementUnhovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementHovered__DelegateSignature
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnRetirementHovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterHovered__DelegateSignature
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnCharacterHovered__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected__DelegateSignature
	 */
	struct UCharSelect_HeroSelect_Clean_C_OnCharacterSelected__DelegateSignature_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
