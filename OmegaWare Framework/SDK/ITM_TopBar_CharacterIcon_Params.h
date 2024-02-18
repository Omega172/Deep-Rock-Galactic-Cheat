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
	 * Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState
	 */
	struct UITM_TopBar_CharacterIcon_C_FromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    SelectedCharacter;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData
	 */
	struct UITM_TopBar_CharacterIcon_C_SetHeroData_Params
	{
	public:
		float                                                      XPProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TimesRetired;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHost;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3YQC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Character;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update
	 */
	struct UITM_TopBar_CharacterIcon_C_Update_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct
	 */
	struct UITM_TopBar_CharacterIcon_C_Construct_Params
	{	};

	/**
	 * Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned
	 */
	struct UITM_TopBar_CharacterIcon_C_OnPlayerCharacterSpawned_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon
	 */
	struct UITM_TopBar_CharacterIcon_C_ExecuteUbergraph_ITM_TopBar_CharacterIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KYXC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
