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
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal
	 */
	struct UUI_InfirmaryStats_Item_C_OwnedByLocal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer
	 */
	struct UUI_InfirmaryStats_Item_C_GetPlayer_Params
	{
	public:
		class AFSDPlayerController*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter
	 */
	struct UUI_InfirmaryStats_Item_C_SetCategoryFilter_Params
	{
	public:
		TArray<class UTexture2D*>                                  Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat
	 */
	struct UUI_InfirmaryStats_Item_C_GetMissionStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct
	 */
	struct UUI_InfirmaryStats_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct
	 */
	struct UUI_InfirmaryStats_Item_C_Construct_Params
	{	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected
	 */
	struct UUI_InfirmaryStats_Item_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate
	 */
	struct UUI_InfirmaryStats_Item_C_MissonStatUpdate_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                StatValue;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item
	 */
	struct UUI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature
	 */
	struct UUI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature
	 */
	struct UUI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
