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
	 * 		Name   -> Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.OnRep_HasEquipped
	 * 		Flags  -> ()
	 */
	void ABP_JetBootsBox_Spacerig_C::OnRep_HasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.OnRep_HasEquipped");
		
		ABP_JetBootsBox_Spacerig_C_OnRep_HasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_JetBootsBox_Spacerig_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.UserConstructionScript");
		
		ABP_JetBootsBox_Spacerig_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.BndEvt__BP_JetBootsBox_EquipUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JetBootsBox_Spacerig_C::BndEvt__BP_JetBootsBox_EquipUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.BndEvt__BP_JetBootsBox_EquipUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");
		
		ABP_JetBootsBox_Spacerig_C_BndEvt__BP_JetBootsBox_EquipUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.ReceiveOnRepEquipped
	 * 		Flags  -> ()
	 */
	void ABP_JetBootsBox_Spacerig_C::ReceiveOnRepEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.ReceiveOnRepEquipped");
		
		ABP_JetBootsBox_Spacerig_C_ReceiveOnRepEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_JetBootsBox_Spacerig_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.ReceiveBeginPlay");
		
		ABP_JetBootsBox_Spacerig_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.ExecuteUbergraph_BP_JetBootsBox_Spacerig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JetBootsBox_Spacerig_C::ExecuteUbergraph_BP_JetBootsBox_Spacerig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C.ExecuteUbergraph_BP_JetBootsBox_Spacerig");
		
		ABP_JetBootsBox_Spacerig_C_ExecuteUbergraph_BP_JetBootsBox_Spacerig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_JetBootsBox_Spacerig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_JetBootsBox_Spacerig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_JetBootsBox_Spacerig.BP_JetBootsBox_Spacerig_C");
		return ptr;
	}

}


