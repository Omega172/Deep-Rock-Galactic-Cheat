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
	 * 		Name   -> Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BoscoAmmoRefillsLable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.PreConstruct");
		
		UHUD_BoscoAmmoRefillsLable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_BoscoAmmoRefillsLable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.Construct");
		
		UHUD_BoscoAmmoRefillsLable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.ExecuteUbergraph_HUD_BoscoAmmoRefillsLable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BoscoAmmoRefillsLable_C::ExecuteUbergraph_HUD_BoscoAmmoRefillsLable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.ExecuteUbergraph_HUD_BoscoAmmoRefillsLable");
		
		UHUD_BoscoAmmoRefillsLable_C_ExecuteUbergraph_HUD_BoscoAmmoRefillsLable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_BoscoAmmoRefillsLable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BoscoAmmoRefillsLable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C");
		return ptr;
	}

}


