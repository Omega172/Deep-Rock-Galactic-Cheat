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
	 * 		Name   -> Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DiscordEoMConsole_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay");
		
		ABP_DiscordEoMConsole_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DiscordEoMConsole_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick");
		
		ABP_DiscordEoMConsole_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasEoM                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DiscordEoMConsole_C::RecieveEoMData(bool HasEoM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData");
		
		ABP_DiscordEoMConsole_C_RecieveEoMData_Params params {};
		params.HasEoM = HasEoM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DiscordEoMConsole_C::ExecuteUbergraph_BP_DiscordEoMConsole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole");
		
		ABP_DiscordEoMConsole_C_ExecuteUbergraph_BP_DiscordEoMConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DiscordEoMConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DiscordEoMConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DiscordEoMConsole.BP_DiscordEoMConsole_C");
		return ptr;
	}

}


