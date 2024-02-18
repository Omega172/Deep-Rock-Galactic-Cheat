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
	 * 		Name   -> Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_GenericAffliction_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Construct");
		
		UScreenOverlay_GenericAffliction_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InTint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_GenericAffliction_C::ReceiveBeginOverlay(class UTexture2D* InTexture, const struct FLinearColor& InTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveBeginOverlay");
		
		UScreenOverlay_GenericAffliction_C_ReceiveBeginOverlay_Params params {};
		params.InTexture = InTexture;
		params.InTint = InTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_GenericAffliction_C::ReceiveEndOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ReceiveEndOverlay");
		
		UScreenOverlay_GenericAffliction_C_ReceiveEndOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_GenericAffliction_C::PlayFade(EUMGSequencePlayMode PlayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.Play Fade");
		
		UScreenOverlay_GenericAffliction_C_PlayFade_Params params {};
		params.PlayMode = PlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_GenericAffliction_C::OnAnimFadingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.OnAnimFadingFinished");
		
		UScreenOverlay_GenericAffliction_C_OnAnimFadingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_GenericAffliction_C::ExecuteUbergraph_ScreenOverlay_GenericAffliction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C.ExecuteUbergraph_ScreenOverlay_GenericAffliction");
		
		UScreenOverlay_GenericAffliction_C_ExecuteUbergraph_ScreenOverlay_GenericAffliction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenOverlay_GenericAffliction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenOverlay_GenericAffliction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_GenericAffliction.ScreenOverlay_GenericAffliction_C");
		return ptr;
	}

}


