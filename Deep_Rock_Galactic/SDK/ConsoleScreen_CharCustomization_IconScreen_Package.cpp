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
	 * 		Name   -> Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreen_CharCustomization_IconScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.PreConstruct");
		
		UConsoleScreen_CharCustomization_IconScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_CharCustomization_IconScreen_C::ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen");
		
		UConsoleScreen_CharCustomization_IconScreen_C_ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_CharCustomization_IconScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_CharCustomization_IconScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C");
		return ptr;
	}

}


