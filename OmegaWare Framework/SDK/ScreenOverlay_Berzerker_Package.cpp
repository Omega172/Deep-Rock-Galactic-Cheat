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
	 * 		Name   -> Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Berzerker_C::PlayFade(EUMGSequencePlayMode PlayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Play Fade");
		
		UScreenOverlay_Berzerker_C_PlayFade_Params params {};
		params.PlayMode = PlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Berzerker_C::OnAnimFadingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.OnAnimFadingFinished");
		
		UScreenOverlay_Berzerker_C_OnAnimFadingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InTint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Berzerker_C::ReceiveBeginOverlay(class UTexture2D* InTexture, const struct FLinearColor& InTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveBeginOverlay");
		
		UScreenOverlay_Berzerker_C_ReceiveBeginOverlay_Params params {};
		params.InTexture = InTexture;
		params.InTint = InTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Berzerker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.Construct");
		
		UScreenOverlay_Berzerker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Berzerker_C::ReceiveEndOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ReceiveEndOverlay");
		
		UScreenOverlay_Berzerker_C_ReceiveEndOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Berzerker_C::ExecuteUbergraph_ScreenOverlay_Berzerker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C.ExecuteUbergraph_ScreenOverlay_Berzerker");
		
		UScreenOverlay_Berzerker_C_ExecuteUbergraph_ScreenOverlay_Berzerker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenOverlay_Berzerker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenOverlay_Berzerker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_Berzerker.ScreenOverlay_Berzerker_C");
		return ptr;
	}

}


