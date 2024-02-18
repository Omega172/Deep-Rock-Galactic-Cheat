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
	 * 		Name   -> Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drinkable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpecialEdition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDrinkableDataAsset*                         OutDrinkable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_SupporterLabel_C::SetDrinkable(class UDrinkableDataAsset* Drinkable, bool* IsSpecialEdition, class UDrinkableDataAsset** OutDrinkable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable");
		
		UUI_Bar_SupporterLabel_C_SetDrinkable_Params params {};
		params.Drinkable = Drinkable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpecialEdition != nullptr)
			*IsSpecialEdition = params.IsSpecialEdition;
		if (OutDrinkable != nullptr)
			*OutDrinkable = params.OutDrinkable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_SupporterLabel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct");
		
		UUI_Bar_SupporterLabel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_SupporterLabel_C::ExecuteUbergraph_UI_Bar_SupporterLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel");
		
		UUI_Bar_SupporterLabel_C_ExecuteUbergraph_UI_Bar_SupporterLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_SupporterLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_SupporterLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C");
		return ptr;
	}

}


