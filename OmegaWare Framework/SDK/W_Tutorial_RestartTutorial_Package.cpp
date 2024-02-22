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
	 * 		Name   -> Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Tutorial_RestartTutorial_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.PreConstruct");
		
		UW_Tutorial_RestartTutorial_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Tutorial_RestartTutorial_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.Construct");
		
		UW_Tutorial_RestartTutorial_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.OnCloseTutorial
	 * 		Flags  -> ()
	 */
	void UW_Tutorial_RestartTutorial_C::OnCloseTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.OnCloseTutorial");
		
		UW_Tutorial_RestartTutorial_C_OnCloseTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.ExecuteUbergraph_W_Tutorial_RestartTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Tutorial_RestartTutorial_C::ExecuteUbergraph_W_Tutorial_RestartTutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.ExecuteUbergraph_W_Tutorial_RestartTutorial");
		
		UW_Tutorial_RestartTutorial_C_ExecuteUbergraph_W_Tutorial_RestartTutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Tutorial_RestartTutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Tutorial_RestartTutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C");
		return ptr;
	}

}


