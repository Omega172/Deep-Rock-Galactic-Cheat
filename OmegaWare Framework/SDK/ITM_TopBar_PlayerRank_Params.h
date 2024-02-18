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
	 * Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState
	 */
	struct UITM_TopBar_PlayerRank_C_FromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct
	 */
	struct UITM_TopBar_PlayerRank_C_Construct_Params
	{	};

	/**
	 * Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct
	 */
	struct UITM_TopBar_PlayerRank_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars
	 */
	struct UITM_TopBar_PlayerRank_C_SetRankAndStars_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Stars;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged
	 */
	struct UITM_TopBar_PlayerRank_C_OnPlayerProgressChanged_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPlayerProgress                                     Progress;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank
	 */
	struct UITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADXB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
