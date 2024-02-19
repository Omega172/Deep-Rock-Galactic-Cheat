/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UResourceData*, int32_t>                TargetMap                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Bar_DrinkCost_C::SetCostWidgets(TMap<class UResourceData*, int32_t> TargetMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets");
		
		UUI_Bar_DrinkCost_C_SetCostWidgets_Params params {};
		params.TargetMap = TargetMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drinkable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowUnlockPrice                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_DrinkCost_C::ShowCost(class UDrinkableDataAsset* Drinkable, bool ShowUnlockPrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost");
		
		UUI_Bar_DrinkCost_C_ShowCost_Params params {};
		params.Drinkable = Drinkable;
		params.ShowUnlockPrice = ShowUnlockPrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Bar_DrinkCost_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct");
		
		UUI_Bar_DrinkCost_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBeersFree                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_DrinkCost_C::OnFreeBeerRewardChanged(bool IsBeersFree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged");
		
		UUI_Bar_DrinkCost_C_OnFreeBeerRewardChanged_Params params {};
		params.IsBeersFree = IsBeersFree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UResourceData*, int32_t>                Cost                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Bar_DrinkCost_C::ShowFixedCost(TMap<class UResourceData*, int32_t> Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost");
		
		UUI_Bar_DrinkCost_C_ShowFixedCost_Params params {};
		params.Cost = Cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_DrinkCost_C::ExecuteUbergraph_UI_Bar_DrinkCost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost");
		
		UUI_Bar_DrinkCost_C_ExecuteUbergraph_UI_Bar_DrinkCost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_DrinkCost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_DrinkCost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_DrinkCost.UI_Bar_DrinkCost_C");
		return ptr;
	}

}


