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
	 * 		Name   -> Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateFluffStock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomStream                               RandomStream                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	class FString UITM_NewsTicker_C::GenerateFluffStock(const struct FRandomStream& RandomStream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateFluffStock");
		
		UITM_NewsTicker_C_GenerateFluffStock_Params params {};
		params.RandomStream = RandomStream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateTickerText
	 * 		Flags  -> ()
	 */
	void UITM_NewsTicker_C::GenerateTickerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateTickerText");
		
		UITM_NewsTicker_C_GenerateTickerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_NewsTicker.ITM_NewsTicker_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_NewsTicker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_NewsTicker.ITM_NewsTicker_C.Construct");
		
		UITM_NewsTicker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_NewsTicker.ITM_NewsTicker_C.CheckForNewText
	 * 		Flags  -> ()
	 */
	void UITM_NewsTicker_C::CheckForNewText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_NewsTicker.ITM_NewsTicker_C.CheckForNewText");
		
		UITM_NewsTicker_C_CheckForNewText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_NewsTicker.ITM_NewsTicker_C.ExecuteUbergraph_ITM_NewsTicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_NewsTicker_C::ExecuteUbergraph_ITM_NewsTicker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_NewsTicker.ITM_NewsTicker_C.ExecuteUbergraph_ITM_NewsTicker");
		
		UITM_NewsTicker_C_ExecuteUbergraph_ITM_NewsTicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_NewsTicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_NewsTicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_NewsTicker.ITM_NewsTicker_C");
		return ptr;
	}

}


