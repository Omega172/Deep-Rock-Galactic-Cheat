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
	 * 		Name   -> Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_Content_Weaknesses_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct");
		
		ULore_Content_Weaknesses_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren
	 * 		Flags  -> ()
	 */
	void ULore_Content_Weaknesses_C::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren");
		
		ULore_Content_Weaknesses_C_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageTypeDescription                      Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULore_Content_Weaknesses_C::AddIcon(const struct FDamageTypeDescription& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon");
		
		ULore_Content_Weaknesses_C_AddIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_Content_Weaknesses_C::PlayFade(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade");
		
		ULore_Content_Weaknesses_C_PlayFade_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Content_Weaknesses_C::ExecuteUbergraph_Lore_Content_Weaknesses(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses");
		
		ULore_Content_Weaknesses_C_ExecuteUbergraph_Lore_Content_Weaknesses_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_Content_Weaknesses_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_Content_Weaknesses_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_Content_Weaknesses.Lore_Content_Weaknesses_C");
		return ptr;
	}

}


