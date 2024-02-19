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
	 * 		Name   -> Function UI_MediaPlayer.UI_MediaPlayer_C.UpdateState
	 * 		Flags  -> ()
	 */
	void UUI_MediaPlayer_C::UpdateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MediaPlayer.UI_MediaPlayer_C.UpdateState");
		
		UUI_MediaPlayer_C_UpdateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MediaPlayer.UI_MediaPlayer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MediaPlayer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MediaPlayer.UI_MediaPlayer_C.Construct");
		
		UUI_MediaPlayer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MediaPlayer.UI_MediaPlayer_C.ReceiveStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMediaPlayerState                                  InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MediaPlayer_C::ReceiveStateChanged(EMediaPlayerState InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MediaPlayer.UI_MediaPlayer_C.ReceiveStateChanged");
		
		UUI_MediaPlayer_C_ReceiveStateChanged_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MediaPlayer.UI_MediaPlayer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MediaPlayer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MediaPlayer.UI_MediaPlayer_C.PreConstruct");
		
		UUI_MediaPlayer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MediaPlayer.UI_MediaPlayer_C.ExecuteUbergraph_UI_MediaPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MediaPlayer_C::ExecuteUbergraph_UI_MediaPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MediaPlayer.UI_MediaPlayer_C.ExecuteUbergraph_UI_MediaPlayer");
		
		UUI_MediaPlayer_C_ExecuteUbergraph_UI_MediaPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MediaPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MediaPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MediaPlayer.UI_MediaPlayer_C");
		return ptr;
	}

}


