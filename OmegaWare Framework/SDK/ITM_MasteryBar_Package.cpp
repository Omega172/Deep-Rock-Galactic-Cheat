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
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasMasteryLevels                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MasteryBar_C::SetMasteryData(class AFSDPlayerState* Player, class UItemID* Item, bool* HasMasteryLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData");
		
		UITM_MasteryBar_C_SetMasteryData_Params params {};
		params.Player = Player;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasMasteryLevels != nullptr)
			*HasMasteryLevels = params.HasMasteryLevels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MasteryBar_C::AddMasteryBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox");
		
		UITM_MasteryBar_C_AddMasteryBox_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            maxMastery                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentMastery                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FMasteryItem>                        masteryLevels                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UITM_MasteryBar_C::CreateMasteryLevels(int32_t maxMastery, int32_t CurrentMastery, class UItemID* Item, TArray<struct FMasteryItem>* masteryLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels");
		
		UITM_MasteryBar_C_CreateMasteryLevels_Params params {};
		params.maxMastery = maxMastery;
		params.CurrentMastery = CurrentMastery;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (masteryLevels != nullptr)
			*masteryLevels = params.masteryLevels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MasteryBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct");
		
		UITM_MasteryBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased
	 * 		Flags  -> ()
	 */
	void UITM_MasteryBar_C::ItemUpgradePurchased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased");
		
		UITM_MasteryBar_C_ItemUpgradePurchased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MasteryBar_C::ExecuteUbergraph_ITM_MasteryBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar");
		
		UITM_MasteryBar_C_ExecuteUbergraph_ITM_MasteryBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasteryItem                                Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UITM_MasteryBar_C::OnItemRewarded__DelegateSignature(const struct FMasteryItem& Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature");
		
		UITM_MasteryBar_C_OnItemRewarded__DelegateSignature_Params params {};
		params.Reward = Reward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MasteryBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MasteryBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MasteryBar.ITM_MasteryBar_C");
		return ptr;
	}

}


