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
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData
	 */
	struct UITM_MasteryBar_C_SetMasteryData_Params
	{
	public:
		class AFSDPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasMasteryLevels;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GK2X[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox
	 */
	struct UITM_MasteryBar_C_AddMasteryBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels
	 */
	struct UITM_MasteryBar_C_CreateMasteryLevels_Params
	{
	public:
		int32_t                                                    maxMastery;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentMastery;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMasteryItem>                                masteryLevels;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct
	 */
	struct UITM_MasteryBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased
	 */
	struct UITM_MasteryBar_C_ItemUpgradePurchased_Params
	{	};

	/**
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar
	 */
	struct UITM_MasteryBar_C_ExecuteUbergraph_ITM_MasteryBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature
	 */
	struct UITM_MasteryBar_C_OnItemRewarded__DelegateSignature_Params
	{
	public:
		struct FMasteryItem                                        Reward;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
