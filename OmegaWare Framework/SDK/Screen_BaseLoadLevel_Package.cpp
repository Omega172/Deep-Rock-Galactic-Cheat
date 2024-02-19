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
	 * 		Name   -> Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq
	 * 		Flags  -> ()
	 */
	void UScreen_BaseLoadLevel_C::StartLoadSeq()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StartLoadSeq");
		
		UScreen_BaseLoadLevel_C_StartLoadSeq_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader
	 * 		Flags  -> ()
	 */
	void UScreen_BaseLoadLevel_C::StopLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.StopLoader");
		
		UScreen_BaseLoadLevel_C_StopLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.CharacterPossesed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_BaseLoadLevel_C::CharacterPossesed(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.CharacterPossesed");
		
		UScreen_BaseLoadLevel_C_CharacterPossesed_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreen_BaseLoadLevel_C::ExecuteUbergraph_Screen_BaseLoadLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Screen_BaseLoadLevel.Screen_BaseLoadLevel_C.ExecuteUbergraph_Screen_BaseLoadLevel");
		
		UScreen_BaseLoadLevel_C_ExecuteUbergraph_Screen_BaseLoadLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreen_BaseLoadLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreen_BaseLoadLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Screen_BaseLoadLevel.Screen_BaseLoadLevel_C");
		return ptr;
	}

}


