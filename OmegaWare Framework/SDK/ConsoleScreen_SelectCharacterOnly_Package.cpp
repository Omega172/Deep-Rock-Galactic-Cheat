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
	 * 		Name   -> Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_SelectCharacterOnly_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.Construct");
		
		UConsoleScreen_SelectCharacterOnly_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_SelectCharacterOnly_C::ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C.ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly");
		
		UConsoleScreen_SelectCharacterOnly_C_ExecuteUbergraph_ConsoleScreen_SelectCharacterOnly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_SelectCharacterOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_SelectCharacterOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_SelectCharacterOnly.ConsoleScreen_SelectCharacterOnly_C");
		return ptr;
	}

}


