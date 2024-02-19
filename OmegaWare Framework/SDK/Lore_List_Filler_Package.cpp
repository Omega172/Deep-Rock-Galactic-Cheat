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
	 * 		Name   -> Function Lore_List_Filler.Lore_List_Filler_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfButtons                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_List_Filler_C::SetSize(int32_t NumberOfButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.SetSize");
		
		ULore_List_Filler_C_SetSize_Params params {};
		params.NumberOfButtons = NumberOfButtons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize
	 * 		Flags  -> ()
	 */
	void ULore_List_Filler_C::DecrementSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize");
		
		ULore_List_Filler_C_DecrementSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_List_Filler_C::ExecuteUbergraph_Lore_List_Filler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler");
		
		ULore_List_Filler_C_ExecuteUbergraph_Lore_List_Filler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_List_Filler_C::OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature");
		
		ULore_List_Filler_C_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_List_Filler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_List_Filler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_List_Filler.Lore_List_Filler_C");
		return ptr;
	}

}


