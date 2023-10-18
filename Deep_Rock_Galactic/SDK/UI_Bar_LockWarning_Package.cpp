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
	 * 		Name   -> Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop
	 * 		Flags  -> ()
	 */
	void UUI_Bar_LockWarning_C::AnimStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop");
		
		UUI_Bar_LockWarning_C_AnimStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay
	 * 		Flags  -> ()
	 */
	void UUI_Bar_LockWarning_C::AnimPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay");
		
		UUI_Bar_LockWarning_C_AnimPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Bar_LockWarning_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct");
		
		UUI_Bar_LockWarning_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drinkable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_LockWarning_C::SetPrice(class UDrinkableDataAsset* Drinkable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice");
		
		UUI_Bar_LockWarning_C_SetPrice_Params params {};
		params.Drinkable = Drinkable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UResourceData*, int32_t>                Cost                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Bar_LockWarning_C::SetFixedPrice(TMap<class UResourceData*, int32_t> Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice");
		
		UUI_Bar_LockWarning_C_SetFixedPrice_Params params {};
		params.Cost = Cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_LockWarning_C::ExecuteUbergraph_UI_Bar_LockWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning");
		
		UUI_Bar_LockWarning_C_ExecuteUbergraph_UI_Bar_LockWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_LockWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_LockWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_LockWarning.UI_Bar_LockWarning_C");
		return ptr;
	}

}


