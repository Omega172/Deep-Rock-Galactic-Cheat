/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.SetFromLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crafting_MasteryBar_Reward_C::SetFromLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.SetFromLevel");
		
		UUI_Crafting_MasteryBar_Reward_C_SetFromLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.SetResourceReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crafting_MasteryBar_Reward_C::SetResourceReward(class UResourceData* Resource, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.SetResourceReward");
		
		UUI_Crafting_MasteryBar_Reward_C_SetResourceReward_Params params {};
		params.Resource = Resource;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Crafting_MasteryBar_Reward_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.PreConstruct");
		
		UUI_Crafting_MasteryBar_Reward_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.ExecuteUbergraph_UI_Crafting_MasteryBar_Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crafting_MasteryBar_Reward_C::ExecuteUbergraph_UI_Crafting_MasteryBar_Reward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C.ExecuteUbergraph_UI_Crafting_MasteryBar_Reward");
		
		UUI_Crafting_MasteryBar_Reward_C_ExecuteUbergraph_UI_Crafting_MasteryBar_Reward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Crafting_MasteryBar_Reward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Crafting_MasteryBar_Reward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Crafting_MasteryBar_Reward.UI_Crafting_MasteryBar_Reward_C");
		return ptr;
	}

}


