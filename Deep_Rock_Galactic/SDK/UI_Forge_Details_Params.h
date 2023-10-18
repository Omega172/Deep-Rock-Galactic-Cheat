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
	 * Function UI_Forge_Details.UI_Forge_Details_C.SequenceEvent__ENTRYPOINTUI_Forge_Details_1
	 */
	struct UUI_Forge_Details_C_SequenceEvent__ENTRYPOINTUI_Forge_Details_1_Params
	{	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.StartCounting
	 */
	struct UUI_Forge_Details_C_StartCounting_Params
	{	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress
	 */
	struct UUI_Forge_Details_C_SetCountProgress_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore
	 */
	struct UUI_Forge_Details_C_OpenMatrixCore_Params
	{	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription
	 */
	struct UUI_Forge_Details_C_SetItemDescription_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Subtitle;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic
	 */
	struct UUI_Forge_Details_C_ShowSchematic_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct
	 */
	struct UUI_Forge_Details_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.Construct
	 */
	struct UUI_Forge_Details_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished
	 */
	struct UUI_Forge_Details_C_AnimOpenMatrixFinished_Params
	{	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting
	 */
	struct UUI_Forge_Details_C_StopCounting_Params
	{	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details
	 */
	struct UUI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature
	 */
	struct UUI_Forge_Details_C_OnMatrixCoreOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
