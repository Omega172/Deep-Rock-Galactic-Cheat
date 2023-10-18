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
	 * 		Name   -> Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionResultInfo*                          MissionResultInfo                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_MissionComplete_C::GetMissionResult(class UMissionResultInfo** MissionResultInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.GetMissionResult");
		
		UConsole_MissionComplete_C_GetMissionResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionResultInfo != nullptr)
			*MissionResultInfo = params.MissionResultInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_MissionComplete_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.PreConstruct");
		
		UConsole_MissionComplete_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen
	 * 		Flags  -> ()
	 */
	void UConsole_MissionComplete_C::BeginScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.BeginScreen");
		
		UConsole_MissionComplete_C_BeginScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionComplete.Console_MissionComplete_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsole_MissionComplete_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.Construct");
		
		UConsole_MissionComplete_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_MissionComplete_C::ExecuteUbergraph_Console_MissionComplete(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionComplete.Console_MissionComplete_C.ExecuteUbergraph_Console_MissionComplete");
		
		UConsole_MissionComplete_C_ExecuteUbergraph_Console_MissionComplete_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsole_MissionComplete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsole_MissionComplete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Console_MissionComplete.Console_MissionComplete_C");
		return ptr;
	}

}


