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
	 * 		Name   -> Function BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C.ReceiveOnInitialized
	 * 		Flags  -> ()
	 */
	void UBP_Tutorial_Hint_BrokenMiniMule_C::ReceiveOnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C.ReceiveOnInitialized");
		
		UBP_Tutorial_Hint_BrokenMiniMule_C_ReceiveOnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C.ReceiveOnShown
	 * 		Flags  -> ()
	 */
	void UBP_Tutorial_Hint_BrokenMiniMule_C::ReceiveOnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C.ReceiveOnShown");
		
		UBP_Tutorial_Hint_BrokenMiniMule_C_ReceiveOnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C.ExecuteUbergraph_BP_Tutorial_Hint_BrokenMiniMule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Tutorial_Hint_BrokenMiniMule_C::ExecuteUbergraph_BP_Tutorial_Hint_BrokenMiniMule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C.ExecuteUbergraph_BP_Tutorial_Hint_BrokenMiniMule");
		
		UBP_Tutorial_Hint_BrokenMiniMule_C_ExecuteUbergraph_BP_Tutorial_Hint_BrokenMiniMule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Tutorial_Hint_BrokenMiniMule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Tutorial_Hint_BrokenMiniMule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tutorial_Hint_BrokenMiniMule.BP_Tutorial_Hint_BrokenMiniMule_C");
		return ptr;
	}

}


