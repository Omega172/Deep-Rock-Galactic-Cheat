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
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.FadeIn__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_DLC_Audio_C::FadeIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.FadeIn__FinishedFunc");
		
		ABP_DLC_Audio_C_FadeIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.FadeIn__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_DLC_Audio_C::FadeIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.FadeIn__UpdateFunc");
		
		ABP_DLC_Audio_C_FadeIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.BeginAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaPlayer*                                InMediaPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DLC_Audio_C::BeginAudio(class UMediaPlayer* InMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.BeginAudio");
		
		ABP_DLC_Audio_C_BeginAudio_Params params {};
		params.InMediaPlayer = InMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.EndAudio
	 * 		Flags  -> ()
	 */
	void ABP_DLC_Audio_C::EndAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.EndAudio");
		
		ABP_DLC_Audio_C_EndAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DLC_Audio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.ReceiveBeginPlay");
		
		ABP_DLC_Audio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.OnMediaOpened_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_DLC_Audio_C::OnMediaOpened_Event_1(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.OnMediaOpened_Event_1");
		
		ABP_DLC_Audio_C_OnMediaOpened_Event_1_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.OnPlaybackResumed_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_DLC_Audio_C::OnPlaybackResumed_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.OnPlaybackResumed_Event_1");
		
		ABP_DLC_Audio_C_OnPlaybackResumed_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.OnMediaClosed_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_DLC_Audio_C::OnMediaClosed_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.OnMediaClosed_Event_1");
		
		ABP_DLC_Audio_C_OnMediaClosed_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DLC_Audio.BP_DLC_Audio_C.ExecuteUbergraph_BP_DLC_Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DLC_Audio_C::ExecuteUbergraph_BP_DLC_Audio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DLC_Audio.BP_DLC_Audio_C.ExecuteUbergraph_BP_DLC_Audio");
		
		ABP_DLC_Audio_C_ExecuteUbergraph_BP_DLC_Audio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DLC_Audio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DLC_Audio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DLC_Audio.BP_DLC_Audio_C");
		return ptr;
	}

}


