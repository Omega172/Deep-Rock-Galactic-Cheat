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
	 * 		Name   -> Function HUD_Subtitles.HUD_Subtitles_C.OnPlayerShoutStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              InDuration                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Subtitles_C::OnPlayerShoutStart(class APlayerCharacter* InSender, const class FText& InText, float InDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Subtitles.HUD_Subtitles_C.OnPlayerShoutStart");
		
		UHUD_Subtitles_C_OnPlayerShoutStart_Params params {};
		params.InSender = InSender;
		params.InText = InText;
		params.InDuration = InDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Subtitles.HUD_Subtitles_C.OnSubtitleShoutStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              InDuration                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Subtitles_C::OnSubtitleShoutStart(class APlayerCharacter* InSender, const class FText& InText, float InDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Subtitles.HUD_Subtitles_C.OnSubtitleShoutStart");
		
		UHUD_Subtitles_C_OnSubtitleShoutStart_Params params {};
		params.InSender = InSender;
		params.InText = InText;
		params.InDuration = InDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Subtitles.HUD_Subtitles_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Subtitles_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Subtitles.HUD_Subtitles_C.Construct");
		
		UHUD_Subtitles_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Subtitles.HUD_Subtitles_C.ExecuteUbergraph_HUD_Subtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Subtitles_C::ExecuteUbergraph_HUD_Subtitles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Subtitles.HUD_Subtitles_C.ExecuteUbergraph_HUD_Subtitles");
		
		UHUD_Subtitles_C_ExecuteUbergraph_HUD_Subtitles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Subtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Subtitles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Subtitles.HUD_Subtitles_C");
		return ptr;
	}

}


