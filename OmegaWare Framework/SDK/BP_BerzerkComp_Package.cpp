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
	 * 		Name   -> Function BP_BerzerkComp.BP_BerzerkComp_C.Receive_ActivatePerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BerzerkComp_C::Receive_ActivatePerk(class APlayerCharacter* Character, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BerzerkComp.BP_BerzerkComp_C.Receive_ActivatePerk");
		
		UBP_BerzerkComp_C_Receive_ActivatePerk_Params params {};
		params.Character = Character;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BerzerkComp.BP_BerzerkComp_C.OnItemEquipped_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BerzerkComp_C::OnItemEquipped_Event_1(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BerzerkComp.BP_BerzerkComp_C.OnItemEquipped_Event_1");
		
		UBP_BerzerkComp_C_OnItemEquipped_Event_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BerzerkComp.BP_BerzerkComp_C.ExecuteUbergraph_BP_BerzerkComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BerzerkComp_C::ExecuteUbergraph_BP_BerzerkComp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BerzerkComp.BP_BerzerkComp_C.ExecuteUbergraph_BP_BerzerkComp");
		
		UBP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BerzerkComp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BerzerkComp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BerzerkComp.BP_BerzerkComp_C");
		return ptr;
	}

}


