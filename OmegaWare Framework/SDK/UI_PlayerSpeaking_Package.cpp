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
	 * 		Name   -> Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.PreConstruct");
		
		UUI_PlayerSpeaking_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnTalkingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_C::OnTalkingChanged(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnTalkingChanged");
		
		UUI_PlayerSpeaking_C_OnTalkingChanged_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.SetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_C::SetPlayerState(class AFSDPlayerState* NewPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.SetPlayerState");
		
		UUI_PlayerSpeaking_C_SetPlayerState_Params params {};
		params.NewPlayerState = NewPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.ExecuteUbergraph_UI_PlayerSpeaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerSpeaking_C::ExecuteUbergraph_UI_PlayerSpeaking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.ExecuteUbergraph_UI_PlayerSpeaking");
		
		UUI_PlayerSpeaking_C_ExecuteUbergraph_UI_PlayerSpeaking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerSpeaking_C::OnChanged__DelegateSignature(bool InTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerSpeaking.UI_PlayerSpeaking_C.OnChanged__DelegateSignature");
		
		UUI_PlayerSpeaking_C_OnChanged__DelegateSignature_Params params {};
		params.InTalking = InTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlayerSpeaking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerSpeaking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlayerSpeaking.UI_PlayerSpeaking_C");
		return ptr;
	}

}


