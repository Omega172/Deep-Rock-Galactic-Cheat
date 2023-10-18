/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function BP_Promotion_Console.BP_Promotion_Console_C.OnOpenConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerController_SpaceRig_C*             InPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Promotion_Console_C::OnOpenConsole(class ABP_PlayerController_SpaceRig_C* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Promotion_Console.BP_Promotion_Console_C.OnOpenConsole");
		
		ABP_Promotion_Console_C_OnOpenConsole_Params params {};
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Promotion_Console.BP_Promotion_Console_C.ExecuteUbergraph_BP_Promotion_Console
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Promotion_Console_C::ExecuteUbergraph_BP_Promotion_Console(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Promotion_Console.BP_Promotion_Console_C.ExecuteUbergraph_BP_Promotion_Console");
		
		ABP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Promotion_Console_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Promotion_Console_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Promotion_Console.BP_Promotion_Console_C");
		return ptr;
	}

}


