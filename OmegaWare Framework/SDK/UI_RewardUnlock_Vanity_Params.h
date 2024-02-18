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
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SetCharacterIcon
	 */
	struct UUI_RewardUnlock_Vanity_C_SetCharacterIcon_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  OutCharacterID;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SelectCharacterID
	 */
	struct UUI_RewardUnlock_Vanity_C_SelectCharacterID_Params
	{
	public:
		class UPlayerCharacterID*                                  OptionalID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  OutputPin;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.GetUnlockDetails
	 */
	struct UUI_RewardUnlock_Vanity_C_GetUnlockDetails_Params
	{
	public:
		class FText                                                OutTitle;                                                // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                OutSubTitle;                                             // 0x0018(0x0018)  (Parm, OutParm)
		class UTexture*                                            Icon;                                                    // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PreConstruct
	 */
	struct UUI_RewardUnlock_Vanity_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PlayReceiveAnim
	 */
	struct UUI_RewardUnlock_Vanity_C_PlayReceiveAnim_Params
	{	};

	/**
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.Construct
	 */
	struct UUI_RewardUnlock_Vanity_C_Construct_Params
	{	};

	/**
	 * Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.ExecuteUbergraph_UI_RewardUnlock_Vanity
	 */
	struct UUI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
