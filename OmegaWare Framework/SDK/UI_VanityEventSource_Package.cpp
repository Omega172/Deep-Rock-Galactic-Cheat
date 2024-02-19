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
	 * 		Name   -> Function UI_VanityEventSource.UI_VanityEventSource_C.FromVanityItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VanityEventSource_C::FromVanityItem(class UVanityItem* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VanityEventSource.UI_VanityEventSource_C.FromVanityItem");
		
		UUI_VanityEventSource_C_FromVanityItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VanityEventSource.UI_VanityEventSource_C.SetSourceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVanityEventSource                          InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_VanityEventSource_C::SetSourceData(const struct FVanityEventSource& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VanityEventSource.UI_VanityEventSource_C.SetSourceData");
		
		UUI_VanityEventSource_C_SetSourceData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VanityEventSource.UI_VanityEventSource_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_VanityEventSource_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VanityEventSource.UI_VanityEventSource_C.PreConstruct");
		
		UUI_VanityEventSource_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VanityEventSource.UI_VanityEventSource_C.ExecuteUbergraph_UI_VanityEventSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VanityEventSource_C::ExecuteUbergraph_UI_VanityEventSource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VanityEventSource.UI_VanityEventSource_C.ExecuteUbergraph_UI_VanityEventSource");
		
		UUI_VanityEventSource_C_ExecuteUbergraph_UI_VanityEventSource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_VanityEventSource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_VanityEventSource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VanityEventSource.UI_VanityEventSource_C");
		return ptr;
	}

}


