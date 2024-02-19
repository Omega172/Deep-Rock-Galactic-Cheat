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
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetFSDEventSettings
	 */
	struct UUI_JettyBoots_StartScreen_C_SetFSDEventSettings_Params
	{
	public:
		bool                                                       InHasSettings;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PDDH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJettyBootEventSettings                             InSettings;                                              // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Start
	 */
	struct UUI_JettyBoots_StartScreen_C_Start_Params
	{
	public:
		bool                                                       StartWithHighScores;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetHighScores
	 */
	struct UUI_JettyBoots_StartScreen_C_SetHighScores_Params
	{
	public:
		TArray<struct FJettyBootsScore>                            InHighScores;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InLastIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutCurrentBest;                                          // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_501568F5450B58B30B9BA992AA66184E
	 */
	struct UUI_JettyBoots_StartScreen_C_Finished_501568F5450B58B30B9BA992AA66184E_Params
	{	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_FD22870B47131B500E9FB18111157FEE
	 */
	struct UUI_JettyBoots_StartScreen_C_Finished_FD22870B47131B500E9FB18111157FEE_Params
	{	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Construct
	 */
	struct UUI_JettyBoots_StartScreen_C_Construct_Params
	{	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.PlayBootAnim
	 */
	struct UUI_JettyBoots_StartScreen_C_PlayBootAnim_Params
	{	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SwitchContent
	 */
	struct UUI_JettyBoots_StartScreen_C_SwitchContent_Params
	{	};

	/**
	 * Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.ExecuteUbergraph_UI_JettyBoots_StartScreen
	 */
	struct UUI_JettyBoots_StartScreen_C_ExecuteUbergraph_UI_JettyBoots_StartScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
