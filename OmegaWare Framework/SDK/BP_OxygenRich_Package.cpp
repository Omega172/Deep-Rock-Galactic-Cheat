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
	 * 		Name   -> Function BP_OxygenRich.BP_OxygenRich_C.StartLogic
	 * 		Flags  -> ()
	 */
	void UBP_OxygenRich_C::StartLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.StartLogic");
		
		UBP_OxygenRich_C_StartLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OxygenRich_C::PlayerSpawned(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned");
		
		UBP_OxygenRich_C_PlayerSpawned_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OxygenRich_C::ExecuteUbergraph_BP_OxygenRich(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich");
		
		UBP_OxygenRich_C_ExecuteUbergraph_BP_OxygenRich_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OxygenRich_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OxygenRich_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OxygenRich.BP_OxygenRich_C");
		return ptr;
	}

}


