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
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.CreateEntries
	 * 		Flags  -> ()
	 */
	void UUI_PlayerSpeaking_List_C::CreateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.CreateEntries");
		
		UUI_PlayerSpeaking_List_C_CreateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AFSDPlayerState*>                     OutStates                                                  (Parm, OutParm)
	 */
	void UUI_PlayerSpeaking_List_C::GetPlayerStates(TArray<class AFSDPlayerState*>* OutStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerStates");
		
		UUI_PlayerSpeaking_List_C_GetPlayerStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStates != nullptr)
			*OutStates = params.OutStates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_List_C::GetPlayerState(int32_t Index, class AFSDPlayerState** State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.GetPlayerState");
		
		UUI_PlayerSpeaking_List_C_GetPlayerState_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_List_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.PreConstruct");
		
		UUI_PlayerSpeaking_List_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PlayerSpeaking_List_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.Construct");
		
		UUI_PlayerSpeaking_List_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.UpdateEntries
	 * 		Flags  -> ()
	 */
	void UUI_PlayerSpeaking_List_C::UpdateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.UpdateEntries");
		
		UUI_PlayerSpeaking_List_C_UpdateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerJoined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_List_C::OnPlayerJoined(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerJoined");
		
		UUI_PlayerSpeaking_List_C_OnPlayerJoined_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_List_C::OnPlayerLeave(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.OnPlayerLeave");
		
		UUI_PlayerSpeaking_List_C_OnPlayerLeave_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.ExecuteUbergraph_UI_PlayerSpeaking_List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_List_C::ExecuteUbergraph_UI_PlayerSpeaking_List(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C.ExecuteUbergraph_UI_PlayerSpeaking_List");
		
		UUI_PlayerSpeaking_List_C_ExecuteUbergraph_UI_PlayerSpeaking_List_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlayerSpeaking_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerSpeaking_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlayerSpeaking_List.UI_PlayerSpeaking_List_C");
		return ptr;
	}

}


