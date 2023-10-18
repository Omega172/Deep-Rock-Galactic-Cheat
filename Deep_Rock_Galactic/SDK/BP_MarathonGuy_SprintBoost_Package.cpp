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
	 * 		Name   -> Function BP_MarathonGuy_SprintBoost.BP_MarathonGuy_SprintBoost_C.Receive_ActivatePerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MarathonGuy_SprintBoost_C::Receive_ActivatePerk(class APlayerCharacter* Character, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MarathonGuy_SprintBoost.BP_MarathonGuy_SprintBoost_C.Receive_ActivatePerk");
		
		UBP_MarathonGuy_SprintBoost_C_Receive_ActivatePerk_Params params {};
		params.Character = Character;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MarathonGuy_SprintBoost.BP_MarathonGuy_SprintBoost_C.ExecuteUbergraph_BP_MarathonGuy_SprintBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MarathonGuy_SprintBoost_C::ExecuteUbergraph_BP_MarathonGuy_SprintBoost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MarathonGuy_SprintBoost.BP_MarathonGuy_SprintBoost_C.ExecuteUbergraph_BP_MarathonGuy_SprintBoost");
		
		UBP_MarathonGuy_SprintBoost_C_ExecuteUbergraph_BP_MarathonGuy_SprintBoost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MarathonGuy_SprintBoost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MarathonGuy_SprintBoost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MarathonGuy_SprintBoost.BP_MarathonGuy_SprintBoost_C");
		return ptr;
	}

}


