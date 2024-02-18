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
	 * 		Name   -> Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDLCBase*                                    InFromDLC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DLC_Indicator_C::SetFromDLC(class UDLCBase* InFromDLC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromDLC");
		
		UUI_DLC_Indicator_C_SetFromDLC_Params params {};
		params.InFromDLC = InFromDLC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DLC_Indicator_C::SetFromSkin(class UItemSkin* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromSkin");
		
		UUI_DLC_Indicator_C_SetFromSkin_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DLC_Indicator.UI_DLC_Indicator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DLC_Indicator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DLC_Indicator.UI_DLC_Indicator_C.PreConstruct");
		
		UUI_DLC_Indicator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DLC_Indicator.UI_DLC_Indicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_DLC_Indicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DLC_Indicator.UI_DLC_Indicator_C.Construct");
		
		UUI_DLC_Indicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DLC_Indicator.UI_DLC_Indicator_C.ExecuteUbergraph_UI_DLC_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DLC_Indicator_C::ExecuteUbergraph_UI_DLC_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DLC_Indicator.UI_DLC_Indicator_C.ExecuteUbergraph_UI_DLC_Indicator");
		
		UUI_DLC_Indicator_C_ExecuteUbergraph_UI_DLC_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DLC_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DLC_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DLC_Indicator.UI_DLC_Indicator_C");
		return ptr;
	}

}


