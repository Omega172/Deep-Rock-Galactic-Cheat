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
	 * 		Name   -> Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSeasonLevel                                SeasonLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UConsoleScreen_Seasons_NextReward_C::SetData(const struct FSeasonLevel& SeasonLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.SetData");
		
		UConsoleScreen_Seasons_NextReward_C_SetData_Params params {};
		params.SeasonLevel = SeasonLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreen_Seasons_NextReward_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.PreConstruct");
		
		UConsoleScreen_Seasons_NextReward_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_Seasons_NextReward_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.Construct");
		
		UConsoleScreen_Seasons_NextReward_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.ExecuteUbergraph_ConsoleScreen_Seasons_NextReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_Seasons_NextReward_C::ExecuteUbergraph_ConsoleScreen_Seasons_NextReward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C.ExecuteUbergraph_ConsoleScreen_Seasons_NextReward");
		
		UConsoleScreen_Seasons_NextReward_C_ExecuteUbergraph_ConsoleScreen_Seasons_NextReward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_Seasons_NextReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_Seasons_NextReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C");
		return ptr;
	}

}


