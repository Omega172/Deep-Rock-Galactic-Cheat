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
	 * 		Name   -> Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemRack_Simple_C::BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		ABP_ItemRack_Simple_C_BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ItemRack_Simple_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.ReceiveBeginPlay");
		
		ABP_ItemRack_Simple_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemRack_Simple_C::BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature");
		
		ABP_ItemRack_Simple_C_BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.ExecuteUbergraph_BP_ItemRack_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemRack_Simple_C::ExecuteUbergraph_BP_ItemRack_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemRack_Simple.BP_ItemRack_Simple_C.ExecuteUbergraph_BP_ItemRack_Simple");
		
		ABP_ItemRack_Simple_C_ExecuteUbergraph_BP_ItemRack_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemRack_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemRack_Simple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemRack_Simple.BP_ItemRack_Simple_C");
		return ptr;
	}

}


