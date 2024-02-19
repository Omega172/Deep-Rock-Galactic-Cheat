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
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.SetPlayerName
	 */
	struct UITEM_SpaceRig_PlayerRank_C_SetPlayerName_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct
	 */
	struct UITEM_SpaceRig_PlayerRank_C_Construct_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update
	 */
	struct UITEM_SpaceRig_PlayerRank_C_Update_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event
	 */
	struct UITEM_SpaceRig_PlayerRank_C_OnCreditsChanged_Event_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged
	 */
	struct UITEM_SpaceRig_PlayerRank_C_OnPlayerProgressChanged_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPlayerProgress                                     Progress;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct
	 */
	struct UITEM_SpaceRig_PlayerRank_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank
	 */
	struct UITEM_SpaceRig_PlayerRank_C_ExecuteUbergraph_ITEM_SpaceRig_PlayerRank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
