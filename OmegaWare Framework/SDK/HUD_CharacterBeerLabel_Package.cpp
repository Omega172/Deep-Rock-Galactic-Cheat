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
	 * 		Name   -> Function HUD_CharacterBeerLabel.HUD_CharacterBeerLabel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CharacterBeerLabel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterBeerLabel.HUD_CharacterBeerLabel_C.PreConstruct");
		
		UHUD_CharacterBeerLabel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CharacterBeerLabel.HUD_CharacterBeerLabel_C.ExecuteUbergraph_HUD_CharacterBeerLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CharacterBeerLabel_C::ExecuteUbergraph_HUD_CharacterBeerLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CharacterBeerLabel.HUD_CharacterBeerLabel_C.ExecuteUbergraph_HUD_CharacterBeerLabel");
		
		UHUD_CharacterBeerLabel_C_ExecuteUbergraph_HUD_CharacterBeerLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CharacterBeerLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CharacterBeerLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CharacterBeerLabel.HUD_CharacterBeerLabel_C");
		return ptr;
	}

}


