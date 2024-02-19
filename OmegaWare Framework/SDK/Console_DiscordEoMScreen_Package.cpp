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
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordEoMScreen_C::ClearText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText");
		
		UConsole_DiscordEoMScreen_C_ClearText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordEoMScreen_C::OnFail_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5");
		
		UConsole_DiscordEoMScreen_C_OnFail_D5557812434CB42B270037821C78EAB5_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordEoMScreen_C::OnSuccess_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5");
		
		UConsole_DiscordEoMScreen_C_OnSuccess_D5557812434CB42B270037821C78EAB5_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordEoMScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct");
		
		UConsole_DiscordEoMScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordEoMScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick");
		
		UConsole_DiscordEoMScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDiscordServerData                          discordServerCount                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UConsole_DiscordEoMScreen_C::UpdateUI(const struct FDiscordServerData& discordServerCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI");
		
		UConsole_DiscordEoMScreen_C_UpdateUI_Params params {};
		params.discordServerCount = discordServerCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordEoMScreen_C::DoRunningText(const class FText& Text, int32_t Index, class UTextBlock* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text");
		
		UConsole_DiscordEoMScreen_C_DoRunningText_Params params {};
		params.Text = Text;
		params.Index = Index;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordEoMScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct");
		
		UConsole_DiscordEoMScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasEoM                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_DiscordEoMScreen_C::OnEoMDataReceived(bool HasEoM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received");
		
		UConsole_DiscordEoMScreen_C_OnEoMDataReceived_Params params {};
		params.HasEoM = HasEoM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordEoMScreen_C::OpenDescriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions");
		
		UConsole_DiscordEoMScreen_C_OpenDescriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordEoMScreen_C::PlayerNameRunningEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect");
		
		UConsole_DiscordEoMScreen_C_PlayerNameRunningEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordEoMScreen_C::PlayerFlavorTextRunningEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect");
		
		UConsole_DiscordEoMScreen_C_PlayerFlavorTextRunningEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_DiscordEoMScreen_C::ExecuteUbergraph_Console_DiscordEoMScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen");
		
		UConsole_DiscordEoMScreen_C_ExecuteUbergraph_Console_DiscordEoMScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConsole_DiscordEoMScreen_C::ScreenChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature");
		
		UConsole_DiscordEoMScreen_C_ScreenChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsole_DiscordEoMScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsole_DiscordEoMScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Console_DiscordEoMScreen.Console_DiscordEoMScreen_C");
		return ptr;
	}

}


