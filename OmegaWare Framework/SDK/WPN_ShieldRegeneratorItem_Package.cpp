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
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial
	 * 		Flags  -> ()
	 */
	void AWPN_ShieldRegeneratorItem_C::UpdateMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UpdateMaterial");
		
		AWPN_ShieldRegeneratorItem_C_UpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_ShieldRegeneratorItem_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry");
		
		AWPN_ShieldRegeneratorItem_C_GetGearStatEntry_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_ShieldRegeneratorItem_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript");
		
		AWPN_ShieldRegeneratorItem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing
	 * 		Flags  -> ()
	 */
	void AWPN_ShieldRegeneratorItem_C::RecieveStartUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing");
		
		AWPN_ShieldRegeneratorItem_C_RecieveStartUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AThrowableActor*                             thrownActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ShieldRegeneratorItem_C::ReceiveItemThrown(class AThrowableActor* thrownActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown");
		
		AWPN_ShieldRegeneratorItem_C_ReceiveItemThrown_Params params {};
		params.thrownActor = thrownActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRecharged
	 * 		Flags  -> ()
	 */
	void AWPN_ShieldRegeneratorItem_C::ReceiveGeneratorRecharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRecharged");
		
		AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorRecharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ShieldRegeneratorItem_C::ReceiveGeneratorRechargeProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorRechargeProgress");
		
		AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorRechargeProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ShieldRegeneratorItem_C::BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature");
		
		AWPN_ShieldRegeneratorItem_C_BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ShieldRegeneratorItem_C::BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature");
		
		AWPN_ShieldRegeneratorItem_C_BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorReturned
	 * 		Flags  -> ()
	 */
	void AWPN_ShieldRegeneratorItem_C::ReceiveGeneratorReturned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveGeneratorReturned");
		
		AWPN_ShieldRegeneratorItem_C_ReceiveGeneratorReturned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ShieldRegeneratorItem_C::ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem");
		
		AWPN_ShieldRegeneratorItem_C_ExecuteUbergraph_WPN_ShieldRegeneratorItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_ShieldRegeneratorItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_ShieldRegeneratorItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C");
		return ptr;
	}

}


