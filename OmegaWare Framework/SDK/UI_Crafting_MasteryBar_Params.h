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
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.SetLevelAndXP
	 */
	struct UUI_Crafting_MasteryBar_C_SetLevelAndXP_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InXP;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.SetProgressAnim
	 */
	struct UUI_Crafting_MasteryBar_C_SetProgressAnim_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Finished_D0849C0B40CCD7B2D78053B311632C3E
	 */
	struct UUI_Crafting_MasteryBar_C_Finished_D0849C0B40CCD7B2D78053B311632C3E_Params
	{	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Finished_6474C18043258635ED36ACA9F1D56472
	 */
	struct UUI_Crafting_MasteryBar_C_Finished_6474C18043258635ED36ACA9F1D56472_Params
	{	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.PreConstruct
	 */
	struct UUI_Crafting_MasteryBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Construct
	 */
	struct UUI_Crafting_MasteryBar_C_Construct_Params
	{	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.OnVanityMasteryChanged
	 */
	struct UUI_Crafting_MasteryBar_C_OnVanityMasteryChanged_Params
	{
	public:
		struct FVanityMasteryResult                                Result;                                                  // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.StartAnimProgress
	 */
	struct UUI_Crafting_MasteryBar_C_StartAnimProgress_Params
	{	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.ExecuteUbergraph_UI_Crafting_MasteryBar
	 */
	struct UUI_Crafting_MasteryBar_C_ExecuteUbergraph_UI_Crafting_MasteryBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.OnMasteryAnimFinished__DelegateSignature
	 */
	struct UUI_Crafting_MasteryBar_C_OnMasteryAnimFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
