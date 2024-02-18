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
	 * 		Name   -> Function UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C.SetHighScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FJettyBootsScore                            InHighscore                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InHighlight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_HighScore_C::SetHighScore(int32_t InIndex, const struct FJettyBootsScore& InHighscore, bool InHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C.SetHighScore");
		
		UUI_JettyBoots_HighScore_C_SetHighScore_Params params {};
		params.InIndex = InIndex;
		params.InHighscore = InHighscore;
		params.InHighlight = InHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_HighScore_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C.PreConstruct");
		
		UUI_JettyBoots_HighScore_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C.ExecuteUbergraph_UI_JettyBoots_HighScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_HighScore_C::ExecuteUbergraph_UI_JettyBoots_HighScore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C.ExecuteUbergraph_UI_JettyBoots_HighScore");
		
		UUI_JettyBoots_HighScore_C_ExecuteUbergraph_UI_JettyBoots_HighScore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_HighScore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_HighScore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_HighScore.UI_JettyBoots_HighScore_C");
		return ptr;
	}

}


