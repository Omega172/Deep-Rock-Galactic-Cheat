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
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetFSDEventSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InHasSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FJettyBootEventSettings                     InSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_JettyBoots_StartScreen_C::SetFSDEventSettings(bool InHasSettings, const struct FJettyBootEventSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetFSDEventSettings");
		
		UUI_JettyBoots_StartScreen_C_SetFSDEventSettings_Params params {};
		params.InHasSettings = InHasSettings;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StartWithHighScores                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_StartScreen_C::Start(bool StartWithHighScores)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Start");
		
		UUI_JettyBoots_StartScreen_C_Start_Params params {};
		params.StartWithHighScores = StartWithHighScores;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetHighScores
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FJettyBootsScore>                    InHighScores                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InLastIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutCurrentBest                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_StartScreen_C::SetHighScores(TArray<struct FJettyBootsScore>* InHighScores, int32_t InLastIndex, int32_t* OutCurrentBest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SetHighScores");
		
		UUI_JettyBoots_StartScreen_C_SetHighScores_Params params {};
		params.InLastIndex = InLastIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InHighScores != nullptr)
			*InHighScores = params.InHighScores;
		if (OutCurrentBest != nullptr)
			*OutCurrentBest = params.OutCurrentBest;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_501568F5450B58B30B9BA992AA66184E
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_StartScreen_C::Finished_501568F5450B58B30B9BA992AA66184E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_501568F5450B58B30B9BA992AA66184E");
		
		UUI_JettyBoots_StartScreen_C_Finished_501568F5450B58B30B9BA992AA66184E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_FD22870B47131B500E9FB18111157FEE
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_StartScreen_C::Finished_FD22870B47131B500E9FB18111157FEE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Finished_FD22870B47131B500E9FB18111157FEE");
		
		UUI_JettyBoots_StartScreen_C_Finished_FD22870B47131B500E9FB18111157FEE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_StartScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.Construct");
		
		UUI_JettyBoots_StartScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.PlayBootAnim
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_StartScreen_C::PlayBootAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.PlayBootAnim");
		
		UUI_JettyBoots_StartScreen_C_PlayBootAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SwitchContent
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_StartScreen_C::SwitchContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.SwitchContent");
		
		UUI_JettyBoots_StartScreen_C_SwitchContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.ExecuteUbergraph_UI_JettyBoots_StartScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_StartScreen_C::ExecuteUbergraph_UI_JettyBoots_StartScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C.ExecuteUbergraph_UI_JettyBoots_StartScreen");
		
		UUI_JettyBoots_StartScreen_C_ExecuteUbergraph_UI_JettyBoots_StartScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_StartScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_StartScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_StartScreen.UI_JettyBoots_StartScreen_C");
		return ptr;
	}

}


