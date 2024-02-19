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
	 * 		Name   -> Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Unlocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Column_Unlocks_C::IsUnlocked(bool* Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked");
		
		UUI_Perks_Column_Unlocks_C_IsUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Unlocked != nullptr)
			*Unlocked = params.Unlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Column_Unlocks_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct");
		
		UUI_Perks_Column_Unlocks_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ArrowCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UnlockedCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Unlocks_C::SetArrowCount(int32_t ArrowCount, int32_t UnlockedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count");
		
		UUI_Perks_Column_Unlocks_C_SetArrowCount_Params params {};
		params.ArrowCount = ArrowCount;
		params.UnlockedCount = UnlockedCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UnlockedCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Unlocks_C::SetUnlockedCount(int32_t UnlockedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count");
		
		UUI_Perks_Column_Unlocks_C_SetUnlockedCount_Params params {};
		params.UnlockedCount = UnlockedCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Unlocks_C::ExecuteUbergraph_UI_Perks_Column_Unlocks(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks");
		
		UUI_Perks_Column_Unlocks_C_ExecuteUbergraph_UI_Perks_Column_Unlocks_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Perks_Column_Unlocks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Perks_Column_Unlocks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C");
		return ptr;
	}

}


