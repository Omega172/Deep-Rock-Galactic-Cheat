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
	 * 		Name   -> Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Headline                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULore_Container_CombatTip_C::SetText(const class FText& Headline, const class FText& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText");
		
		ULore_Container_CombatTip_C_SetText_Params params {};
		params.Headline = Headline;
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_Container_CombatTip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct");
		
		ULore_Container_CombatTip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro
	 * 		Flags  -> ()
	 */
	void ULore_Container_CombatTip_C::PlayIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro");
		
		ULore_Container_CombatTip_C_PlayIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_CombatTip_C::ExecuteUbergraph_Lore_Container_CombatTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip");
		
		ULore_Container_CombatTip_C_ExecuteUbergraph_Lore_Container_CombatTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_Container_CombatTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_Container_CombatTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_Container_CombatTip.Lore_Container_CombatTip_C");
		return ptr;
	}

}


