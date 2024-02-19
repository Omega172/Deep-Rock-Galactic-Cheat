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
	 * 		Name   -> Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price
	 * 		Flags  -> ()
	 */
	void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::SetDrinkableshownprice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price");
		
		UUI_Bar_BackgroundMenu_ItemSpecialBig_C_SetDrinkableshownprice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         InDrinkable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::SetDrinkable(class UDrinkableDataAsset* InDrinkable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable");
		
		UUI_Bar_BackgroundMenu_ItemSpecialBig_C_SetDrinkable_Params params {};
		params.InDrinkable = InDrinkable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct");
		
		UUI_Bar_BackgroundMenu_ItemSpecialBig_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct");
		
		UUI_Bar_BackgroundMenu_ItemSpecialBig_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_BackgroundMenu_ItemSpecialBig_C::ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig");
		
		UUI_Bar_BackgroundMenu_ItemSpecialBig_C_ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_BackgroundMenu_ItemSpecialBig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_BackgroundMenu_ItemSpecialBig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C");
		return ptr;
	}

}


