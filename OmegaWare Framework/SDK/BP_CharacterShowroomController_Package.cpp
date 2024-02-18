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
	 * 		Name   -> Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.Receive_CharacterShown
	 * 		Flags  -> ()
	 */
	void UBP_CharacterShowroomController_C::Receive_CharacterShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.Receive_CharacterShown");
		
		UBP_CharacterShowroomController_C_Receive_CharacterShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.EquipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CharacterShowroomController_C::EquipWeapon(EItemCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.EquipWeapon");
		
		UBP_CharacterShowroomController_C_EquipWeapon_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.ExecuteUbergraph_BP_CharacterShowroomController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CharacterShowroomController_C::ExecuteUbergraph_BP_CharacterShowroomController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.ExecuteUbergraph_BP_CharacterShowroomController");
		
		UBP_CharacterShowroomController_C_ExecuteUbergraph_BP_CharacterShowroomController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CharacterShowroomController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CharacterShowroomController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterShowroomController.BP_CharacterShowroomController_C");
		return ptr;
	}

}


