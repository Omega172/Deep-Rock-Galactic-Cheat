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
	 * 		Name   -> Function ForgeScreen.ForgeScreen_C.FrogingDone
	 * 		Flags  -> ()
	 */
	void UForgeScreen_C::FrogingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.FrogingDone");
		
		UForgeScreen_C_FrogingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForgeScreen.ForgeScreen_C.StartForging
	 * 		Flags  -> ()
	 */
	void UForgeScreen_C::StartForging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.StartForging");
		
		UForgeScreen_C_StartForging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForgeScreen.ForgeScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UForgeScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.Construct");
		
		UForgeScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForgeScreen.ForgeScreen_C.ResetForgeAnim
	 * 		Flags  -> ()
	 */
	void UForgeScreen_C::ResetForgeAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.ResetForgeAnim");
		
		UForgeScreen_C_ResetForgeAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForgeScreen.ForgeScreen_C.StartForginAnim
	 * 		Flags  -> ()
	 */
	void UForgeScreen_C::StartForginAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.StartForginAnim");
		
		UForgeScreen_C_StartForginAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForgeScreen.ForgeScreen_C.ExecuteUbergraph_ForgeScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForgeScreen_C::ExecuteUbergraph_ForgeScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.ExecuteUbergraph_ForgeScreen");
		
		UForgeScreen_C_ExecuteUbergraph_ForgeScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForgeScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForgeScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ForgeScreen.ForgeScreen_C");
		return ptr;
	}

}


