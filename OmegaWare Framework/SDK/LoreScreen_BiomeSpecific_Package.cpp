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
	 * 		Name   -> Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoreScreen_BiomeSpecific_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.Construct");
		
		ULoreScreen_BiomeSpecific_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.RefreshContent
	 * 		Flags  -> ()
	 */
	void ULoreScreen_BiomeSpecific_C::RefreshContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.RefreshContent");
		
		ULoreScreen_BiomeSpecific_C_RefreshContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.ExecuteUbergraph_LoreScreen_BiomeSpecific
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_BiomeSpecific_C::ExecuteUbergraph_LoreScreen_BiomeSpecific(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C.ExecuteUbergraph_LoreScreen_BiomeSpecific");
		
		ULoreScreen_BiomeSpecific_C_ExecuteUbergraph_LoreScreen_BiomeSpecific_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoreScreen_BiomeSpecific_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoreScreen_BiomeSpecific_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoreScreen_BiomeSpecific.LoreScreen_BiomeSpecific_C");
		return ptr;
	}

}


