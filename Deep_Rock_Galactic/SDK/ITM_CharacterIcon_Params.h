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
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowSonySessionLeader
	 */
	struct UITM_CharacterIcon_C_SetShowSonySessionLeader_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID
	 */
	struct UITM_CharacterIcon_C_SetFromCharacterID_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass
	 */
	struct UITM_CharacterIcon_C_SetFromCharacterClass_Params
	{
	public:
		class UPlayerCharacterID*                                  InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter
	 */
	struct UITM_CharacterIcon_C_SetFromPlayerCharacter_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState
	 */
	struct UITM_CharacterIcon_C_SetFromPlayerState_Params
	{
	public:
		class APlayerState*                                        InState;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize
	 */
	struct UITM_CharacterIcon_C_SetBaseSize_Params
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E3WE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion
	 */
	struct UITM_CharacterIcon_C_SetShowPromotion_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage
	 */
	struct UITM_CharacterIcon_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor
	 */
	struct UITM_CharacterIcon_C_SetCharacterImageAndColor_Params
	{
	public:
		class UPlayerCharacterID*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon
	 */
	struct UITM_CharacterIcon_C_SetShowHostIcon_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct
	 */
	struct UITM_CharacterIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon
	 */
	struct UITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
