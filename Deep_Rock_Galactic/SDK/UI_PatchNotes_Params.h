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
	 * Function UI_PatchNotes.UI_PatchNotes_C.SelectByPlatform
	 */
	struct UUI_PatchNotes_C_SelectByPlatform_Params
	{
	public:
		TArray<class FText>                                        Default;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        Xbox;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        Sony;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PatchNotes.UI_PatchNotes_C.UpdatePatchNotes
	 */
	struct UUI_PatchNotes_C_UpdatePatchNotes_Params
	{	};

	/**
	 * Function UI_PatchNotes.UI_PatchNotes_C.PreConstruct
	 */
	struct UUI_PatchNotes_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PatchNotes.UI_PatchNotes_C.BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_PatchNotes_C_BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PatchNotes.UI_PatchNotes_C.BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_PatchNotes_C_BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_PatchNotes.UI_PatchNotes_C.ExecuteUbergraph_UI_PatchNotes
	 */
	struct UUI_PatchNotes_C_ExecuteUbergraph_UI_PatchNotes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
