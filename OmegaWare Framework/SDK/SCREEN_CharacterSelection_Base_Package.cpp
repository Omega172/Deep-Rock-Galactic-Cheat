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
	 * 		Name   -> Function SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C.Show
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Base_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C.Show");
		
		USCREEN_CharacterSelection_Base_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C.ExecuteUbergraph_SCREEN_CharacterSelection_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Base_C::ExecuteUbergraph_SCREEN_CharacterSelection_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C.ExecuteUbergraph_SCREEN_CharacterSelection_Base");
		
		USCREEN_CharacterSelection_Base_C_ExecuteUbergraph_SCREEN_CharacterSelection_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C.Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Base_C::Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C.Back__DelegateSignature");
		
		USCREEN_CharacterSelection_Base_C_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCREEN_CharacterSelection_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCREEN_CharacterSelection_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C");
		return ptr;
	}

}


