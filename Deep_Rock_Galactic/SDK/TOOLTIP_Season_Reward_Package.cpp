/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        inTitle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDescription                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UPlayerCharacterID*                          inCharacterID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               inShowIcon                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_Season_Reward_C::SetInfo(const class FText& inTitle, const class FText& InCategory, const class FText& InDescription, class UPlayerCharacterID* inCharacterID, bool inShowIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetInfo");
		
		UTOOLTIP_Season_Reward_C_SetInfo_Params params {};
		params.inTitle = inTitle;
		params.InCategory = InCategory;
		params.InDescription = InDescription;
		params.inCharacterID = inCharacterID;
		params.inShowIcon = inShowIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    DynMat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowCost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Season_Reward_C::SetData(class UMaterialInstanceDynamic* DynMat, class UReward* Reward, bool ShowCost, int32_t Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetData");
		
		UTOOLTIP_Season_Reward_C_SetData_Params params {};
		params.DynMat = DynMat;
		params.Reward = Reward;
		params.ShowCost = ShowCost;
		params.Cost = Cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Season_Reward_C::SetCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetCount");
		
		UTOOLTIP_Season_Reward_C_SetCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetDataFromReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReward*                                     Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowCost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Season_Reward_C::SetDataFromReward(class UReward* Reward, bool ShowCost, int32_t Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.SetDataFromReward");
		
		UTOOLTIP_Season_Reward_C_SetDataFromReward_Params params {};
		params.Reward = Reward;
		params.ShowCost = ShowCost;
		params.Cost = Cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Season_Reward_C::Setup(bool ShowCost, int32_t Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.Setup");
		
		UTOOLTIP_Season_Reward_C_Setup_Params params {};
		params.ShowCost = ShowCost;
		params.Cost = Cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.ExecuteUbergraph_TOOLTIP_Season_Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Season_Reward_C::ExecuteUbergraph_TOOLTIP_Season_Reward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C.ExecuteUbergraph_TOOLTIP_Season_Reward");
		
		UTOOLTIP_Season_Reward_C_ExecuteUbergraph_TOOLTIP_Season_Reward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_Season_Reward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_Season_Reward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_Season_Reward.TOOLTIP_Season_Reward_C");
		return ptr;
	}

}


