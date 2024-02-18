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
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct
	 * 		Flags  -> ()
	 */
	void ULobby_BarTop_Countdown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct");
		
		ULobby_BarTop_Countdown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobby_BarTop_Countdown_C::CountDownChanged(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged");
		
		ULobby_BarTop_Countdown_C_CountDownChanged_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobby_BarTop_Countdown_C::TimerChanged(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged");
		
		ULobby_BarTop_Countdown_C_TimerChanged_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobby_BarTop_Countdown_C::HostCoundownChanged(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged");
		
		ULobby_BarTop_Countdown_C_HostCoundownChanged_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobby_BarTop_Countdown_C::CustomEvent(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent");
		
		ULobby_BarTop_Countdown_C_CustomEvent_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobby_BarTop_Countdown_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct");
		
		ULobby_BarTop_Countdown_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobby_BarTop_Countdown_C::ExecuteUbergraph_Lobby_BarTop_Countdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown");
		
		ULobby_BarTop_Countdown_C_ExecuteUbergraph_Lobby_BarTop_Countdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULobby_BarTop_Countdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULobby_BarTop_Countdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C");
		return ptr;
	}

}


