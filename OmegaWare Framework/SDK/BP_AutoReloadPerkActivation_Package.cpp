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
	 * 		Name   -> Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.Receive_ActivatePerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AutoReloadPerkActivation_C::Receive_ActivatePerk(class APlayerCharacter* Character, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.Receive_ActivatePerk");
		
		UBP_AutoReloadPerkActivation_C_Receive_ActivatePerk_Params params {};
		params.Character = Character;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.OnItemEquipped_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AutoReloadPerkActivation_C::OnItemEquipped_Event_1(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.OnItemEquipped_Event_1");
		
		UBP_AutoReloadPerkActivation_C_OnItemEquipped_Event_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.ExecuteUbergraph_BP_AutoReloadPerkActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AutoReloadPerkActivation_C::ExecuteUbergraph_BP_AutoReloadPerkActivation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.ExecuteUbergraph_BP_AutoReloadPerkActivation");
		
		UBP_AutoReloadPerkActivation_C_ExecuteUbergraph_BP_AutoReloadPerkActivation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AutoReloadPerkActivation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AutoReloadPerkActivation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C");
		return ptr;
	}

}


