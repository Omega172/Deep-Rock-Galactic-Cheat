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
	 * Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetSelected
	 */
	struct UItm_MinersManual_TabsHeader_C_SetSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KTUO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.Construct
	 */
	struct UItm_MinersManual_TabsHeader_C_Construct_Params
	{	};

	/**
	 * Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UItm_MinersManual_TabsHeader_C_BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UItm_MinersManual_TabsHeader_C_BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetData
	 */
	struct UItm_MinersManual_TabsHeader_C_SetData_Params
	{
	public:
		class U_MENU_MinersManual_C*                               _Menu_Lore;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.ExecuteUbergraph_Itm_MinersManual_TabsHeader
	 */
	struct UItm_MinersManual_TabsHeader_C_ExecuteUbergraph_Itm_MinersManual_TabsHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
