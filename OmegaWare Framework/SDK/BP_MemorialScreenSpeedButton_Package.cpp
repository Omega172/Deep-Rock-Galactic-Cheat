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
	 * 		Name   -> Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast
	 * 		Flags  -> ()
	 */
	void ABP_MemorialScreenSpeedButton_C::OnRep_IsFast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast");
		
		ABP_MemorialScreenSpeedButton_C_OnRep_IsFast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MemorialScreenSpeedButton_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay");
		
		ABP_MemorialScreenSpeedButton_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_MemorialScreenSpeedButton_C::OnMatchStarted_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1");
		
		ABP_MemorialScreenSpeedButton_C_OnMatchStarted_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MemorialScreenSpeedButton_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");
		
		ABP_MemorialScreenSpeedButton_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MemorialScreenSpeedButton_C::ExecuteUbergraph_BP_MemorialScreenSpeedButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton");
		
		ABP_MemorialScreenSpeedButton_C_ExecuteUbergraph_BP_MemorialScreenSpeedButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MemorialScreenSpeedButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MemorialScreenSpeedButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C");
		return ptr;
	}

}


