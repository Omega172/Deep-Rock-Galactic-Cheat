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
	 * 		Name   -> Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Column_Unlocks_Arrow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.PreConstruct");
		
		UUI_Perks_Column_Unlocks_Arrow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.SetIsUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Column_Unlocks_Arrow_C::SetIsUnlocked(bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.SetIsUnlocked");
		
		UUI_Perks_Column_Unlocks_Arrow_C_SetIsUnlocked_Params params {};
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Unlocks_Arrow_C::ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow");
		
		UUI_Perks_Column_Unlocks_Arrow_C_ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Perks_Column_Unlocks_Arrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Perks_Column_Unlocks_Arrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C");
		return ptr;
	}

}


