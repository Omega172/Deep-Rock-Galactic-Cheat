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
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_GetPlayerDetails_Params
	{
	public:
		TArray<class UPlayerCharacterID*>                          Players;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsClassLocked;                                           // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5I5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        OutColor;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutIcon;                                                 // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  OutPlayer;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_GetToolTip_Params
	{
	public:
		class UTOOLTIP_ServerEntry_Team_C*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_SetIndexBrush_Params
	{
	public:
		int32_t                                                    NumPlayers;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EntryNum;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UPlayerCharacterID*>                          Players;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsClassLocked;                                           // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BTIY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_SetNumPlayers_Params
	{
	public:
		int32_t                                                    NumPlayers;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJ6O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPlayerCharacterID*>                          Players;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsClassLocked;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_35CD[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_Construct_Params
	{	};

	/**
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
	 */
	struct UITM_ServerList_Entry_PlayerIcons_C_ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
