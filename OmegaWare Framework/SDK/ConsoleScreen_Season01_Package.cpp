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
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.SetNotificationVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreen_Season01_C::SetNotificationVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.SetNotificationVisible");
		
		UConsoleScreen_Season01_C_SetNotificationVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.SetNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_Season01_C::SetNotification(const class FText& Text, class UTexture2D* InIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.SetNotification");
		
		UConsoleScreen_Season01_C_SetNotification_Params params {};
		params.Text = Text;
		params.InIcon = InIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreen_Season01_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.PreConstruct");
		
		UConsoleScreen_Season01_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnClaimStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllClaimed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreen_Season01_C::OnClaimStatusChanged(bool AllClaimed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnClaimStatusChanged");
		
		UConsoleScreen_Season01_C_OnClaimStatusChanged_Params params {};
		params.AllClaimed = AllClaimed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnTokensChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfTokens                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_Season01_C::OnTokensChanged(int32_t NumberOfTokens, int32_t Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnTokensChanged");
		
		UConsoleScreen_Season01_C_OnTokensChanged_Params params {};
		params.NumberOfTokens = NumberOfTokens;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_Season01_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.Construct");
		
		UConsoleScreen_Season01_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnWeaponMaintenanceChanged
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_Season01_C::OnWeaponMaintenanceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnWeaponMaintenanceChanged");
		
		UConsoleScreen_Season01_C_OnWeaponMaintenanceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.ExecuteUbergraph_ConsoleScreen_Season01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_Season01_C::ExecuteUbergraph_ConsoleScreen_Season01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.ExecuteUbergraph_ConsoleScreen_Season01");
		
		UConsoleScreen_Season01_C_ExecuteUbergraph_ConsoleScreen_Season01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_Season01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_Season01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_Season01.ConsoleScreen_Season01_C");
		return ptr;
	}

}


