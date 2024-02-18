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
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetLineVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_WithName_C::SetLineVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetLineVisible");
		
		UUI_PlayerSpeaking_WithName_C_SetLineVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_WithName_C::SetPlayerState(class AFSDPlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerState");
		
		UUI_PlayerSpeaking_WithName_C_SetPlayerState_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetIsTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutTalking                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_WithName_C::SetIsTalking(bool IsTalking, bool* OutTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetIsTalking");
		
		UUI_PlayerSpeaking_WithName_C_SetIsTalking_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTalking != nullptr)
			*OutTalking = params.OutTalking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_WithName_C::SetPlayerName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.SetPlayerName");
		
		UUI_PlayerSpeaking_WithName_C_SetPlayerName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PlayerSpeaking_WithName_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.Construct");
		
		UUI_PlayerSpeaking_WithName_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.OnTalkingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_WithName_C::OnTalkingChanged(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.OnTalkingChanged");
		
		UUI_PlayerSpeaking_WithName_C_OnTalkingChanged_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.ExecuteUbergraph_UI_PlayerSpeaking_WithName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_WithName_C::ExecuteUbergraph_UI_PlayerSpeaking_WithName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C.ExecuteUbergraph_UI_PlayerSpeaking_WithName");
		
		UUI_PlayerSpeaking_WithName_C_ExecuteUbergraph_UI_PlayerSpeaking_WithName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlayerSpeaking_WithName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerSpeaking_WithName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlayerSpeaking_WithName.UI_PlayerSpeaking_WithName_C");
		return ptr;
	}

}


