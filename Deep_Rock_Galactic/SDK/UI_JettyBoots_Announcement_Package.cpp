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
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Hide
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Announcement_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Hide");
		
		UUI_JettyBoots_Announcement_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.EndFadeOut
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Announcement_C::EndFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.EndFadeOut");
		
		UUI_JettyBoots_Announcement_C_EndFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.BeginFadeOut
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Announcement_C::BeginFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.BeginFadeOut");
		
		UUI_JettyBoots_Announcement_C_BeginFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.StartAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ENUM_MenuColors                                    InTextColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InNewHighScore                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InDelayBeforeFadeOut                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Announcement_C::StartAnnouncement(const class FText& InText, ENUM_MenuColors InTextColor, int32_t InScore, bool InNewHighScore, float InDelayBeforeFadeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.StartAnnouncement");
		
		UUI_JettyBoots_Announcement_C_StartAnnouncement_Params params {};
		params.InText = InText;
		params.InTextColor = InTextColor;
		params.InScore = InScore;
		params.InNewHighScore = InNewHighScore;
		params.InDelayBeforeFadeOut = InDelayBeforeFadeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Announcement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Construct");
		
		UUI_JettyBoots_Announcement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Level Up
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNewLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Announcement_C::LevelUp(int32_t InNewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Level Up");
		
		UUI_JettyBoots_Announcement_C_LevelUp_Params params {};
		params.InNewLevel = InNewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Announcement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.PreConstruct");
		
		UUI_JettyBoots_Announcement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Game Over
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InNewHighScore                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Announcement_C::GameOver(int32_t InScore, bool InNewHighScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Game Over");
		
		UUI_JettyBoots_Announcement_C_GameOver_Params params {};
		params.InScore = InScore;
		params.InNewHighScore = InNewHighScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.ExecuteUbergraph_UI_JettyBoots_Announcement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Announcement_C::ExecuteUbergraph_UI_JettyBoots_Announcement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.ExecuteUbergraph_UI_JettyBoots_Announcement");
		
		UUI_JettyBoots_Announcement_C_ExecuteUbergraph_UI_JettyBoots_Announcement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Announcement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Announcement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C");
		return ptr;
	}

}


