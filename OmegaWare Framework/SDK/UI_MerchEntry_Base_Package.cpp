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
	 * 		Name   -> Function UI_MerchEntry_Base.UI_MerchEntry_Base_C.Log
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_MerchEntry_Base_C::Log(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MerchEntry_Base.UI_MerchEntry_Base_C.Log");
		
		UUI_MerchEntry_Base_C_Log_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MerchEntry_Base.UI_MerchEntry_Base_C.OpenLink
	 * 		Flags  -> ()
	 */
	void UUI_MerchEntry_Base_C::OpenLink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MerchEntry_Base.UI_MerchEntry_Base_C.OpenLink");
		
		UUI_MerchEntry_Base_C_OpenLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MerchEntry_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MerchEntry_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MerchEntry_Base.UI_MerchEntry_Base_C");
		return ptr;
	}

}


