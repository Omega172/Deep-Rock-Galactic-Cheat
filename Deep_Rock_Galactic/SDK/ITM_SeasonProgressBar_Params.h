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
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.AnimateCount
	 */
	struct UITM_SeasonProgressBar_C_AnimateCount_Params
	{
	public:
		int32_t                                                    SeasonXP;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddedXP;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSeasonEvent>                                SeasonEvents;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.AnimateXP
	 */
	struct UITM_SeasonProgressBar_C_AnimateXP_Params
	{
	public:
		int32_t                                                    FromLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ToLevel;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FromPercent;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToPercent;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FromXP;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ToXP;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateText
	 */
	struct UITM_SeasonProgressBar_C_UpdateText_Params
	{
	public:
		int32_t                                                    CurrentLevel;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Percent;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateTextFromXP
	 */
	struct UITM_SeasonProgressBar_C_UpdateTextFromXP_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.UpdateXPText
	 */
	struct UITM_SeasonProgressBar_C_UpdateXPText_Params
	{
	public:
		int32_t                                                    currXP;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.ContinueCount
	 */
	struct UITM_SeasonProgressBar_C_ContinueCount_Params
	{	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.PreConstruct
	 */
	struct UITM_SeasonProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.ExecuteUbergraph_ITM_SeasonProgressBar
	 */
	struct UITM_SeasonProgressBar_C_ExecuteUbergraph_ITM_SeasonProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.LevelReached__DelegateSignature
	 */
	struct UITM_SeasonProgressBar_C_LevelReached__DelegateSignature_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SeasonProgressBar.ITM_SeasonProgressBar_C.XPCountFinished__DelegateSignature
	 */
	struct UITM_SeasonProgressBar_C_XPCountFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
