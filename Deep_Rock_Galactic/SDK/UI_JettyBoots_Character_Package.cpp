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
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.CheckFSDEvents
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Character_C::CheckFSDEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.CheckFSDEvents");
		
		UUI_JettyBoots_Character_C_CheckFSDEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Safe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSafe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Character_C::SetSafe(bool InIsSafe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Safe");
		
		UUI_JettyBoots_Character_C_SetSafe_Params params {};
		params.InIsSafe = InIsSafe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Dead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Character_C::SetDead(bool InIsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Set Dead");
		
		UUI_JettyBoots_Character_C_SetDead_Params params {};
		params.InIsDead = InIsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.SetJetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InJetActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutValueChanged                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutJetActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Character_C::SetJetActive(bool InJetActive, bool* OutValueChanged, bool* OutJetActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.SetJetActive");
		
		UUI_JettyBoots_Character_C_SetJetActive_Params params {};
		params.InJetActive = InJetActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValueChanged != nullptr)
			*OutValueChanged = params.OutValueChanged;
		if (OutJetActive != nullptr)
			*OutJetActive = params.OutJetActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Character_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.Construct");
		
		UUI_JettyBoots_Character_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.OnEventActiveChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDEvent*                                   InFsdEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Character_C::OnEventActiveChanged_Event(class UFSDEvent* InFsdEvent, bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.OnEventActiveChanged_Event");
		
		UUI_JettyBoots_Character_C_OnEventActiveChanged_Event_Params params {};
		params.InFsdEvent = InFsdEvent;
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.ExecuteUbergraph_UI_JettyBoots_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Character_C::ExecuteUbergraph_UI_JettyBoots_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Character.UI_JettyBoots_Character_C.ExecuteUbergraph_UI_JettyBoots_Character");
		
		UUI_JettyBoots_Character_C_ExecuteUbergraph_UI_JettyBoots_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Character.UI_JettyBoots_Character_C");
		return ptr;
	}

}


