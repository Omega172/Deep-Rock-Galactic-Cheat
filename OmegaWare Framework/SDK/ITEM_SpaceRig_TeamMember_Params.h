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
	 * Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.SetPlayerName
	 */
	struct UITEM_SpaceRig_TeamMember_C_SetPlayerName_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update
	 */
	struct UITEM_SpaceRig_TeamMember_C_Update_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFSDPlayerState*                                     Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct
	 */
	struct UITEM_SpaceRig_TeamMember_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct
	 */
	struct UITEM_SpaceRig_TeamMember_C_Construct_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember
	 */
	struct UITEM_SpaceRig_TeamMember_C_ExecuteUbergraph_ITEM_SpaceRig_TeamMember_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
