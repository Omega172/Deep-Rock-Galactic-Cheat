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
	 * 		Name   -> Function Lore_List_Header.Lore_List_Header_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Headline                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULore_List_Header_C::SetText(const class FText& Headline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_List_Header.Lore_List_Header_C.SetText");
		
		ULore_List_Header_C_SetText_Params params {};
		params.Headline = Headline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_List_Header.Lore_List_Header_C.ExecuteUbergraph_Lore_List_Header
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_List_Header_C::ExecuteUbergraph_Lore_List_Header(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_List_Header.Lore_List_Header_C.ExecuteUbergraph_Lore_List_Header");
		
		ULore_List_Header_C_ExecuteUbergraph_Lore_List_Header_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_List_Header_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_List_Header_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_List_Header.Lore_List_Header_C");
		return ptr;
	}

}


