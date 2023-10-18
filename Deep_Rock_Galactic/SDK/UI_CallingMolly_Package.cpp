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
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.GetIsPlayerCalling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsCalling                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CallingMolly_C::GetIsPlayerCalling(bool* OutIsCalling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.GetIsPlayerCalling");
		
		UUI_CallingMolly_C_GetIsPlayerCalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsCalling != nullptr)
			*OutIsCalling = params.OutIsCalling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.SetDonkey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMolly*                                      InDonkey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CallingMolly_C::SetDonkey(class AMolly* InDonkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.SetDonkey");
		
		UUI_CallingMolly_C_SetDonkey_Params params {};
		params.InDonkey = InDonkey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.SetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CallingMolly_C::SetPlayerState(class APlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.SetPlayerState");
		
		UUI_CallingMolly_C_SetPlayerState_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.OnDonkeyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMolly*                                      InDonkey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CallingMolly_C::OnDonkeyChanged(class AMolly* InDonkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.OnDonkeyChanged");
		
		UUI_CallingMolly_C_OnDonkeyChanged_Params params {};
		params.InDonkey = InDonkey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.SetIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CallingMolly_C::SetIconVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.SetIconVisible");
		
		UUI_CallingMolly_C_SetIconVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.OnAnimStarted
	 * 		Flags  -> ()
	 */
	void UUI_CallingMolly_C::OnAnimStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.OnAnimStarted");
		
		UUI_CallingMolly_C_OnAnimStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.OnAnimFinished
	 * 		Flags  -> ()
	 */
	void UUI_CallingMolly_C::OnAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.OnAnimFinished");
		
		UUI_CallingMolly_C_OnAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.OnCalledByChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CallingMolly_C::OnCalledByChanged(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.OnCalledByChanged");
		
		UUI_CallingMolly_C_OnCalledByChanged_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CallingMolly_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.Construct");
		
		UUI_CallingMolly_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CallingMolly_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.PreConstruct");
		
		UUI_CallingMolly_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.OnTimeOut
	 * 		Flags  -> ()
	 */
	void UUI_CallingMolly_C::OnTimeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.OnTimeOut");
		
		UUI_CallingMolly_C_OnTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.PingIcon
	 * 		Flags  -> ()
	 */
	void UUI_CallingMolly_C::PingIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.PingIcon");
		
		UUI_CallingMolly_C_PingIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.OnPingFinished
	 * 		Flags  -> ()
	 */
	void UUI_CallingMolly_C::OnPingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.OnPingFinished");
		
		UUI_CallingMolly_C_OnPingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CallingMolly.UI_CallingMolly_C.ExecuteUbergraph_UI_CallingMolly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CallingMolly_C::ExecuteUbergraph_UI_CallingMolly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CallingMolly.UI_CallingMolly_C.ExecuteUbergraph_UI_CallingMolly");
		
		UUI_CallingMolly_C_ExecuteUbergraph_UI_CallingMolly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CallingMolly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CallingMolly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CallingMolly.UI_CallingMolly_C");
		return ptr;
	}

}


