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
	 * 		Name   -> Function LoreScreen_Master.LoreScreen_Master_C.OnShown
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Master_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.OnShown");
		
		ULoreScreen_Master_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Master.LoreScreen_Master_C.RefreshContent
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Master_C::RefreshContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.RefreshContent");
		
		ULoreScreen_Master_C_RefreshContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Master.LoreScreen_Master_C.PlayIntroAnim
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Master_C::PlayIntroAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.PlayIntroAnim");
		
		ULoreScreen_Master_C_PlayIntroAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Master.LoreScreen_Master_C.ExecuteUbergraph_LoreScreen_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Master_C::ExecuteUbergraph_LoreScreen_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.ExecuteUbergraph_LoreScreen_Master");
		
		ULoreScreen_Master_C_ExecuteUbergraph_LoreScreen_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoreScreen_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoreScreen_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoreScreen_Master.LoreScreen_Master_C");
		return ptr;
	}

}


