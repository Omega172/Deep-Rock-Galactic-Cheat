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
	 * 		Name   -> Function ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Season_Progress_TerminalVersion_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C.PreConstruct");
		
		UITM_Season_Progress_TerminalVersion_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Season_Progress_TerminalVersion_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C.Construct");
		
		UITM_Season_Progress_TerminalVersion_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C.ExecuteUbergraph_ITM_Season_Progress_TerminalVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_Progress_TerminalVersion_C::ExecuteUbergraph_ITM_Season_Progress_TerminalVersion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C.ExecuteUbergraph_ITM_Season_Progress_TerminalVersion");
		
		UITM_Season_Progress_TerminalVersion_C_ExecuteUbergraph_ITM_Season_Progress_TerminalVersion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Season_Progress_TerminalVersion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Season_Progress_TerminalVersion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C");
		return ptr;
	}

}


