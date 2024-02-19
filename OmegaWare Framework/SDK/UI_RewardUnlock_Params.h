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
	 * Function UI_RewardUnlock.UI_RewardUnlock_C.SelectCharacterID
	 */
	struct UUI_RewardUnlock_C_SelectCharacterID_Params
	{
	public:
		class UPlayerCharacterID*                                  OptionalID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  OutputPin;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails
	 */
	struct UUI_RewardUnlock_C_GetUnlockDetails_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_88JJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutTitle;                                                // 0x0008(0x0018)  (Parm, OutParm)
		class UTexture*                                            Icon;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        IconTint;                                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          BigImage;                                                // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct
	 */
	struct UUI_RewardUnlock_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim
	 */
	struct UUI_RewardUnlock_C_PlayReceiveAnim_Params
	{	};

	/**
	 * Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock
	 */
	struct UUI_RewardUnlock_C_ExecuteUbergraph_UI_RewardUnlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
