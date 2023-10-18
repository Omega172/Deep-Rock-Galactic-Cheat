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
	 * 		Name   -> Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 InController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* ABP_NetworkPlayGameMode_C::GetDefaultPawnClassForController(class AController* InController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController");
		
		ABP_NetworkPlayGameMode_C_GetDefaultPawnClassForController_Params params {};
		params.InController = InController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown
	 * 		Flags  -> ()
	 */
	void ABP_NetworkPlayGameMode_C::RecieveAllDwarvesDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown");
		
		ABP_NetworkPlayGameMode_C_RecieveAllDwarvesDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NetworkPlayGameMode_C::ExecuteUbergraph_BP_NetworkPlayGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode");
		
		ABP_NetworkPlayGameMode_C_ExecuteUbergraph_BP_NetworkPlayGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NetworkPlayGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NetworkPlayGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C");
		return ptr;
	}

}


